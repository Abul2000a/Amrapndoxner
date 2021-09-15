#include <iostream>

int NuM(int num){
    if(num==0){return 0;}
   else{std::cout << num << " "; return NuM(num-1);}
}

int main(){
    int Num;
    std::cin >> Num;
    std::cout << NuM(Num);
}