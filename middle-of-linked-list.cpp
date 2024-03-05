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
    ListNode* middleNode(ListNode* head) {

        /*ListNode *all = head ;
          ListNode *half = head ;
        while (all&&all->next){
            all=all->next->next;
            half=half->next;
        }*/

     /*   ListNode *all = head ;
        int cnt=1;
        while (all&&all->next){
            all=all->next;
            cnt++;
        }
        cnt=cnt/2;
        for (int i=0;i<cnt;i++){


head=head->next;

        }
return head;
*/

 ListNode *all = head ;
          ListNode *half = head ; 
          while (all != NULL && all->next !=NULL){
              half = half->next ;
              all= all->next->next ;
          }
          return half ; 





    }
};
