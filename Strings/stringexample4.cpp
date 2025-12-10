// 4.check if palindrome

#include <iostream>
#include <string>

using namespace std;

bool checkIfPalindrome(std::string name)
{
    std::string name2 = "";
    size_t size = name.length();
    for (int i = size -1; i >= 0; i--)
    {
    name2 += name[i];
    }
    if (name == name2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    std::string s = "1malayalam1";

    bool isPalindrome = true;

    isPalindrome = checkIfPalindrome(s);
    if (isPalindrome)
    {
        cout << "String is a Palindrome" << endl;
    }
    else
    {
        cout << "String is not a Palindrome" << endl;
    }

    return 0;
}