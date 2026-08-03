class Solution {
public:
    int idx = 0;

    TreeNode* build(vector<int>& preorder, int low, int high) {

        if (idx == preorder.size())
            return NULL;

        int val = preorder[idx];

        if (val <= low || val >= high)
            return NULL;

        idx++;

        TreeNode* root = new TreeNode(val);

        root->left = build(preorder, low, val);
        root->right = build(preorder, val, high);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return build(preorder, INT_MIN, INT_MAX);
    }
};