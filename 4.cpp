#include <iostream>
int main()
{
  std::cout<<"Mutqagreq Tivy:";
  int art=1;
  int x;
  std::cin>>x;
  while(x!=0){
    art*=x%10;
    x/=10;

  }
 std::cout<<art;
 return 0;

}


#include <iostream>

void foo(int x)
{
  int art=1;
  while(x!=0){
    art*= x%10;
    x/=10;

  }
  std::cout<<art;
}

int main(){
  std::cout<<"Enter Number:";
  int x;
  std::cin>>x;
  foo(x);
  return 0;
}