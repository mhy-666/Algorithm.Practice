#include <queue>
#include <functional>
#include <utility>
#include <vector>
using namespace std;
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

// class Solution {
// public:
//     ListNode* mergeKLists(vector<ListNode*>& lists) {
//         ListNode* dummy=new ListNode(-1);
//         ListNode* p=dummy;
        
//         for(int i=0;i<lists.size();i++)
//         {
//             int index=0;
//             while(lists[index]!=nullptr)
//             {
//                 int tmp=lists[0]->val;
//                 index=0;
//                 for(int j=0;j<lists.size();j++)
//                 {
//                     if(tmp<=lists[j]->val){
//                         continue;
//                     }
//                     else{
//                         tmp=lists[j]->val;
//                         index=j;
//                     }

//                 }
//                 lists[index]=lists[index]->next;
//                 p->next=new ListNode(tmp);
//                 p=p->next;
//             }
//         }
//     }
// };

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* dummy=new ListNode(-1);
        ListNode *p = dummy;

        priority_queue<pair<int, ListNode *>, vector<pair<int, ListNode *>>,
                       greater<pair<int, ListNode *>>>
            pq;
        for (auto head : lists) {
          if(head!=NULL)
          pq.push(make_pair(head->val,head));
        }

        while (!pq.empty()) {
          ListNode *tmpNode = pq.top().second;
          int val = pq.top().first;
          pq.pop();
          if (tmpNode->next != NULL) {
            tmpNode = tmpNode->next;
            pq.push({tmpNode->val,tmpNode});
          }
          p->next = new ListNode(val);
          p=p->next;
        }
        return dummy->next;
        
    }
};
