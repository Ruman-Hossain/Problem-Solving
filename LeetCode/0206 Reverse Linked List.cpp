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
    ListNode* reverseList(ListNode* head) {
        if(!head or !head->next)  return head;
        ListNode* currNode = head->next;
        head->next = nullptr;
        while(head && currNode){
            ListNode* temp = currNode->next;
            currNode->next = head;
            head = currNode;
            currNode = temp;
        }
        return head;   
    }
};