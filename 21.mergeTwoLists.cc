/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 */

// @lc code=start

//  Definition for singly-linked list.
 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      ListNode *dummy = new ListNode(-1);
      ListNode *p = dummy;
      ListNode *p1 = list1;
      ListNode *p2 = list2;

      while (p1 != nullptr && p2 != nullptr) {
        if (p1->val > p2->val) {
          p->next = new ListNode(p2->val);
          p = p->next;
          p2=p2->next;
        } else {
          p->next = new ListNode(p1->val);
          p = p->next;
          p1=p1->next;
        }

      }
      if (p1 == nullptr) {
        p->next=p2;
      }
      else {
        p->next=p1;
      }
      return dummy->next;
    }
};
// @lc code=end

