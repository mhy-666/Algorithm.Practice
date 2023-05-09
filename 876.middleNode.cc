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

  struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // ListNode* dummy = new ListNode(-1);
        // dummy->next = head;
        // ListNode* p1 = dummy;
        // ListNode* p2 = dummy;

        // while(p1!=nullptr&&p1->next!=nullptr)
        // {
        //     p1=p1->next->next;
        //     p2=p2->next;
        // }
        // if(p1==nullptr)return p2;
        // else return p2->next;

        ListNode* p1 = head;
        ListNode* p2 = head;

        while(p1!=nullptr&&p1->next!=nullptr)
        {
            p1=p1->next->next;
            p2=p2->next;
        }
        return p2;

    }
};