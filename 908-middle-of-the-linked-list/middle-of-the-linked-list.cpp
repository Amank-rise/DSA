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
    ListNode* middleNode(ListNode* head) {
        ListNode* ptr = head;
        if(head == NULL){
            return head;
        }
        int count = 0;
        while(ptr!=NULL){
            count++;
            ptr=ptr->next;
        }
        int mid = count/2 +1;
        ptr = head;
        while(ptr!=NULL){
            mid = mid-1;
            if(mid == 0){
                break;
            }
            
            ptr = ptr->next;
        }
        return ptr;



    }
};