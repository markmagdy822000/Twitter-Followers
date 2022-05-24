#pragma once
#include <bits/stdc++.h>
using namespace std;

int N = 50;
class BST
{
    int data;
    int followers;
    BST *left, *right;
    multimap<int, int, greater<int>> mm;

public:
    BST();
    BST(int);
    BST *Insert(BST *, int);
    void Inorder(BST *);
    void Print(BST *);
};

long givenId = 12;
int threshold = 3;
bool flag = false;
int maxScore = 0;
vector<long> IM;
vector<long> my_vector;
int score[82000]{};
