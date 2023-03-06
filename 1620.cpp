#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);  // C & Cpp strem 동기화 해제
    std::cin.tie(NULL);  // 입출력 묶음 해제 (입력 시 출력버퍼 flushing 해제)

    int n, m;
    std::cin >> n >> m;

    std::map<std::string, int> map;
    std::vector<std::string> vec(n+1);

    for (int i = 0; i < n; i++)
    {   
        std::string name;
        std::cin >> name;

        map.insert({name, i+1});
        vec[i+1] = name;
    }

    for (int i = 0; i < m; i++)
    {
        std::string input;
        std::cin >> input;

        if (std::atoi(input.c_str()) != 0)
        {
            int num = std::atoi(input.c_str());
            std::cout << vec[num] << '\n';
        }
        else
        {
            std::cout << map[input] << '\n';
        }
    }

    return 0;
}