
#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    pair<int, string> p[M];
    for (int i = 0; i < M; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    pair<bool, int> tf[N];
    for (int i = 0; i < N; i++)
    {
        tf[i].first = false;
        tf[i].second = 0;
    }
    int ac = 0;
    int wa = 0;
    for (int i = 0; i < M; i++)
    {
        if (!tf[p[i].first - 1].first)
        {
            if (p[i].second == "AC")
            {
                tf[p[i].first - 1].first = true;
                ac++;
            }
            else
            {
                tf[p[i].first - 1].second++;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (tf[i].first)
        {
            wa += tf[i].second;
        }
    }
    cout << ac << " " << wa << endl;
}