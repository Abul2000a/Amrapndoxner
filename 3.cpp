#include <iostream>
int main ()
{
  std::cout<<"Greq tivy:";
  int x;
  std::cin>>x;
  int sum=0;
  while(x!=0){
    sum=sum+ x%10;
    x/=10;
  }
  std::cout<<sum;
  return 0;
}



#include <iostream>

void foo(int x){
  
  int sum=0;
  while(x!=0){
    sum=sum + x%10;
    x/=10;
    
  }
  std::cout<<sum;
}

int main()
{
  std::cout<<"Enter Number:";
  int x;
  std::cin>>x;
  foo(x);
  return 0;
}