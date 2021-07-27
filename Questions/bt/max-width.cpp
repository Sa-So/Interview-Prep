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
    int max_w;
    unordered_map<int,int> m;
    int widthOfBinaryTree(TreeNode* root) {
        //find width at every depth annd just find max of all 
        max_w=0;
        //unordered_map<int,int> m;
        get_w(root,0,0);
        return max_w;
        
    }
    void get_w(TreeNode* root,int depth,int position){
        if(root==NULL)return;
        if(m.find(depth)==m.end()){
            m[depth]=position;
        }
        max_w=max(max_w,position-m[depth]+1);
        get_w(root->left,depth+1,2*position);
        get_w(root->right,depth+1,2*position+1);
    }
};
