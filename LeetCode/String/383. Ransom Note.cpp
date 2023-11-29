#include <iostream>
#include <sstream>
#include <string>
#include<vector>
#include<algorithm>
#include<map>
#include <cctype>

//383. Ransom Note

using namespace std;
//альтернативный вариант
//В этом обновленном коде мы проходим по строке "magazine" и подсчитываем количество каждого символа, 
//а затем проходим по "ransomNote" и уменьшаем соответствующее количество в "magCount".Если в процессе уменьшения мы 
//сталкиваемся с отсутствующим символом в "magazine", сразу возвращаем false.
class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        std::map<char, int> magCount;
        for (char c : magazine) {
            magCount[c]++;
        }
        for (char c : ransomNote) {
            if (magCount[c] == 0) {
                return false;
            }
            magCount[c]--;
        }
        return true;
    }
};
//мой
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine)
    {

        map<char, int>ransomNote_;
        for (char c : ransomNote) {
            ransomNote_[c]++;
        }
        for (auto& pos : ransomNote_)
        {
            auto sum = count(magazine.begin(), magazine.end(), pos.first);
            if (pos.second > sum)
            {
                return false;
            }
        }
        return true;


    }
};


int main()
{
    //This is a sample sample text. This text contains contains a sample.
    setlocale(LC_ALL, "Russian");
    Solution a;
    string ransomNote = "bg";
    string magazine = "efjbdfbdgfjhhaiigfhbaejahgfbbgbjagbddfgdiaigdadhcfcj";
    a.canConstruct(ransomNote, magazine);
    return 0;
}
