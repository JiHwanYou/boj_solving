#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;

    std::string pattern;
    std::cin >> pattern;

    auto pos = pattern.find('*');
    std::string pre = pattern.substr(0, pos);
    std::string suf = pattern.substr(pos + 1);

    for (int i = 0; i < n; i++)
    {
        std::string word;
        std::cin >> word;
        
        bool is_matched = true;
        if (pre.size() + suf.size() > word.size())
        {
            is_matched = false;
        }
        else
        {
            if (pre != word.substr(0, pre.size()) || suf != word.substr(word.size()-suf.size()))
            {
                is_matched = false;
            }
        }
        if (is_matched)
        {
            std::cout << "DA" << '\n';
        }
        else
        {
            std::cout << "NE" << '\n';
        }
    }

    return 0;
}