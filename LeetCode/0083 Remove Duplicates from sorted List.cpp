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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *unique = head;
        while(unique && unique-> next){
            if(unique -> val == unique -> next -> val)
                unique -> next = unique -> next -> next;
            else 
                unique= unique->next;
        }
        return head;
    }
};