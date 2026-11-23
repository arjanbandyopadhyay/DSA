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
       ListNode*curr=headA;
       ListNode*tailA=nullptr;
       vector<ListNode*>address1;
       while(curr!=nullptr){
            tailA=curr;
            address1.push_back(tailA);
            curr=curr->next;
       }
       ListNode*tailB=nullptr;
       curr=headB;
       vector<ListNode*>address2;
       while(curr!=nullptr){
        tailB=curr;
        address2.push_back(tailB);
        curr=curr->next;
       }
       if(tailA->val != tailB->val) return nullptr;
       
       int i=address1.size()-1 ,j=address2.size()-1;
       while(i>=0 && j>=0){
        if(address1[i]== address2[j]){
            i--;
            j--;
        }
        else{
           break;
        }
       }
        return address1[i+1];
    }
};