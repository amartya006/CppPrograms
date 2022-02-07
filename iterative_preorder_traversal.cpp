#include<bits/stdc++.h>
using namespace std;

vector<int> preOrder(TreeNode* root){
    vector<int> ans;
    if(root == NULL){
        return ans;
    }
    stack<TreeNode*> st;
    st.push(root);
    while(!st.empty()){
        root = st.top();
        st.pop();
        ans.push_back(node->val);
        if(node->right != NULL) st.push(node->right);
        if(node->left != NULL) st.push(node->left);
        
    }
    return ans;
}

int main(){

    return 0;
}