
#include <iostream>
#include <vector>
#include <map>
#include <queue>

using namespace std;

int main()
{
    long L, R;

    cin >> L >> R;

    long L_1 = L % 2019;
    long R_1 = R % 2019;

    long MIN = 2019;

    if (R_1 <= L_1 || R - 2019 > L)
    {
        cout << 0 << endl;
    }
    else
    {
        for (long i = L_1; i < R_1; i++)
        {
            for (long j = i + 1; j <= R_1; j++)
            {
                MIN = min(MIN, (i * j) % 2019);
            }
        }
        cout << MIN << endl;
    }
}