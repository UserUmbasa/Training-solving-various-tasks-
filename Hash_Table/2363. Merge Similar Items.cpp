using namespace std;

#include<vector>
#include<map>;




class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2)
    {
        map<int, int>arr;
        for (auto& temp : items1)
        {
            arr[temp[0]] += temp[1];
        }
        for (auto& temp : items2)
        {
            arr[temp[0]] += temp[1];
        }
        vector<vector<int>> result;
        for (auto& temp : arr)
        {
            result.push_back({ temp.first,temp.second });
        }
        return result;

    }
};
int main() {
    Solution a;
    vector<vector<int>> lhs = { {1,1}, {4,5}, {3,8} };
    vector<vector<int>> rhs = { {3,1}, {1,5} };
    a.mergeSimilarItems(lhs, rhs);
}