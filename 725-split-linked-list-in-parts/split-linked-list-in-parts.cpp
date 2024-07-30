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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>arr(k,NULL);
        int len=0;
        ListNode* temp=head ;
        while(temp)
        {
            len++;
            temp=temp->next;
        }
        temp=head;
        int l=len/k;
        int m=len%k;

        for(int i=0; i<k && temp;i++)
        {
           arr[i]=temp; 
           int re=l+ (m-->0?1:0);
           for(int j=1;j<re;j++)
           temp=temp->next;
      
              auto t=temp->next;
              temp->next=NULL;
              temp=t;
           
        }
        return arr;


    }
};