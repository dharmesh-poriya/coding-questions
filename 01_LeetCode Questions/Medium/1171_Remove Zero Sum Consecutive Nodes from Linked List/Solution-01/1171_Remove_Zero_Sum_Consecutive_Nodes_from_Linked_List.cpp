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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode *prev = nullptr;
        map<int,ListNode *> m;
        int sum = 0;
        ListNode *current = head;
        while(nullptr!=current){
            sum += current->val;
            if(0==current->val){
                auto it = m.find(sum);
                if(m.end()==it){
                    head = current->next;
                }else{
                    it->second->next = current->next;
                }
                current = current->next;
                continue;
            }
            if(0==sum){
                ListNode *temp = head;
                int tempsum = 0;
                while(temp!=current){
                    tempsum += temp->val;
                    m.erase(tempsum);
                    temp = temp->next;
                }
                head = current->next;
            }else{
                auto it = m.find(sum);
                if(m.end()==it){
                    m.insert({sum,current});
                }else{
                    ListNode *temp = it->second->next;
                    int tempsum = it->first;
                    while(temp!=current){
                        tempsum += temp->val;
                        m.erase(tempsum);
                        temp = temp->next;
                    }
                    it->second->next = current->next;
                    sum = it->first;
                }
            }
            // prev = current;
            current = current->next;
        }
        return head;
    }
};