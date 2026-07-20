class Solution {
public:

    TreeNode* findMin(TreeNode* root){
        while(root->left)
            root = root->left;

        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {

        if(root == NULL)
            return NULL;

        if(key < root->val){
            root->left = deleteNode(root->left, key);
        }
        else if(key > root->val){
            root->right = deleteNode(root->right, key);
        }
        else{

            // No left child
            if(root->left == NULL){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }

            // No right child
            if(root->right == NULL){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            // Two children
            TreeNode* successor = findMin(root->right);

            root->val = successor->val;

            root->right = deleteNode(root->right, successor->val);
        }

        return root;
    }
};