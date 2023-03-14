#include <bits/stdc++.h>

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

void dfs(bool *map, bool *visited, int m, int n, int x, int y, int &area)
{
    *(visited + y * n + x) = true;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || ny < 0 || nx >= n || ny >= m)
        {
            continue;
        }

        bool _map = *(map + ny * n + nx);
        bool _visited = *(visited + ny * n + nx);

        if (_map && !_visited)
        {
            dfs(map, visited, m, n, nx, ny, area);
            area++;
        }
    }
    return;
}

int main()
{
    int m, n, k;
    std::cin >> m >> n >> k;

    bool map[m][n];
    bool visited[m][n];
    std::memset(map, 1, sizeof(map));
    std::memset(visited, 0, sizeof(visited));

    while (k--)
    {
        int xmin, ymin, xmax, ymax;
        std::cin >> xmin >> ymin >> xmax >> ymax;

        for (int i = ymin; i < ymax; i++)
        {
            for (int j = xmin; j < xmax; j++)
            {
                map[i][j] = false;
            }
        }
    }

    int cnt = 0;
    std::vector<int> v_area;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (map[i][j] && !visited[i][j])
            {
                int area = 1;
                dfs((bool *)map, (bool *)visited, m, n, j, i, area);
                v_area.push_back(area);
                cnt++;
            }
        }
    }

    std::cout << cnt << '\n';
    std::sort(v_area.begin(), v_area.end());
    for (auto a : v_area)
    {
        std::cout << a << ' ';
    }

    return 0;
}