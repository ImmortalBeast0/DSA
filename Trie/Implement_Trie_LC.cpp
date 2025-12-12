#include<bits/stdc++.h>
using namespace std;

struct node{
    bool isEnd = false;
    node *children[26];

    node(){
        for(int i=0;i<26;i+=1)
            children[i] = nullptr;
    }
};

struct trie{

    node *root;
    trie(){
        root = new node();
    }
    void  insert(string &s){
        node *curr = root;
        for(auto c : s){
            int id = c - 'a';
            if(curr->children[id] == nullptr){
                curr->children[id] =  new node();
            }
            curr = curr->children[id];
        }
        curr->isEnd = true;
    }

    bool search(string &s){
        node *curr = root;
        for(auto c : s){
            int id = c - 'a';
            if(curr->children[id] == nullptr)
                return false;
            curr = curr->children[id];
        }
        
        return curr->is
End;
    }

    bool psearch(string &s){
        node* curr = root;
        for(auto c : s){
            int id = c - 'a';
            if(curr->children[id] == nullptr)
                return false;
            curr = curr->children[id];
        }
        
        return true;
    }
};

class Trie {
public:

    trie t;
    Trie() {
        t = trie();
    }
    
    void insert(string word) {
        t.insert(word);
    }
    
    bool search(string word) {
        return t.search(word);
    }
    
    bool startsWith(string prefix) {
        return t.psearch(prefix);
    }
};

