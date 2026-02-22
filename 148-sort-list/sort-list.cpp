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
        if(head==NULL) return NULL;
        vector<int>p;
        while(head!=NULL){
            p.push_back(head->val);
            head=head->next;
        }
        sort(p.begin(),p.end());
        ListNode* h=new ListNode(p[0]);
        ListNode* t=h;
        for(int i=1;i<p.size();i++){
            t->next=new ListNode(p[i]);
            t=t->next;
        } 
        t->next=NULL;
        return h;
    }
};