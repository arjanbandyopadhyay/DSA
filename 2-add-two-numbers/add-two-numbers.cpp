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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode*first=l1;
      ListNode*second=l2;
      string digits="";
      int carry=0;
      while(first!=NULL && second!=NULL){
       long long sum=0;
       sum+= carry;
       sum+=first->val+second->val;
         
        if(sum>9){
            carry=1;
            sum=sum%10;
        }
        else carry=0;
        first=first->next;
        second=second->next;
        digits.push_back(sum+'0');
      } 
      while(first!=nullptr){
        int dig=first->val;
        if(carry==1){
            dig+=1;
        }
        
        if(dig>9){
            carry=1;
            dig=dig%10;
        }
        else carry=0;
        digits.push_back(dig+'0');
        first=first->next;
      }
       while(second!=nullptr){
        int dig=second->val;
        if(carry==1){
            dig+=1;
        }
        if(dig>9){
            carry=1;
            dig=dig%10;
        }
        else carry=0;
        digits.push_back(dig+'0');
        second=second->next;
      }
      ListNode*node=new ListNode(digits[0]-'0');
      ListNode*newHead=node;
      for(int i=1;i<digits.size();i++){
         node->next = new ListNode(digits[i] - '0');
         node = node->next;
      }
      if(carry==1) 
      node->next=new ListNode(carry);
       return newHead; 
    }
};