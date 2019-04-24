#include <iostream>
#include <vector>

using namespace std;

int main(){
    int Count = -1;
    int N;
    vector<int> integer(200);
    cin >> N;
    for(int i = 0;i < N;i++){
        cin >> integer.at(i);
    }
    bool is_flag = true;
    while(is_flag){
        for(int i = 0;i < N;i++){
            if(integer.at(i) % 2 == 0){
                integer.at(i) /= 2;
            }else{
                is_flag =false;
                break;
            }
        }
        Count++;
    }
    cout << Count << endl;
}
