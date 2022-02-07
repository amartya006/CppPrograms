#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> levelOrder(TreeNode* root){
    vector<vector<int>> ans;
    if(root == NULL){
        return ans;
    }
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i=0; i<size; i++){
            TreeNode* node = q.front();
            q.pop();
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            level.push_back(node);
        }
        ans.push_back(level);
    }
    return ans;
}

int main(){

    // TreeNode* root = new TreeNode(1);
    // root->left = new TreeNode(2);
    // root->right = new TreeNode(3);

    // root->left->left = new TreeNode(4);
    // root->left->right = new TreeNode(5);
    // root->right->left = new TreeNode(6);
    // root->right->right = new TreeNode(7);

    // vector<vector<int>> v = levelOrder(root);
    // for(int i=0; i<v.size(); i++){
    //     for(int j=0; j<v[i].size(); j++){
    //         cout<<v[i][j]<<" ";
    //     }
    // }

    return 0;
}