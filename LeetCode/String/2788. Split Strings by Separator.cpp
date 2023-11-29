#include <iostream>
#include <sstream>
#include <string>
#include<vector>
#include<algorithm>
#include<map>
#include <cctype>
#include <numeric>
#include "Header.h"
#include "LogTaim.h"
//2788. Split Strings by Separator
using namespace std;
class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator)
    {
        vector<string>word;
        for (const auto& str : words)
        {
            auto begin = str.find_first_not_of(separator, 0); // ищем первую позицую  символа 
            auto end = str.find(separator, begin); // ищем первую позицую  символа 
            while (end != string::npos)
            {
                string temp = { str.begin() + begin,str.begin() + end };
                if (!temp.empty()) word.push_back(temp);

                begin = str.find_first_not_of(separator, end); // ищем следующую позицую  начала слова
                end = str.find(separator, begin); // ищем следующую позицую  конца слова 
                if (end == string::npos) { break; }
            }
            if (begin != string::npos)
            {
                word.push_back({ str.begin() + begin, str.end() });
            }
        }
        return word;
    }
};

int main()
{
    //This is a sample sample text. This text contains contains a sample.
    setlocale(LC_ALL, "Russian");
    Solution a;
    std::vector<int>arr = { 1,2,3,4,5 };
    std::vector<string>words = { "|||" };
    a.splitWordsBySeparator(words, '|');


    return 0;
}