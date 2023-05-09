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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // if(head==nullptr||head->next==nullptr)return nullptr;

        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* p1=dummy;
        ListNode* p2=dummy;

        for(int i=0;i<n;i++)
        {
            p1=p1->next;
        }

        while(p1->next!=nullptr)
        {
            p1=p1->next;
            p2=p2->next;
        }
        // ListNode* tmp=p2->next;
        p2->next=p2->next->next;
        // free(tmp);
        //-----------------------------这里是否需要释放删除的节点内存呢，会不会造成内存泄露呢，to be continued...

        return dummy->next;
    }
};