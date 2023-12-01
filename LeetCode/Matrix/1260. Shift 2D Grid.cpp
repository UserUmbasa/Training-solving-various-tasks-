using namespace std;

#include<vector>
#include<iostream>
#include<algorithm>



class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k)
    {
        vector<int> arr;
        for (const auto& vec : grid)
        {
            //трансформация вектора в строку
            transform(vec.begin(), vec.end(), back_inserter(arr), [](int i) { return  i; });
        }
        //вычислим остаток, уберем целые циклы
        int pos = k % arr.size();
        if (pos == 0) return grid;

        std::rotate(arr.rbegin(), arr.rbegin() + pos, arr.rend());
        //теперь заполним 2 мерный массив
        vector<vector<int>> result;
        //размер одномерного массива
        int Size = grid[0].size();
        vector<int>num;
        for (size_t i = 0; i < arr.size(); i++)
        {
            if (Size != 0)
            {
                num.push_back(arr[i]);
                --Size;
            }
            else
            {
                result.push_back(num);
                num.clear();
                num.push_back(arr[i]);
                Size = grid.size() - 1;
            }
        }
        result.push_back(num);
        return result;
    }
};
int main() {


    Solution a;

    vector<vector<int>> lhs = { {1,2,3}, {4,5,6}, {7,8,9} };
    vector<vector<int>> rhs = { {3,1}, {1,5} };
    auto result = a.shiftGrid(lhs, 2);

}