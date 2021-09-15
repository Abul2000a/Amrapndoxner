#include <iostream>
#include <cmath>
void foo(int a,int b,int c)
{

  int d = (b*b) - 4*a*c;
  int x1;
  int x2;

  if(d>0)
  {
    x1=( -b+ sqrt(d))/(2*a);
    x2= (-b - sqrt(d))/(2*a);
     std::cout<<"Armatnern en:"<< x1<<"   ev   "<<x2;
  }

  else if (d==0)
  {
    x1= (-b/2*a);
    std::cout<<"Uni mek armat:"<<x1;
  }

  else 
  {
    std::cout<<" Chuni Armat !!!";
  }


   
}


int main() 
{
  int a;
  int b;
  int c;
 std::cout<<"Mutqagrel Arjeqnery";
 std::cin>>a;
std::cin>>b;
std::cin>>c;
foo(a,b,c);
return 0;
}
