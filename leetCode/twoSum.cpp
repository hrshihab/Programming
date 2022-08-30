#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> nums, int target)
    {

        vector<int> index;

        for(int i=0; i<nums.size()-1; i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    index.push_back(i);
                    index.push_back(j);
                }

            }
        }
        cout<<index[0]<<" "<<index[1];

    }
};

int main()
{
	
    Solution myObj;
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(5);
    nums.push_back(11);
    int target=10;
    myObj.twoSum(nums,target);


}
