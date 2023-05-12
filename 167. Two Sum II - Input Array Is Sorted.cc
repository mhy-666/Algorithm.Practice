class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0, right =numbers.size()-1;
        
        while(numbers[left]+numbers[right]!=target)
        {
            if(numbers[left]+numbers[right]>target)
            {
                right--;
            }
            else if(numbers[left]+numbers[right]<target)
            {
                left++;
            }
        }
        vector<int> result={left+1,right+1};
        return result;
    }
};