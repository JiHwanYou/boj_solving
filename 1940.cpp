#include <bits/stdc++.h>

int main()
{
    int n, m;
    std::cin >> n;
    std::cin >> m;

    std::vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        std::cin >> v[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + v[j] == m)
            {
                cnt++;
            }
        }
    }

    std::cout << cnt;
    return 0;
}