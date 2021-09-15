#include <iostream>

int main ()
{
    int x=0;
    std::cin>>x;
    int tmp=0;
   while(x){
     tmp=tmp*10 + x%10;
     x/=10;


   }

       while(tmp){
        std::cout<<tmp%10<<"   ";  
        tmp/=10;
   }
   
   return 0;
}


#include <iostream>


void foo(int x){

  int tmp=0;
  while(x){

    tmp=tmp*10 + x%10;
    x/=10;
  }
  while(tmp){
    std::cout<<tmp%10<<"  ";
    tmp/=10;
  }
}
int main ()
{
int x;
std::cout<<"Mutqagreq Tivy"<<std::endl;
std::cin>>x;
foo(x);

}