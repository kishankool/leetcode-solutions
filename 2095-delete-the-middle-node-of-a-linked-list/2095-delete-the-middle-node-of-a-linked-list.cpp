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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL) return NULL;
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            cnt++;
        }
        int mid=(cnt/2)-1;
        cnt=0;
        temp=head;
        while(cnt!=mid)
        {
            temp=temp->next;
             cnt++;
        }
        ListNode* midd=temp->next;
        temp->next=midd->next;
    
        return head;   
    }
};