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
    ListNode* swapPairs(ListNode* head) {
    if(head==NULL || head->next==NULL)
    return head;
     ListNode*pre=NULL;
     ListNode*third=NULL;
    ListNode*first=head;
    ListNode*second=head->next;
    while(first && second){
       third=second->next;
       second->next=first;
       first->next=third;
       if(pre!=NULL){
         pre->next=second;
       }else{
        head=second;
       }
        pre=first;
       first=third;
       if(third!=NULL){
        second=third->next;
       }else{
        second=NULL;
       }
       }
        
    return head;
    }
};