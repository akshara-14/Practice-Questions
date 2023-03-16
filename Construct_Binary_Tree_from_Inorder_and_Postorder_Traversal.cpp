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
class Solution
{
public:
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        if (inorder.size() != postorder.size())
            return NULL;

        map<int, int> hashmap;
        for (int i = 0; i < inorder.size(); i++)
        {
            hashmap[inorder[i]] = i;
        }
        return sol(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1, hashmap);
    }
    TreeNode *sol(vector<int> &inorder, int is, int ie, vector<int> &postorder, int ps, int pe, map<int, int> &hashmap)
    {
        if (ps > pe || is > ie)
            return NULL;

        TreeNode *root = new TreeNode(postorder[pe]);
        int inRoot = hashmap[postorder[pe]];
        int numsleft = inRoot - is;

        root->left = sol(inorder, is, inRoot - 1, postorder, ps, ps + numsleft - 1, hashmap);
        root->right = sol(inorder, inRoot + 1, ie, postorder, ps + numsleft, pe - 1, hashmap);
        return root;
    }
};