#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result = {};
        int num_size = nums.size();
        for(int x = 0; x < num_size; x++)
        {
            for(int i = 0; i < num_size; i++)
            {
                if(x!=i && nums[x]+nums[i] == target)
                {
                    result.push_back(x);
                    result.push_back(i);
                    return result;

                }

                    
            }
        }
        return result;
    }
};

int main()
{
    vector<int> a = {2,8,7,8,9};
    Solution ob;
    vector<int> result = ob.twoSum(a,9);

    cout << "[";
    for(int x : result)
        cout << x << " ";
    cout << "]"<< endl;

}

