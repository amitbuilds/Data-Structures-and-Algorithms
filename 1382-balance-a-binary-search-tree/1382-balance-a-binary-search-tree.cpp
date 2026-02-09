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
    // void height(TreeNode* root,int& val){
    //     if(root==NULL){
    //         return;
    //     }
    //     // height(root->left,val);
    //     int left = 0;
    //     int right = 0;
    //     if(root->left!=NULL && root->right!=NULL){
    //         left++;
    //         right++;
    //         height(root->left,val);
    //         height(root->right,val);

    //     }
    //     if(root->left!=NULL){
    //         height(root->left,val);
    //         left++;
    //     }
    //     if(root->right!=NULL){
    //         height(root->left,val);
    //         right++;
    //     }
    //     if(left > right){
    //         val = left;
    //     }else{
    //         val = right;
    //     }
    // }
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right);
        return 1 + max(left,right);
    }
    void inorder(TreeNode* root,vector<int> &arr){
        if(root==NULL){
            return;
        }
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
    }
    TreeNode* bst(int s,int e,vector<int> arr){
        // for(int i = 0 ; i < arr.size();i++){ 
        //     if(root==NULL){
        //         root->val = mid;
        //     }
        //     if(root->val)
        // }
        if(s>e){
            return NULL;
        }
        int mid = (s+e)/2;
        TreeNode* root = new TreeNode(arr[mid]);
        root->left = bst(s,mid-1,arr);
        root->right = bst(mid+1,e,arr);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> arr;
        inorder(root,arr);
        return bst(0,arr.size()-1,arr);
        // int i = 0;
        // int n = arr.size();
        // int mid = (i+n)/2;
        // int midVal = arr[mid];
        // return bst(arr,mid);
    }
};