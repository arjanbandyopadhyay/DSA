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
    ListNode* middleNode(ListNode* head) {
        ListNode*temp=head;
        ListNode*ans=head;
        int idx=0;
        while(temp!=NULL){
           temp=temp->next;
           idx++;
        }
        int mid=idx/2;
        if((idx%2)==0){
         for(int i=mid;i<idx;i++)
         ans=ans->next;
        }
        else{
            for(int i=mid+1;i<idx;i++){
                ans=ans->next;
            }
        }
        return ans;

    }
};