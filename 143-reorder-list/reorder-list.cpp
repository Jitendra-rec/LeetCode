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
    void reorderList(ListNode* head) {
        vector<int>arr;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int i=0,j=arr.size()-1;
        temp=head;
        while(temp!=NULL)
        {       cout<<arr[i]<<" ";
            temp->val=arr[i++];
            temp=temp->next;
            if(temp!=NULL )
            { cout<<arr[j]<<" ";
            temp->val=arr[j--];
            temp=temp->next; 
            }

        }
       // return head;
    }
};