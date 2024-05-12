using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode *cur = head, *prev = NULL;
        while(cur->next != NULL){
            ListNode *tem = cur->next;
            cur->next = prev;
            prev = cur;
            cur = tem;
        }
        cur->next = prev;
        return cur;
    }
};