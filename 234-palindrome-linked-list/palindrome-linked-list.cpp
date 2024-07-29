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
    ListNode* mid(ListNode* head)
    {
        ListNode* slow=head, *fast=head,*prev=head;
        while(fast!=NULL)
        {
            fast=fast->next;
            prev=slow;
            if(fast!=NULL)
            {
                slow=slow->next;
                fast=fast->next;
            }
            
        }
        return prev;
    }
    ListNode* reverse(ListNode* prev ,ListNode* curr)
    {
        if(curr==NULL)
        return prev;
        ListNode* f=curr->next;
        curr->next=prev;
        prev=curr;
        curr=f;
         return reverse(prev,curr);

    }
    void pr(ListNode* head){
        while(head!=NULL)
        {
            cout<<head->val<<"->";
            head=head->next;
        }
        cout<<"NULL"<<endl;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;
        ListNode* l1=mid(head);
        
        ListNode* l2=l1->next;
        l1->next=NULL;
         l1=head;
        l2=reverse(NULL,l2);
       // pr(l1);
       // pr(l2);

        while( l2!=NULL )
        {
            if(l1->val != l2->val)
            return false;
            //cout<<l1->val<<" "<<l2->val<<endl;
            l1=l1->next;
            l2=l2->next;
        }
        return true;
        
    }
};