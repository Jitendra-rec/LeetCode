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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        ListNode* first=head,*second;

        if(first->next==NULL)
        return head;
        second=first->next;
        while(second!=NULL)
        {
            int a=first->val;
            int b=second->val;
            int c=__gcd(a,b);
            ListNode* temp=new ListNode(c);
             first->next=temp;
             temp->next=second;
             second=second->next;
             first=first->next->next;       
        }
        return head;
    }
};