
 // Definition for singly-linked list.
  struct ListNode {
     int val;
     ListNode *next;
    ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr)return nullptr;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* dummy=new ListNode(-1);
        dummy->next=slow;

        while(fast!=NULL&&fast->next!=nullptr)
        {
            if(fast->val!=fast->next->val)
            {
                slow->next=fast->next;
                slow=slow->next;
            }
            fast=fast->next;
        }
        slow->next=nullptr;
        return dummy->next;
    }
};