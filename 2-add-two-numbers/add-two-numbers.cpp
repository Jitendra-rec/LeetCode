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
    ListNode* reverse(ListNode* prev, ListNode* curr)
    {
        if(curr==NULL)
        return prev;
        ListNode* f=curr->next;
        curr->next=prev;
        prev=curr;
        curr=f;
        return reverse(prev,curr);
        
        
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       // l1=reverse(NULL,l1);
       // l2=reverse(NULL,l2);
        int carry=0,num=0;
        ListNode* t=new ListNode(-1);
        ListNode* head=t;
        
        while(l1!=NULL && l2!=NULL)
        {
            num=carry+l1->val+l2->val;
            carry=num/10;
            num=num%10;
            ListNode* temp=new ListNode(num);
            t->next=temp;
            t=t->next;
            l1=l1->next;
            l2=l2->next;
        }
                while(l1!=NULL)
        {
            num=carry+l1->val;
            carry=num/10;
            num=num%10;
            ListNode* temp=new ListNode(num);
            t->next=temp;
            t=t->next;
            l1=l1->next;
         
        }
                while(l2!=NULL)
        {
            num=carry+l2->val;
            carry=num/10;
            num=num%10;
            ListNode* temp=new ListNode(num);
            t->next=temp;
            t=t->next;
            l2=l2->next;
        }
        if(carry!=0)
        {
             ListNode* temp=new ListNode(carry);
            t->next=temp;
        }
        return head->next;

    }
};