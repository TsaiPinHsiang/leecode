using namespace std;
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL)
            return head;
        ListNode *odd = head, *even = head->next, *tem = even;
        while(odd->next != NULL && even->next !=NULL){
            odd->next = even->next;
            even->next = odd->next->next;
            odd = odd->next;
            even = even->next;
        }
        odd->next = tem;
        return head;
    }
};