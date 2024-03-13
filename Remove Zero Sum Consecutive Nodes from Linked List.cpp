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
// first solution , T = O( n *n ) , S =O(1) ; 
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0) ;
        dummy->next= head; 
        ListNode* curr = dummy; 
        while (curr !=nullptr) {
            int pre = 0; 
            ListNode* end = curr->next; 
            while (end != nullptr) {
                pre+= end->val ;
                if(pre ==0 ) {
                    curr->next= end->next;
                }
                end = end->next;
            }
            curr=curr->next;

        }
return dummy->next;
        
    }
};


// second solution  T O(N) , S O(N);


/*

class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0) ;
        dummy->next= head; 
        ListNode* curr = dummy; 
        unordered_map < int , ListNode* > pprefix ;
       
     
        int prefix = 0 ;
        
        while (curr !=nullptr) {
            prefix += curr->val ;
            pprefix[prefix] = curr; 
            curr= curr->next;
        }
        curr = dummy ;
        int l =0 ;

      while (curr!= nullptr ){
    l += curr->val ; 
    curr->next = pprefix[l]->next; 
    curr=curr->next;

      }
return dummy->next;
        
    }
};

*/
