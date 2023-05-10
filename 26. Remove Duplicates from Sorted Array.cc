#include <vector>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int k = 1;
      int m = 0;
      
      for (int i = 0; i < nums.size()-1; i++) {
        if (nums[i] != nums[i + 1]) {
          k++;
          nums[i + 1 - m] = nums[i + 1];
        } else {
          m++;
        }
      }
      return k;
    }
};