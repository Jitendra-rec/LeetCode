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
    ListNode* reverseList(ListNode* head) {
        ListNode* a=head,*temp=NULL,*next;
        while(a!=NULL)
        {
            next=a->next;
            a->next=temp;
            temp=a;
            a=next;
        }
        return temp;
        
    }
};