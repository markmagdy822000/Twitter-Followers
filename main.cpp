#include <bits/stdc++.h>
#include "t.h"
#include "t.cpp"
using namespace std;

int main()
{
    // cout << "enter number of influencers" << endl;
    // cin >> N;
    string fname;
    fname = "sorted_int_column1.csv";

    vector<vector<string>> content;
    vector<string> row;
    string line, word;
    fstream file(fname, ios::in);
    if (file.is_open())
    {
        // O(n)
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

    // O(nlogn)
    for (int i = 1; i < content.size(); i++)
    {
        b.Insert(root, stoi(content[i][1]));
    }

    b.Inorder(root);
    b.Print(root);

    // ANOTHER FILE --------------------------------

    string fname2;
    fname2 = "sorted_int_column2.csv";

    vector<vector<string>> content2;
    vector<string> row2;
    string line2, word2;

    fstream file2(fname2, ios::in);
    if (file2.is_open())
    {
        // O(n)
        while (getline(file2, line2))
        {
            row2.clear();
            stringstream str2(line2);
            while (getline(str2, word2, ','))
                row2.push_back(word2);
            content2.push_back(row2);
        }
    }
    else
    {
        cout << "Could not open the file\n";
    }
    // cout << "enter given id: " << endl;
    // cin >> givenId;

    // O(n)
    for (int i = 0; i < content2.size(); i++)
    {
        if (givenId == stoll(content2[i][0]))
            IM.push_back(stoll(content2[i][1]));
    }

    // O(mlog(m))
    sort(IM.begin(), IM.end());
    print(IM, "Important_page:");
    int j = 0; // index of IM

    // O(n*m)
    for (int i = 0; i < content.size(); i++)
    {
        if (IM[j] == stoll(content2[i][1]))
        {
            put(stoll(content2[i][0]));
            // if the element after is not an important page i.e (we are in thee last page )
            if (IM[j] == stoll(content2[i + 1][1]))
                flag = true;
        }
        if (flag)
        {
            j++;
            flag = false;
        }
    }

    threshold = 5;
    // O(m)
    int jj = 0;
    for (int i = 0; i < my_vector.size(); i++)
    {
        if (score[i] >= threshold)
        {

            cout << ++jj << ". score: " << score[i] << "\t";
            score[i] = -999999;
            cout << "sugested friend: " << my_vector[i] << endl;
        }
    }
    // cout << "threshold: " << threshold << endl;

    return 0;
}

// multimap<int, int, greater<int>> mm;
// // id1 , id2
// set<pair<int, int>> s;
// void intofile(int, int);

// int N = 5;

// int main()
// {
//     // cin >> N;
//     string fname;
//     fname = "twitter.csv";

//     vector<vector<string>> content;
//     vector<string> row;
//     string line, word;

//     fstream file(fname, ios::in);
//     if (file.is_open())
//     {
//         while (getline(file, line))
//         {
//             row.clear();
//             stringstream str(line);
//             while (getline(str, word, ','))
//                 row.push_back(word);
//             content.push_back(row);
//         }
//     }
//     for (int i = 0; i < content.size(); i++)
//     {
//         InsertSet(stoi(content[i][0]), stoi(content[i][1]));
//     }
//     PrintSet(s);
//     return 0;
// }
// void InsertSet(int a, int b)
// {
//     s.insert({a, b});
// }
// void PrintSet(set<pair<int, int>> s)
// {
//     int j = 0;
//     for (auto i : s)
//     {
//         cout << ++j << " . " << i.first << " " << i.second << endl;
//         intofile(i.first, i.second);
//     }
// }
// // put as string ifneeded
// void intofile(int a, int b)
// {
//     fstream fout;
//     fout.open("new_twiiter.csv", ios::out | ios::app);
//     fout << a << "," << b << endl;
// }
