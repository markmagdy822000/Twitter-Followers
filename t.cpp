#include "t.h"
#include <bits/stdc++.h>
using namespace std;

BST ::BST() : data(0), followers(1), left(NULL), right(NULL) {}

BST ::BST(int value)
{
    data = value;
    left = right = NULL;
}

BST *BST ::Insert(BST *root, int value)
{
    if (!root)
    {
        return new BST(value);
    }

    if (value > root->data)
    {
        root->right = Insert(root->right, value);
    }
    else if (value < root->data)
    {
        root->left = Insert(root->left, value);
    }
    else
        root->followers += 1;

    return root;
}

void BST ::Inorder(BST *root)
{
    if (!root)
    {
        return;
    }
    Inorder(root->left);
    mm.insert({root->followers, root->data});
    Inorder(root->right);
}

void BST ::Print(BST *root)
{
    int i = 1;
    for (auto m : mm)
    {
        if (i == N)
            break;
        cout << m.second << "\t" << m.first + 1 << endl;
        i++;
    }
}

void displayMatrix(int v)
{
    int i, j;
    for (i = 0; i < v; i++)
    {
        for (j = 0; j < v; j++)
        {
            cout << vertArr[i][j] << " ";
        }
        cout << endl;
    }
}

void add_edge(int u, int v)
{
    vertArr[u][v] = 1;
}

void intomap(set<int> accounts)
{
    int j = 0;
    for (auto id : accounts)
    {
        idx.insert({id, ++j});
    }
}
