
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int main()
{
    int H, W;
    cin >> H >> W;
    char a[H][W];
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> a[i][j];
        }
    }
    queue<pair<int,int> > que;
    int dist[H][W];
    int max = -1;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (a[i][j] == '.')
            {
                for(int s = 0;s < H;s++){
                    for(int l = 0;l < W;l++){
                        dist[s][l] = -1;
                    }
                }
                dist[i][j] = 0;
                que.push(make_pair(i, j));
                while (!que.empty())
                {
                    pair<int, int> p = que.front();
                    que.pop();
                    for (int s = 0;s < 4;s++)
                    {
                        int _dx = p.first + dx[s];
                        int _dy = p.second + dy[s];
                        if (0 <= _dx && _dx < H && 0 <= _dy && _dy < W)
                        {
                            if (a[_dx][_dy] == '.' && dist[_dx][_dy] == -1)
                            {
                                dist[_dx][_dy] = dist[p.first][p.second] + 1;
                                que.push(make_pair(_dx, _dy));
                            }
                        }
                    }
                }
                for (int k = 0; k < H; k++)
                {
                    for (int l = 0; l < W; l++)
                    {
                        max = std::max(max,dist[k][l]);
                    }
                }
            }
        }
    }
    cout << max << endl;
}