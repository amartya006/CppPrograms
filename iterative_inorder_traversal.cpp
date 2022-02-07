#include<bits/stdc++.h>
using namespace std;

vector<int> inOrder(TreeNode* root){
    stack<TreeNode*> st;
    vector<int> v;
    TreeNode* node = root;
    while(true){
        if(node!=NULL){
            st.push(node);
            node = node->left;
        } else{
            if(st.empty()) break;
            node = st.top();
            st.pop();
            v.push_back(node->val);
            node= node->right;
        }
    }
    return v;
}

int main(){

    return 0;
}