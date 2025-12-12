#include<bits/stdc++.h>
using namespace std;

#define int long long

struct Node{
    int isEnd;
    Node *child[26];
    Node(){
        isEnd = 0;
        for(int i=0;i<26;i++)
            child[i] = nullptr;
    }
};

struct Trie{
    Node *root;

    void insert(string s){
        Node *cur = root;
        for(char c : s){
            int id = c - 'a';
            if(cur->child[id] == nullptr)
                cur->child[id] = new Node();
            cur = cur->child[id];
        }

        cur->isEnd += 1;
    }

    int search(string s){
        Node *cur = root;
        for(char c : s){
            int id = c - 'a';
            if(cur->child[id] == nullptr)
                return false;
            cur = cur->child[id];
        }

        return cur->isEnd;
    }

};

