#include "t.h"
#include <bits/stdc++.h>
using namespace std;

BST ::BST() : data(0), followers(1), left(NULL), right(NULL) {}

BST ::BST(int value)
{
    data = value;
    left = right = NULL;
}

// complexity = O(logn)
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

// nlog(n)
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

// O(n)
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

// O(m)
void printInt(vector<int> v, string quote)
{
    for (int i = 0; i < v.size(); i++)
        cout << i << ". " << quote << "  " << v[i] << endl;
}

// O(m)
void print(vector<long> v, string quote)
{
    for (int i = 0; i < v.size(); i++)
        cout << i << ". " << quote << "  " << v[i] << endl;
}

// O(m)
void put(long id)
{
    for (int i = 0; i < my_vector.size(); i++)
    {
        if (my_vector[i] == id)
        {
            score[i] += 1;
            if (maxScore < score[i])
                maxScore = score[i];
            return;
        }
    }
    my_vector.push_back(id);
}

// n => content size
// m => max common pages size
