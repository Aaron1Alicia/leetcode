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
    ListNode *swapPairs(ListNode *head) {
        
      
      if(head==NULL || head->next==NULL)
      return head;
      
      ListNode* init=new ListNode(0);
      init->next=head;
      ListNode* pre=init;
      ListNode* post=NULL;
      ListNode* cur=NULL;
      
      ListNode* ret=head->next;
       
       while(pre)
       {
           cur=pre->next;
           if(cur==NULL || cur->next==NULL)
           break;
           post=cur->next;
           cur->next=post->next;
           post->next=cur;
           pre->next=post;
           pre=cur;
       }
       
			 delete init;
        
			 return ret;
        
    }
};
