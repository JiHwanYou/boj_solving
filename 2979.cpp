#include <bits/stdc++.h>

int main()
{
    int A, B, C;
    std::cin >> A >> B >> C;

    int t[101] = {0};
    for (int i = 0; i < 3; i++)
    {
        int enter, exit;
        std::cin >> enter >> exit;

        for (int j = enter; j < exit; j++)
        {
            t[j]++;
        }
    }

    int sum = 0;
    for (int x : t)
    {
        if (x == 3)
        {
            sum += (x * C);
        }
        else if (x == 2)
        {
            sum += (x * B);
        }
        else if (x == 1)
        {
            sum += (x * A);
        }
    }

    std::cout << sum;

    return 0;
}