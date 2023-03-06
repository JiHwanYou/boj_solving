#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    int good_word_cnt = 0;
    
    for (int i = 0; i < n; i++)
    {
        std::string input;
        std::cin >> input;

        std::stack<char> stk;

        for (int j = 0; j < input.size(); j++)
        {
            if (stk.size() && stk.top() == input[j])
            {
                stk.pop();
            }
            else
            {
                stk.push(input[j]);
            }
        }

        if (stk.empty())
        {
            good_word_cnt++;
        }
    }
    std::cout << good_word_cnt;

    return 0;
}