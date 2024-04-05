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
    ListNode* reverse(ListNode* l1)
    {
        ListNode* prev=NULL,*curr=l1,*temp;
        while(curr!=NULL)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new  ListNode(-1);
        int carry=0;
       // l1=reverse(l1);
        //l2=reverse(l2);
        ListNode* rt=head;

        while(l1!=NULL && l2!=NULL)
        {
             int data=l1->val+l2->val+carry;
             carry=data/10;
             data=data%10;
             ListNode* temp=new  ListNode(data);
             head->next=temp;
             head=head->next;
             l1=l1->next;
             l2=l2->next;
        }
         while(l1!=NULL )
        {
             int data=l1->val+carry;
             carry=data/10;
             data=data%10;
             ListNode* temp=new  ListNode(data);
             head->next=temp;
             head=head->next;
             l1=l1->next;
        }
           while(l2!=NULL )
        {
             int data=l2->val+carry;
             carry=data/10;
             data=data%10;
             ListNode* temp=new  ListNode(data);
             head->next=temp;
             head=head->next;
             l2=l2->next;
        }
        if(carry>0)
        {
             ListNode* temp=new  ListNode(carry);
              head->next=temp;
              head=head->next;
        }
        //rt=reverse(rt->next);
        return rt->next;
        
    }
};