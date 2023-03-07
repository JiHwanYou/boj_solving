#include <bits/stdc++.h>

long long calc(long long a, long long b, long long c)
{
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a % c;
    }

    long long ret = calc(a, b / 2, c);
    if (b % 2 == 1)
    {
        return ((ret * ret % c) * (a % c)) % c;
    }
    else
    {
        return (ret * ret) % c;
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long a, b, c;
    std::cin >> a >> b >> c;

    std::cout << calc(a, b, c);

    return 0;
}