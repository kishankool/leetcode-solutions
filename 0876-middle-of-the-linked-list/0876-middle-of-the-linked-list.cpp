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
    ListNode* middleNode(ListNode* head) {
        int counter=0;
        ListNode* temp=head;
        while((temp->next)!=NULL)
        {
            temp=temp->next;
            counter++;
        }
        if(counter%2==0)
        {
            counter=counter/2;
        }
        else if(counter%2==1)
        {
            counter=(counter/2+1);
        }
        int co=0;
        ListNode* mid=head;
         while(co<counter)
        {
            mid=mid->next;
            co++;
    
        }
        return mid;
        
    } 
};