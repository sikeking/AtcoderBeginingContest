
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int A;
    int Sum = 0;
    int max = 0;
    std::cin >> A;
    std::vector<int> L(A);
    for(int i = 0;i < A;i++){
        std::cin >> L[i];
        max = std::max(max,L[i]);
        Sum += L[i];
    }
    Sum -= max;
    if(max < Sum){
        std::cout << "Yes" << std::endl;
    }else{
        std::cout << "No" << std::endl;
    }
}