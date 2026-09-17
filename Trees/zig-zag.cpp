#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
void sol(TreeNode* root, vector<vector<int>> & ans){
    if(root==NULL) return ;
    queue<TreeNode*> q;
    q.push(root);
    bool LtoR = true;
    while(!q.empty()){
        int n = q.size();
        vector<int> vec(n);

        for(int i=0;i<n;i++){
            TreeNode* frontnode = q.front();
            q.pop();
            int idx = LtoR ? i : n-i-1;
            vec[idx] = frontnode->val;

            if(frontnode->left){
                q.push(frontnode->left);
            }
            if(frontnode->right){
                q.push(frontnode->right);
            }
        }
        LtoR = !LtoR;
        ans.push_back(vec);
    }

}
// int 
int main(){

}