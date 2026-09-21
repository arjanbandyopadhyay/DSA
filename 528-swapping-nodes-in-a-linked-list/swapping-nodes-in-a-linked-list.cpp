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
    ListNode* swapNodes(ListNode* head, int k) {
     ListNode*temp=head;
     int len=0;
     while(temp!=NULL){
        temp=temp->next;
        len++;
     }
    ListNode*first=head;
    ListNode*end=head;
     for(int i=1;i<k;i++){
        first=first->next;
     }
     for(int i=1;i<len-k+1;i++){
        end=end->next;
     }
     int tempVal=first->val;
     first->val=end->val;
     end->val=tempVal;
    return head;
    }
};