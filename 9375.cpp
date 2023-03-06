#include <bits/stdc++.h>

int main()
{
    int t, n;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        std::cin >> n;
        std::string bufferflush;
        std::getline(std::cin, bufferflush);

        std::map<std::string, int> wearing;
        for (int j = 0; j < n; j++)
        {
            std::string input;
            std::getline(std::cin, input);

            auto pos = input.find(' ');
            std::string keys = input.substr(pos + 1);
            wearing[keys] += 1;
        }

        int cnt = 1;
        for (auto it : wearing)
        {
            cnt *= (it.second + 1);
        }
        cnt = cnt - 1;
        std::cout << cnt << '\n';
    }

    return 0;
}