#pragma once
#include <bits/stdc++.h>
using namespace std;

class BST
{
    int data;
    int followers;
    BST *left, *right;
    multimap<int, int, greater<int>> mm;
    int N = 50;

public:
    BST();
    BST(int);
    BST *Insert(BST *, int);
    void Inorder(BST *);
    void Print(BST *);
};

// void PrintAccounts(set<int> accounts);
// void intomap(set<int> accounts);
// void Printmap();

set<int> accounts;
vector<vector<int>> vertArr;
map<int, int> idx;
void intomap(set<int>);
void displayMatrix(int);
void add_edge(int, int);