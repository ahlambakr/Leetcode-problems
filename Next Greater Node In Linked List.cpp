/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> arr ;
        while (head != NULL){
            arr.push_back(head->val) ;
            head=head->next;
        }
        int n = arr.size();
        stack<int>st ;
        st.push(0);
        vector<int>v(n,0) ;
        for (int i=n-1;i>=0;i--){
         

        while (st.top()!=0 && st.top() <= arr[i] ){
      
        st.pop() ;
        
        }

       v[i]=st.top() ;
        st.push(arr[i]);

        }
    return v ;
        
    }

};
