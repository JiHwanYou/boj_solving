#include <bits/stdc++.h>

int main()
{
    int n, k;
    std::cin >> n >> k;

    std::vector<int> v(n + 1, 0);
    std::vector<long long> psum(n + 1, 0);

    long long max = -100 * k;
    for (int i = 1; i <= n; i++)
    {
        std::cin >> v[i];
        psum[i] = psum[i - 1] + v[i];

        if (i >= k)
        {
            long long diff = psum[i] - psum[i - k];
            if (diff > max)
            {
                max = diff;
            }
        }
    }

    std::cout << max;
    return 0;
}