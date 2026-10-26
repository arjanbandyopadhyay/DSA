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
    ListNode*find(ListNode*head,int k){
        ListNode*temp=head;
        while(head && --k){
        head = head->next;
    }
    return head;
    }
    ListNode* reverseNode(ListNode*node){
        ListNode*pre=NULL;
        ListNode*curr=node;
        ListNode*next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=next;
        }        
      return node;
    }
        
    ListNode* reverseKGroup(ListNode* head, int k) {
       int groupSize=k;
       ListNode*temp=head;
       ListNode*next=NULL;
       ListNode*pre=NULL;
       while(temp!=NULL){
        ListNode*k=find(temp,groupSize);
        if(k==NULL){
            if(pre){
                pre->next=temp;
            }
            break;
         }
         next=k->next;
         k->next=NULL;
         reverseNode(temp);
         if(temp==head){
            head=k;
         }
         else{
            pre->next=k;
         }
         pre=temp;
         temp=next;
       }
       return head; 
    }
};