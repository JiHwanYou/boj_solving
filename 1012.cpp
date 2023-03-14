#include <bits/stdc++.h>

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

void dfs(bool *map, bool *visited, int n, int m, int x, int y)
{
    *(visited + y * m + x) = true;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || ny < 0 || nx >= m || ny >= n)
        {
            continue;
        }

        bool _map = *(map + ny * m + nx);
        bool _visited = *(visited + ny * m + nx);

        if (_map && !_visited)
        {
            dfs(map, visited, n, m, nx, ny);
        }
    }

    return;
}

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n, m, k;
        std::cin >> n >> m >> k;

        bool map[n][m];
        std::memset(map, 0, sizeof(map));

        bool visited[n][m];
        std::memset(visited, 0, sizeof(visited));

        while (k--)
        {
            int x, y;
            std::cin >> x >> y;
            map[x][y] = true;
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!visited[i][j] && map[i][j])
                {
                    dfs((bool *)map, (bool *)visited, n, m, j, i);
                    cnt++;
                }
            }
        }

        std::cout << cnt << '\n';
    }

    return 0;
}