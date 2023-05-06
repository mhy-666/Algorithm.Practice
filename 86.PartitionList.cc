#include <iostream>
#include <cstdlib>
using namespace std;

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
    ListNode* partition(ListNode* head, int x) {
      ListNode *p = head;
      //--------------------------------------------------易错点-------------------
      // ListNode *p1, *p2 = new ListNode(-1);
      ListNode *p1 = new ListNode(-1);
      ListNode *p2 = new ListNode(-1);
      ListNode *dummy1 = p1;
      ListNode *dummy2 = p2;
      

      while (p != nullptr) {

        if (p->val < x) {
          p1->next = new ListNode(p->val);
          p1 = p1->next;
        } else {
          p2->next = new ListNode(p->val);
          p2 = p2->next;
          
        }
        p = p->next;
      }
      p1->next = dummy2->next;
      
      return dummy1->next;
    }
};

// int main() {
//   cout<<"hello"<<endl;
//   ListNode *p1 = new ListNode(-1);
//   ListNode *temp = new ListNode(2);
//           p1->next = temp;
//           p1 = p1->next;
  
//           system("pause");
//           return -1;
//     }