using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next==NULL) return NULL;
        ListNode *one=head, *two=head, *org=NULL;
        while(two!=NULL && two->next!=NULL){
            two = two->next->next;
            org = one;
            one = one->next;
        }
        org->next = one->next;
        delete one;

        return head;
    }
};