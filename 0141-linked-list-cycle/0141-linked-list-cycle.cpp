/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* singleMove{head};
        ListNode* doubleMove(head);

        while(doubleMove != nullptr && doubleMove->next != nullptr){        
            singleMove = singleMove->next;
            doubleMove = doubleMove->next->next;

            if(singleMove == doubleMove){
                return true;
            }
        }
        
        return false;
    }
};