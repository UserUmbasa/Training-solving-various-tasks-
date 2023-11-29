
using namespace std;
#include<vector>

class Solution
{

public:
    vector<int> addToArrayForm(vector<int> num, int k)
    {
        for (auto it = num.rbegin(); it != num.rend(); ++it)
        {
            auto v = k % 10;
            if (*it + v > 9)
            {
                *it = (*it + v) % 10;
                k /= 10;
                ++k;
            }
            else
            {
                k /= 10;
                *it += v;
            }
        }
        if (k > 0) {
            while (k != 0)
            {
                auto v = k % 10;
                num.insert(num.begin(), v);
                k /= 10;
            }
        }
        return num;
    }
};
int main() {
    Solution a;
    a.addToArrayForm({ 9 }, 111);
    //a.addToArrayForm({ 2,1,5 }, 806);    
}