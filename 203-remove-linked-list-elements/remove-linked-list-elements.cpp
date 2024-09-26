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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* slow=head,*fast=head,*temp=NULL;
        if(slow==NULL)
        return NULL;

        while(fast!=NULL)
        {
            if(fast->val!=val)
            {
                slow->val=fast->val;
                temp=slow;
                slow=slow->next;
                fast=fast->next;
            }
            else
            fast=fast->next;
        }
        if(temp==NULL)
        return NULL;
       temp->next=NULL;
     
        return head;

    }
};