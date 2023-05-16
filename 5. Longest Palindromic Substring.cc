class Solution {
public:
    string longestPalindrome(string s) {
        int left;
        int right;
        int start=0;
        int end=0;
        string result;

        for(int i=0;i<s.size();i++)
        {
            left=i;
            right=i+1;
            while(left>=0&&right<=s.size()-1)
            {
                if(s[left]==s[right])
                {
                    if((end-start)<(right-left))
                    {
                        start=left;
                        end=right;
                    }
                }
                else break;
                left--;
                right++;
            }

            left=i-1;
            right=i+1;
            while(left>=0&&right<=s.size()-1)
            {
                if(s[left]==s[right])
                {
                    if((end-start)<(right-left))
                    {
                        start=left;
                        end=right;
                    }
                }
                else break;
                left--;
                right++;
            }

        }



        for(int i=start;i<=end;i++)
        {
            result.push_back(s[i]);
        }
        return result;
    }
};