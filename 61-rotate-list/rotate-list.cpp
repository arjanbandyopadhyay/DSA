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
    ListNode* rotateRight(ListNode* head, int k) {
       if(head==NULL || head->next==NULL || k==0){
        return head;
       }
       int len=1;
       ListNode*temp=head;
       while(temp->next!=NULL){
        temp=temp->next;
        len++;
       }
       temp->next=head;
       ListNode*node=head;
       k=k%len;
       int rotate=len-k;
       for(int i=1;i<rotate;i++){
        node=node->next;
       }
       ListNode*srt=node->next;
       node->next=NULL;
       head=srt;

        return head;
    }
};