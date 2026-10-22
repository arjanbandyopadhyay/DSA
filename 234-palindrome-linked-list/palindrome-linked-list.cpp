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
    bool isPalindrome(ListNode* head) {
        if(head->next==nullptr){
            return true;
        }
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*ptr=slow->next;
        slow->next=nullptr;
        ListNode*pre=NULL;
        ListNode*next=NULL;
        while(ptr!=nullptr){
            next=ptr->next;
            ptr->next=pre;
            pre=ptr;
            ptr=next;
        }
        ListNode*temp=head;
        while(pre!=NULL &&  temp!=NULL){
            if(pre->val != temp->val) return false;
            
            pre=pre->next;
            temp=temp->next;
        }
        return true;
    }
};