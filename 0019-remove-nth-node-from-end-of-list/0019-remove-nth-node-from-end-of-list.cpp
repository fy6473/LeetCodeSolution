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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
         ListNode* temp=head;
         int cnt=0;
       while(temp!=NULL){
        cnt++;
        temp=temp->next;
       }
       int index=cnt-n;
       if(index==0){
        return head->next;
       }
       int i=0;
       temp=head;
        ListNode* ptr=temp->next;
        while(i<index-1){
            temp=temp->next;
            ptr=ptr->next;
            i++;
        }
        temp->next=ptr->next;
        delete(ptr);
        return head;
    }
};