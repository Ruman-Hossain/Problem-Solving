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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* current = new ListNode(0);
        ListNode* result = current;
        int sum =0;
        while(l1 || l2){
            if(l1){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }
            current->next = new ListNode(sum%10);
            current = current->next;
            sum = sum > 9 ? 1 : 0;
        }
        if(sum)
            current->next = new ListNode(sum);

        return result->next;
    }
};