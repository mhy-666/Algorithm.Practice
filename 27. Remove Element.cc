#include <vector>
using namespace std;


class Solution {
public:
  int removeElement(vector<int> &nums, int val) {

      int slow = 0;

      for (int i = 0; i < nums.size() ; i++) {
        if (nums[i] != val) {
          nums[slow] = nums[i];
          slow++;
        }
        
      }
      return slow;
    }
};