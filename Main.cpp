#include <iostream>

void WordisPalindrome(std::string str)
{
    bool flag = false;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != str[str.length() - i - 1])
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        std::cout << "This word: \"" << str << "\" is not a palindrome word" << std::endl;
    }
    else
    {
        std::cout << "This word: \"" << str << "\" is a palindrome word" << std::endl;
    }
}


int main()
{
    WordisPalindrome("TEST");
    return 0;
}