
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* dummy=new ListNode(-1);
        ListNode* p=dummy;
        
        for(i=0;i<lists.size();i++)
        {
            int index=0;
            while(lists[index]!=nullptr)
            {
                int tmp=lists[0]->val;
                index=0;
                for(j=0;j<lists.size();j++)
                {
                    if(tmp<=lists[j]->val){
                        continue;
                    }
                    else{
                        tmp=lists[j]->val;
                        index=j;
                    }

                }
                lists[index]=lists[index]->next;
                p->next=new ListNode(tmp);
                p=p->next;
            }
        }
    }
};