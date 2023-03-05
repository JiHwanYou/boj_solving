#include <bits/stdc++.h>

void makeCombination(int start, std::vector<int> v, std::vector<int> &a)
{
    static bool once_found = false;

    if (once_found)
    {
        return;
    }

    if (v.size() == 7)
    {
        if (std::accumulate(v.begin(), v.end(), 0) == 100)
        {
            std::sort(v.begin(), v.end());
            for(int x: v)
            {
                std::cout << x << '\n';
            }
            once_found = true;
        }
        return;
    }

    for (int i = start + 1; i < 9; i++)
    {
        v.push_back(a[i]);
        makeCombination(i, v, a);
        v.pop_back();
    }
    return;
}

int main()
{
    std::vector<int> a;
    for (int i = 0; i < 9; i++)
    {
        int x;
        std::cin >> x;
        a.push_back(x);
    }
    std::vector<int> v(0);
    makeCombination(-1, v, a);

    return 0;
}