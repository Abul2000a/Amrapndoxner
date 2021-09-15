#include <iostream>

int main(){
    std::cout<<"Enter number:";
    std::string tiv;
    std::cin>>tiv;
    std::cout<<"Enter k:";
    int k=0;
    std::cin>>k;
    for(int i=0;i<k;++i)
     std::cout<<tiv[i];
    return 0;
}

