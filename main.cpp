#include <bits/stdc++.h>
#include "t.h"
#include "t.cpp"
using namespace std;

int main()
{
    // cin >> N;
    string fname;
    fname = "new_twitter.csv";

    vector<vector<string>> content;
    vector<string> row;
    string line, word;

    fstream file(fname, ios::in);
    if (file.is_open())
    {
        while (getline(file, line))
        {
            row.clear();
            stringstream str(line);
            while (getline(str, word, ','))
                row.push_back(word);
            content.push_back(row);
        }
    }
    else
        cout << "Could not open the file\n";
    BST b, *root = NULL;
    root = b.Insert(root, stoi(content[0][1]));
    for (int i = 1; i < content.size(); i++)
    {
        b.Insert(root, stoi(content[i][1]));
    }
    // b.Inorder(root);
    // b.Print(root);
    for (int i = 0; i < content.size(); i++)
    {
        accounts.insert(stoi(content[i][0]));
        accounts.insert(stoi(content[i][1]));
    }
    intomap(accounts);
    for (int i = 0; i < content.size(); i++)
    {
        int a = idx[stoi(content[i][0])];
        int b = idx[stoi(content[i][1])];
        add_edge(a, b);
    }
    displayMatrix(82000);
    return 0;
}