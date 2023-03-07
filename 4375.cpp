#include <bits/stdc++.h>

int main()
{
    int n;

    while (!(std::cin >> n).eof())
    {
        long long x = 1;
        int digit = 1;
        while (true)
        {
            int remainder = x % n;
            if (remainder == 0)
            {
                break;
            }
            else
            {
                x = 10 * remainder + 1;
                digit++;
            }
        }
        std::cout << digit << '\n';
    }

    return 0;
}