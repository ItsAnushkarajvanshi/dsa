class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> p;
        int n = lists.size();
        if(n == 0){
            return NULL;
        }
        for(int i = 0; i < n; i++){
            ListNode* k = lists[i];
            while(k != NULL){
                p.push_back(k->val);   // store value
                k = k->next;
            }
        }
        if(p.size() == 0) return NULL;
        sort(p.begin(), p.end());
        ListNode* h = new ListNode(p[0]);  // initialize head
        ListNode* t = h;
        for(int i = 1; i < p.size(); i++){
            t->next = new ListNode(p[i]);
            t = t->next;
        }
        t->next = NULL;
        return h;
    }
};
