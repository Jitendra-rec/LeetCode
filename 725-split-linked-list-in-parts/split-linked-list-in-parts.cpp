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
    void p(ListNode* head)
    {
        while(head)
        {
            cout<<head->val<<"->";
            head=head->next;
        }
        cout<<"NULL"<<endl;
    }
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
        int dm=l;

        for(int i=0; i<k && temp;i++)
        { dm=l;
           arr[i]=temp;
           //cout<<l<<" "<<m<<endl;
           if(m>0)
           {
                dm=l+1;
                m--;
           }
           for(int j=1;j<dm;j++)
           {
               temp=temp->next;
           }
          
            p(temp);
           
              auto t=temp->next;
              temp->next=NULL;
              temp=t;
           
        }
        return arr;


    }
};