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
    bool hasCycle(ListNode *head) {
        ListNode *a=head,*b=head;
        if(head==NULL||b->next==NULL )
        return 0;
        while(b!=NULL)
        {
            a=a->next;
            b=b->next;
            if(b==NULL)
            return 0;
            b=b->next;
            if(a==b)
            return 1;
        }
        return 0;

        
    }
};