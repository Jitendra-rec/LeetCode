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
    int len(ListNode *a)
    { int i=0;
        while(a!=NULL)
        {
            i++;
            a=a->next;
        }
        return i;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a=headA,*b;
        int len1=len(headA),len2=len(headB);
        int def=len1-len2;
        while(def>0)
        {
            a=a->next;
            def--;
        }
        def=len2-len1;
        b=headB;
        while(def>0)
        {
            b=b->next;
            def--;
        }
        while(a!=NULL && b!=NULL)
        {
            if(a==b)
            return a;
            a=a->next;
            b=b->next;
        }
        // cout<<a->val<<" -- "<<b->val; 
        
        return NULL;
        
    }
};