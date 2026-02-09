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
    void inorder(TreeNode* root, vector<int> &traversal){
        if(root==NULL){
            return;
        }

        inorder(root->left,traversal);
        traversal.push_back(root->val);
        inorder(root->right, traversal);

    }
    TreeNode* solve(vector<int> &traversal, int s, int e){
        if(s>e){
            return NULL;
        }
        int mid=(s+e)/2;
        TreeNode* newnode=new TreeNode(traversal[mid]);
        newnode->left=solve(traversal,s,mid-1);
        newnode->right=solve(traversal,mid+1,e);

        return newnode;
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int> traversal;
        inorder(root,traversal);
        return solve(traversal,0,traversal.size()-1);
    }
};