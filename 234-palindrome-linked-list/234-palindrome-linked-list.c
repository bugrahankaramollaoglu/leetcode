/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head){
    int len = 0;
    struct ListNode *n1 = head;
    struct ListNode *n2 = head;
    while (n2) {
        n2 = n2->next;
        len++;
    }
    int vals[len];
    n2 = n1;
    int i = 0;
    while (n2) {
        vals[i] = n2->val;
        n2 = n2->next;
        i++;
    }
    for (int i = 0, i2 = len; i < len; i++, i2--) {
        if (vals[i] != vals[i2-1])
            return 0;
    }
    return 1;
}