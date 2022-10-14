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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>list;
        for(int i=0;i<lists.size();i++)
        {
           
                ListNode* temp=lists[i];
                while(temp!=NULL)
                {
                    list.push_back(temp->val);
                    temp=temp->next;
                }
        }
        sort(list.begin(),list.end());
        int n=list.size();
        ListNode* ans=new ListNode(0);
        ListNode* temp=ans;
        int cnt=0;
        while(cnt<n)
        {
            
                ListNode* val=new ListNode(list[cnt]);
                temp->next=val;
                temp=val;
                cnt++;  
        }
            return ans->next;
    
    
    }
    
};