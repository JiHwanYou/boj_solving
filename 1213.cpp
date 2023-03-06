#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string word;
    std::cin >> word;

    int cnt[26] = {0};
    for (char x : word)
    {
        cnt[x - 'A']++;
    }

    int flag = 0;
    char mid = 0;
    std::string result;
    for (int i = 'Z'; i >= 'A'; i--)
    {
        if (cnt[i - 'A'])
        {
            if (cnt[i - 'A'] & 1) // if odd number
            {
                mid = char(i);
                flag++;
                cnt[i - 'A']--;
            }
            if (flag == 2)
            {
                break;
            }
            for (int j = 0; j < cnt[i - 'A']; j += 2)
            {
                result = char(i) + result; // push_front
                result += char(i);      // push_back
            }
        }
    }
    if (mid)
    {
        result.insert(result.begin() + result.size() / 2, mid);
    }

    if (flag == 2)
    {
        std::cout << "I'm Sorry Hansoo" << '\n';
    }
    else
    {
        std::cout << result << '\n';
    }

    return 0;
}
