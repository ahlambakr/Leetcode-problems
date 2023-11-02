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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode *fast = head; 
        ListNode *slow = head; 
        if (!fast->next) return head->next; 
        int cnt =0; 
        while (fast && fast->next ){
            fast =fast->next;
            cnt++;
        }
        int  k = cnt - n ;
       if (k<0){
           head =head->next;
           return head; 
       }
        int v = 0 ; 
        while (slow && slow->next ){
            if (v==k){
                slow->next=slow->next->next;
            }
            slow=slow->next;
            v++;
        }
      return head ;
        
    }
};
