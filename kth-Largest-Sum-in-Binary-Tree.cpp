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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long > ans ;
        queue<TreeNode*>q ;
        q.push(root) ;
        while (!q.empty()){
            long long sum =0;
            int l = q.size() ;
            for (int i=0;i<l;i++){
                TreeNode* temp = q.front() ;
                q.pop() ;

            sum += temp->val;
            if(temp->left) q.push(temp->left) ;
            if(temp->right) q.push(temp->right);
            }
            ans.push_back(sum);
        }
        if (ans.size()< k) return -1; 
        sort(ans.begin(),ans.end(),greater<long long>()) ;
        return ans[k-1] ;
        
    }
};
