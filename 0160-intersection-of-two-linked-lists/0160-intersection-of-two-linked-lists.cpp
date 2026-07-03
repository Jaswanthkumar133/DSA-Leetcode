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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA;
        ListNode* temp2=headB;
        int c1=0;
        int c2=0;
        while(temp){
            temp=temp->next;
            c1++;
        }
        while(temp2){
            temp2=temp2->next;
            c2++;
        }
        if(c1>c2){
            c1=c1-c2;
            for(int i=0;i<c1;i++){
                headA=headA->next;
            }
        }else{
            c2=c2-c1;
            for(int i=0;i<c2;i++){
                headB=headB->next;
            }
        }
        while(headA && headB){
            if(headA==headB){
                return headA;
            }
            else{
                headA=headA->next;
                headB=headB->next;
            }
        }
        return NULL;
    }
};