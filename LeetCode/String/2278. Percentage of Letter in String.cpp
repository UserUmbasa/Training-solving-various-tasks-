#include <iostream>
#include <string>
#include<algorithm>


//383. Ransom Note

using namespace std;

class Solution {
public:
    int percentageLetter(string s, char letter)
    {
        int result = count(s.begin(), s.end(), letter);
        result = 100.0 / s.size() * result;
        return result;
    }
};


int main()
{
    //This is a sample sample text. This text contains contains a sample.
    setlocale(LC_ALL, "Russian");
    string rhs = "foobar";
    char lhs = 'o';
    auto result = a.percentageLetter(rhs, lhs);
    return 0;
}
