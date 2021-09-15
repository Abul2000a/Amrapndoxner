#include <iostream>

int main (){
    double mij=0;
    double gum=0;
    double art=1;
    int arr[5];
    std::cout<<"Mutqagreq Zangavci 5 Arjeqnery: ";
    for(int i=0;i<5;++i)
    {
        std::cin>>arr[i];}
    for(int j=0;j<5;j++){
     gum+=arr[j];
 }
std::cout<<"Arjeqneri Gumary = :"<<gum<<std::endl;
for(int k=0;k<5;++k){
    art*=arr[k];
}
std::cout<<"Arjeqneri Artadryaly = :"<<art<<std::endl;
mij=(art+gum)/2;
std::cout<<"Mijin Tvabanakany = :"<<mij;
  return 0;
}

