#include <bits/stdc++.h>

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

void dfs(bool *map, bool *visited, int n, int x, int y)
{
    *(visited + y * n + x) = true;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || ny < 0 || nx >= n || ny >= n)
        {
            continue;
        }

        bool _map = *(map + ny * n + nx);
        bool _visited = *(visited + ny * n + nx);

        if (_map && !_visited)
        {
            dfs(map, visited, n, nx, ny);
        }
    }

    return;
}

int main()
{
    int n;
    std::cin >> n;

    int map[n][n];

    int max_val = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> map[i][j];

            if (map[i][j] > max_val)
            {
                max_val = map[i][j];
            }
        }
    }

    int max_cnt = 1;
    for (int level = 1; level < max_val; level++)
    {
        bool b_map[n][n];
        bool visited[n][n];
        std::memset(visited, 0, sizeof(visited));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (map[i][j] <= level)
                {
                    b_map[i][j] = false;
                }
                else
                {
                    b_map[i][j] = true;
                }
            }
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (!visited[i][j] && b_map[i][j])
                {
                    dfs((bool *)b_map, (bool *)visited, n, j, i);
                    cnt++;
                }
            }
        }
        if (cnt > max_cnt)
        {
            max_cnt = cnt;
        }
    }

    std::cout << max_cnt;

    return 0;
}