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
        ListNode* a=head;
        int len=0;
        while(a!=NULL)
        {
            len++;
            a=a->next;
        }
        len=len-n;
        if(len==0)
        return head->next;
       
        a=head;
        while(len>1)
        {
            a=a->next;
            len--;
        }
        cout<<a->val;
         a->next=a->next->next;
        return head;

    }
};