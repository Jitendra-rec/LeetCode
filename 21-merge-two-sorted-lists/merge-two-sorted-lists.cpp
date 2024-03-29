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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list3=new ListNode(0);
        vector<int>arr;
        ListNode* a=list1;
        while(a!=NULL)
        {
            arr.push_back(a->val);
            a=a->next;
        }
        a=list2;
         while(a!=NULL)
        {
            arr.push_back(a->val);
            a=a->next;
        }
        sort(arr.begin(),arr.end());
         ListNode* head= new ListNode();
         a=head;
        for(auto i:arr)
       {
        ListNode* list3=new ListNode(i);
        a->next=list3;
        a=a->next;
       }
        return head->next;


        



        
    }
};