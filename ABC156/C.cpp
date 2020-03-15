
#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int a[N];
    int min = 10000000;
    for (int i = 0;i < N;i++){
        cin >> a[i];
    }
    for(int i = 1;i <= 100;i++){
        int S = 0;
        for(int j = 0; j < N;j++){
            S += (i - a[j]) * (i - a[j]);
        }
        min = std::min(S,min);
    }
    cout << min << endl;
}