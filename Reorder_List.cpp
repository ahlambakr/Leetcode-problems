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
    void reorderList(ListNode* head) {

        if ((!head) || (!head->next) || (!head->next->next)) return ;
        stack <ListNode*> st ;
        int n =0;
        ListNode* tail =head;
        while (tail !=NULL){
            st.push(tail);
            n++;
            tail=tail->next;
        }
ListNode *ptr= head  ;
     for (int i=0;i<n/2;i++){
        
         ListNode *ele =st.top();
          st.pop();
          ele->next= ptr->next;
           ptr->next = ele;
           
           ptr=ptr->next->next;

     }   
ptr->next=NULL;

        
    }
};
