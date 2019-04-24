#include <iostream>
using namespace std;

int main(){
    int H,W;
    int h,w;
    cin >> H >> W;
    cin >> h >> w;
    cout << (H - h) * (W - w) << endl;
}