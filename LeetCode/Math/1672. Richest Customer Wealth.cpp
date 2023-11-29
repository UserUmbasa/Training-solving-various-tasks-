#include <iostream>
#include <locale>
#include <string>
#include <vector>

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int result = 0;
        for (auto& num : accounts)
        {
            int sum = std::accumulate(num.begin(), num.end(), 0);
            if (sum > result) { result = sum; }
        }
        return result;
    }
};


int main() {

    setlocale(LC_ALL, "Russian");

    vector<vector<int>> accounts = { {1, 2, 3}, {3, 2, 1} };
    Solution a;
    auto str = a.maximumWealth(accounts);


    return 0;
}
