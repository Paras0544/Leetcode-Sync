class Solution {
public:
    int counter = 0;
    int ans = 0;

    void inorder(TreeNode* root, int k){
        if(root == NULL){
            return;
        }

        inorder(root->left,k);

        counter++;
        if(counter == k){
            ans = root->val;
            return;
        }
        inorder(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root,k);
        return ans;
    }
};