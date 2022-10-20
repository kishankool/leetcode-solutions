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
    ListNode* sortList(ListNode* head) {
        vector<int>v;
        int cnt=0;
        while(head!=NULL)
        {
            cnt++;
            v.push_back(head->val);
            head=head->next;
        }
        sort(v.begin(),v.end());
        ListNode* lin=new ListNode(0);
        ListNode* copy=lin;
        int i=0;
        while(cnt)
        {
            ListNode* temp=new ListNode(v[i]);
            copy->next=temp;
            copy=temp;
            i++;
            cnt--;
        }
        return lin->next;
    }
};