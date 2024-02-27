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
    ListNode* reverse(ListNode* head) {
        ListNode *p, *q;
        p = head, q = NULL;

        while (p != NULL) {
            ListNode* on = p->next; // keep track of original next node
            p->next = q;            // reversing links
            q = p;
            p = on;
        }
        return q;
    }
    int len(ListNode* l1) 
    {
        ListNode* a = l1;
        int i = 0;
        while (a != 0) {
            i++;
            a = a->next;
        }
        return i;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        int t1=len(l1);
        int t2=len(l2);
        ListNode* f1,*f2,*q=NULL;

        if(t1 > t2 )
        {
            f1=reverse(l1);
            f2=reverse(l2);
        }
        else
        {
            f1=reverse(l2);
            f2=reverse(l1);
        }
        int carry = 0;
        ListNode* temp1=f1,*temp2=f2;
        while(temp2 !=NULL)
        {
            int data=temp2->val + temp1->val + carry;
            temp1->val=data % 10;
            carry = data/10;
            q=temp1;
            temp1= temp1->next;
            temp2=temp2->next;
        }
        while(temp1 != NULL)
        {
            int data= temp1->val + carry;
            q=temp1;
            temp1->val=data % 10;
            carry = data/10;
            temp1 = temp1->next;
        }
        if(carry != 0)
        {
            ListNode* x=new ListNode(carry);
            q->next=x;

        }

        f1=reverse(f1);
        return f1;
        
    }
};