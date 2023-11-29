#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n)
    {
        if (original.size() > m * n) { return {}; }
        vector<vector<int>> arr(m);
        auto pos = original.begin();
        for (size_t i = 0; i < m; i++)
        {
            arr[i] = { pos,pos + n };
            pos += n;
        }
        return arr;
    }
};

int main() {
    vector<int>arr = { 1,2,3,4 };
    Solution a;
    a.construct2DArray(arr, 2, 2);

}