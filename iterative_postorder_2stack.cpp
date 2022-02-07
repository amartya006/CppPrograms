#include<bits/stdc++.h>
using namespace std;

vector<int> postOrder(TreeNode* root){
    vector<int> post;
    stack<TreeNode*> st1, st2;
    if(root == NULL){
        return post;
    }
    st1.push(root);
    while(!st1.empty()){
        root = st1.top();
        st1.pop();
        st2.push(root);
        if(root->left != NULL){
            st1.push(root);
        }
        if(root->right != NULL){
            st1.push(root);
        }
    }
    while(!st2.empty()){
        post.push_back(st2.top());
        st2.pop();
    }
    return post;
}

int main(){

    return 0;
}