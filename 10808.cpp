#include <bits/stdc++.h>

int main()
{
    std::string word;
    std::cin >> word;

    int alphabet[26] = {0};
    for (char x : word)
    {
        int idx = x - 'a';
        alphabet[idx]++;
    }
    
    for (int x : alphabet)
    {
        std::cout << x << ' ';
    }

    return 0;
}