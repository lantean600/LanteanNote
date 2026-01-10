

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode* head) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;

    while (fast && fast->next) { // 防止空指针进入循环
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) { // 找到相遇点
            break;
        }
    }

    if (!fast || !fast->next)
        return false; // 指针置空情况下返回false

    slow = head;
    while (1) {
        if (slow == fast) {
            return true;
        }
        slow = slow->next;
        fast = fast->next;
    }
}
