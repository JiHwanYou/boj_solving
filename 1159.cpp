#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;

    int cnt[26] = {0};
    for (int i = 0; i < n; i++)
    {
        std::string family_name;
        std::cin >> family_name;

        cnt[family_name[0] - 'a']++;
    }

    bool is_predaja = true;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] >= 5)
        {
            std::cout << char('a' + i);
            is_predaja = false;
        }
    }
    if (is_predaja)
    {
        std::cout << "PREDAJA";
    }

    return 0;
}