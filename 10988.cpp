#include <bits/stdc++.h>

int main()
{
    std::string word;
    std::cin >> word;

    bool is_palindrome = true;
    for (int i = 0; i < word.size() / 2; i++)
    {
        if (word[i] != word[word.size() - 1 - i])
        {
            is_palindrome = false;
            break;
        }
    }

    std::cout << (int)is_palindrome;

    return 0;
}