
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    vector<int> Diameter(100);
    cin >> N;
    for(int i = 0;i < N;i++){
        cin >> Diameter.at(i);
    }
    sort(Diameter.begin(),Diameter.begin() + N);
    int Hight = 1;
    int Mochi = Diameter.at(0);
    bool is_flag = true;
    while(is_flag){
        cout << Mochi << endl;
        for(int i = 0;i < N;i++){
            if(Diameter.at(i) > Mochi){
                Mochi = Diameter.at(i);
                Hight++;
                break;
            }else if(i == N-1){
                is_flag = false;
            }
        }
    }
    cout << Hight << endl;
}