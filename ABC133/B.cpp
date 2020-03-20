
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, D;

    cin >> N >> D;

    double a[N][D];
    double dist;
    int dist_i;
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < D; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            dist =
                for (int k = 0; k < D; k++)
            {
                dist += (a[j][k] - a[i][k]) * (a[j][k] - a[i][k]);
            }
            dist = sqrt(dist);
            if (ceil(dist) == floor(dist))
            {
                count++;
            }
        }
    }
    cout << count << endl;
}