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
    ListNode* insertionSortList(ListNode* head) {
        if(head==NULL) return head;
        if(head->next==NULL) return head;
        vector<int> p;
        ListNode *k = head;
        while(k != NULL){
            p.push_back(k->val);
            k = k->next;
        }
        sort(p.begin(), p.end());
        k=head;
        int i=0;
        while(k!=NULL){
            k->val=p[i];
            i++;
            k=k->next;
        } 
        return head;
    }
};
