class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int target) {
    
        while (root != nullptr && root->val != target) {

            if (target < root->val) {
                root = root->left;
            }

            else {
                root = root->right;
            }
        }

        // Return node if found, else nullptr
        return root;
    }
};