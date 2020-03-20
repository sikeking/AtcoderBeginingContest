
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int a[N];
    int b[N] = {0};
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        if (i % 2 == 0)
        {
            b[0] += a[i];
        }
        else
        {
            b[0] -= a[i];
        }
    }
    b[0] /= 2;
    for (int i = 1; i < N; i++)
    {
        b[i] = a[i - 1] - b[i - 1];
    }

    for (int i = 0; i < N; i++)
    {
        cout << b[i] * 2;
        if (i != N - 1)
        {
            cout << ' ';
        }
        else
        {
            cout << endl;
        }
    }
}