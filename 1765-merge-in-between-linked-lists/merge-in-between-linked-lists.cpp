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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
       ListNode*pre=nullptr;
       ListNode*curr=list1;
       ListNode*nxt=nullptr;
       int count=0;
       while(curr!=nullptr){
        
        if(count==a-1){
            pre=curr;
        }
        else if(count==b+1){
            nxt=curr;
        }
        count++;
        curr=curr->next;
       } 
       ListNode*tail=list2;
       while(tail->next!=nullptr){
        tail=tail->next;
       }
       pre->next=list2;
       tail->next=nxt;
       return list1;
    }
};