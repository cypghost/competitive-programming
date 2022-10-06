typedef struct ListNode node;
class Solution {
public:
    struct ListNode* middleNode(struct ListNode* head)
    {
    node *slow = head;
    node *fast = head;
    
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
    }
};
