
#include <iostream>

using namespace std;

int main()
{
    int N, A, B;

    cin >> N >> A >> B;

    if (B > N * A)
    {
        cout << N * A << endl;
    }
    else
    {
        cout << B << endl;
    }
}