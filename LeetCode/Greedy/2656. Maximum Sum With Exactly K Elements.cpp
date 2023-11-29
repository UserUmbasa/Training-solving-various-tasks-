#include <iostream>
#include <sstream>
#include <string>
#include<vector>
#include<algorithm>
#include<map>
#include <cctype>
#include <numeric>

//268. Missing Number

using namespace std;

//мой
//Общая сложность составляет O(n log n) из-за сортировки входного вектора
class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        for (size_t i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i + 1] - 1 != nums[i])
            {
                return nums[i] + 1;
            }
        }
        if (nums[0] == 0) { return nums.size(); }
        return 0;
    }
};
//можно решить лучше 
//class Solution {
//public:
//    int missingNumber(vector<int>& nums) {
//        int n = nums.size();
//        int expectedSum = n * (n + 1) / 2;
//        int actualSum = accumulate(nums.begin(), nums.end(), 0);
//        return expectedSum - actualSum;
//    }
//};
//Этот обновленный код использует математический подход для решения задачи, а именно сумму арифметической прогрессии.
//Он выполняется за линейное время O(n), что является более эффективным, чем ваш предыдущий код.
//int main()
{
    //This is a sample sample text. This text contains contains a sample.
    setlocale(LC_ALL, "Russian");
    Solution a;
    string ransomNote = "bg";
    string magazine = "efjbdfbdgfjhhaiigfhbaejahgfbbgbjagbddfgdiaigdadhcfcj";
    vector<int> nums = { 3,0,1 };
    a.missingNumber(nums);
    return 0;
}