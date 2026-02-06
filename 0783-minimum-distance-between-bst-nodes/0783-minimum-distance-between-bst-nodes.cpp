/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
        // int min1 = 0;
        // int min2 = 0;
    // void solve(TreeNode* root,int &min1,int &min2){
    //     if(root==NULL){
    //         return;
    //     }
    //     solve(root->left,min1,min2);
    //     if(root->val<min1){
    //         int temp = min1;
    //         min2 = min1;
    //         min1 = root->val;
            
    //     }
    //     solve(root->right,min1,min2);

    // }
    void solve(TreeNode* root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        solve(root->left,ans);
        ans.push_back(root->val);
        solve(root->right,ans);
        
    }
    int minDiffInBST(TreeNode* root) {

        vector<int> ans;
        solve(root,ans);
        sort(ans.begin(),ans.end());
        int n = ans.size();
        int mini = INT_MAX;
        // for(int i = 0 ;i<n;i++){
            
        //     if(ans[i]-ans[i+1]<mini && i<n){
        //         mini = ans[i]-ans[i+1]; 
        //     }
        // }
        for(int i = 0; i < n-1; i++){
            mini = min(mini, ans[i+1] - ans[i]);
        }

       return mini;
        // solve(root,min1,min2);
        // return (min1-min2);
    }
};