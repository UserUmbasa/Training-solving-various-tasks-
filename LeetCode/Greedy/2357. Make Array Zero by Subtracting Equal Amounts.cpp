using namespace std;

#include<vector>
#include<iostream>
#include<algorithm>



class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int count = 0;
        int num = 0;
        for (size_t i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                for (size_t j = i + 1; j < nums.size(); j++)
                {
                    nums[j] -= nums[i];
                }
                ++count;
                nums[i] = 0;
            }
        }
        return count;
    }
};
//можно обойтись одним циклом в отличии от моего
class Solution_copy {
public:
    int minimumOperations(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        int count = 0;
        for (size_t i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                if (i == 0 || nums[i] != nums[i - 1]) {
                    ++count;
                }
            }
        }
        return count;
    }
};

int main() {


    Solution a;

    vector<int > arr = { 1,5,0,3,5 };
    auto result = a.minimumOperations(arr);

}