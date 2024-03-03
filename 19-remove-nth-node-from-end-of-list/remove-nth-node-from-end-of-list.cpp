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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* a=head,*temp;
        int len=0;
        while(a!=NULL)
        {
            len++;
            a=a->next;
        }
        cout<<len;
         len=len-n;
    a=head;

    if(len==0)
   { return a->next;
   }
        while(len>0)
        {
            temp=a;
            a=a->next;
            len--;
        }
        temp->next=a->next;
        return head;
    }
};