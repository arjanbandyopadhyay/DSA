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
ListNode*middle(ListNode*head){
    ListNode*slow=head;
    ListNode*fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}  

ListNode*mergesort(ListNode*left,ListNode*right){
    ListNode*dummyNode= new ListNode(-1);
    ListNode*temp=dummyNode;

    while(left!=NULL && right!=NULL){
        if(left->val < right->val){
            temp->next=left;
            temp=left;
            left=left->next;
        }else{
            temp->next=right;
            temp=right;
            right=right->next;
        }
        }
        if(left)temp->next=left;
        else temp->next=right;

        return dummyNode->next;
    }


class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode*mid=middle(head);
        ListNode*right=mid->next;
        mid->next=nullptr;
        ListNode*left=head;

        left=sortList(left);
        right=sortList(right);
        return mergesort(left,right);
        
    }
};