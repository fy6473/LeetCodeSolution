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
    ListNode* oddEvenList(ListNode* head) {
        // brute force O(2n).
//         if(head==NULL || head->next==NULL){
//             return head;
//         }
//          ListNode* temp=head;
//          vector<int> arr;
//          while(temp!=nullptr &&  temp->next!=nullptr){
//             arr.push_back(temp->val);
//             temp=temp->next->next;
//          }
//          if(temp){
//             arr.push_back(temp->val);
//          }
//           temp=head->next;
//           while(temp!=nullptr && temp->next!=nullptr){
//              arr.push_back(temp->val);
//             temp=temp->next->next;
//           }
//           if(temp){
//             arr.push_back(temp->val);
//          }
//         temp=head;
//         int i=0;
//         while(temp!=nullptr){
//             temp->val=arr[i];
//             temp=temp->next;
//             i++;
//         }
         

// return head;



// optimal:-O(n).
if(head==nullptr || head->next==NULL){
    return head;
}
 ListNode* odd=head;
 ListNode* even=head->next;
  ListNode* connect=head->next;
  while(even!=nullptr && even->next!=nullptr){
    odd->next=odd->next->next;
    odd=odd->next;
    even->next=even->next->next;
    even=even->next;
  }
  odd->next=connect;
  return head;
    }
};