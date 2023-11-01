class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

          if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode *p = head;
        ListNode *q = head->next;
        ListNode *temp = NULL;
        ListNode *newHead = q;  

        while (p && q) {
            temp = q->next;
            q->next = p;

            if (temp == NULL || temp->next == NULL) {
                p->next = temp;
                break;
            }

            p->next = temp->next;
            p = temp;
            q = p->next;
        }

        return newHead;
    }
};
