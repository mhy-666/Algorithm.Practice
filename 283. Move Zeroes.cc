class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0){
                nums[slow]=nums[i];
                slow++;
            }
        }
        for(int i=0;i<(nums.size()-slow);i++)
        {
            nums[nums.size()-i-1]=0;
        }
    }
};