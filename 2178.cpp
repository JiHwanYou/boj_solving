#include <bits/stdc++.h>

int main()
{
    int n, m;
    std::cin >> n >> m;

    bool map[n][m];
    int cnt[n][m];
    std::memset(cnt, 0, sizeof(cnt));
    for (int i = 0; i < n; i++)
    {
        std::string tmp;
        std::cin >> tmp;
        for (int j = 0; j < m; j++)
        {
            map[i][j] = (bool)(tmp[j] - '0');
        }
    }

    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};

    cnt[0][0] = 1;
    std::queue<std::pair<int, int>> q;
    q.push({0, 0});
    while (!q.empty())
    {
        int x, y;
        std::tie(x, y) = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || ny < 0 || nx >= m || ny >= n || !map[ny][nx] || cnt[ny][nx] != 0)
            {
                continue;
            }
            cnt[ny][nx] = cnt[y][x] + 1;
            q.push({nx, ny});
        }
    }

    std::cout << cnt[n - 1][m - 1];

    return 0;
}