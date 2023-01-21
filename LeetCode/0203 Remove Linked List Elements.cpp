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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *result = new ListNode(0);
        ListNode *curr = result;

        while(head) {
            if(head -> val != val) {
                curr -> next = head;
                curr = head;
            }
            head = head -> next;
        }
        curr -> next = nullptr;
        return result -> next;
    }
};