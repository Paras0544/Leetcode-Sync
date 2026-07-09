class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == NULL) return result;
        queue<TreeNode*> q;
        q.push(root);
        bool lefttoright = true;

        while(!q.empty()){
            int size = q.size();
            vector<int> level(size);

            for(int i=0; i<size; i++){
                TreeNode* root = q.front();
                q.pop();

                int index = lefttoright ? i : size - 1 - i;
                level[index] = root->val;

                if(root-> left) q.push(root->left);
                if(root->right) q.push(root->right);
            }
            lefttoright = !lefttoright;

            result.push_back(level);
        }        
        return result;
    }
};