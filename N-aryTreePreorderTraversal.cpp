
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;
class Solution {
    public:
        vector<int> preorder(Node* root) {
            vector<int>v;
                if(!root)
                return {};
                v.push_back(root -> val);
                for(int i = 0 ; i < root -> children.size();i++){
                    vector<int>v1= preorder(root -> children[i]);
                    v.insert(v.end(),v1.begin(),v1.end());
                }
                return v;
        }
    };