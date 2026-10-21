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
    int find(vector<int>& inorder, int target, int start, int end) {
        for (int i = start; i <= end; i++) {
            if (inorder[i] == target)
                return i;
        }
        return -1;
    }
    TreeNode* tree(vector<int>& preorder, vector<int>& inorder, int instart, int inend, int& index) {
        if (instart > inend)
            return NULL;
        int element = preorder[index];
        index++;
        TreeNode* root = new TreeNode(element);
        int pos = find(inorder, element, instart, inend);
        root->left = tree(preorder, inorder, instart, pos - 1, index);
        root->right = tree(preorder, inorder, pos + 1, inend, index);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int index = 0;

        return tree(preorder, inorder, 0, inorder.size() - 1, index);
    }
};
