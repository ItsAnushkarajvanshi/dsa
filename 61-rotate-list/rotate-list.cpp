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
    ListNode* rotateRight(ListNode* head, int n) {
      if(head == NULL || head->next == NULL||n==0)
          return head;
      int p=1;   
      ListNode* temp=head;
      ListNode* k=NULL;
      while(temp->next!=NULL){
          k=temp;
          temp=temp->next;
          p++;
        }
        if(p<=n){
            return rotateRight(head,n%p);
        }
      temp->next=head;
      k->next=NULL;
      head=temp;
     return rotateRight(head,n-1);
        
    }
};