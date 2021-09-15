#include <iostream>

int fact (int nuM){
    if(nuM==0){return 1;}
    else{return nuM*fact(nuM-1);}
}

int main(){
    int num;
    std::cin >> num;
    std::cout << fact(num);
}