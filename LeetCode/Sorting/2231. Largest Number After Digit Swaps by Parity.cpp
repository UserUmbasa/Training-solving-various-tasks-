
using namespace std;

#include<iostream>
#include<string>


class Solution {
public:
    int largestInteger(int num) {
        string str = to_string(num);
        for (size_t i = 0; i < str.size(); i++)
        {
            if (str[i] % 2 == 0)
            {
                for (size_t j = i + 1; j < str.size(); j++)
                {
                    if (str[j] % 2 == 0 && str[j] > str[i])
                    {
                        int temp = str[j];
                        str[j] = str[i];
                        str[i] = temp;
                    }
                }
            }
            else
            {
                for (size_t j = i + 1; j < str.size(); j++)
                {
                    if (str[j] % 2 != 0 && str[j] > str[i])
                    {
                        int temp = str[j];
                        str[j] = str[i];
                        str[i] = temp;
                    }
                }
            }
        }
        int result = stoi(str);
        return result;
    }
};

int main() {
    Solution a;
    auto result = a.largestInteger(1234);
    std::cout << result << std::endl;
}