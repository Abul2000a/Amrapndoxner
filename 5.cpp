

#include <iostream>
int main()
{
  int x;
  int y;
  char a;
  std::cout<<"Mutqagreq Tvery:";
  std::cin>>x;
  std::cin>>y;
  std::cout<<"Mutqagreq Gorcoxutyuny:";
  std::cin>>a;
  switch (a)
  {
  case '+':
    std::cout<<x+y;
    break;
  
  case '-':
  std::cout<<x-y;

  case '*':
  std::cout<< x*y;

  case '/':
  std::cout<<  x/y;
  default:
  std::cout<<"Es vonc jogi du chjogir !!!"<<std::endl;
    break;
  }
  return 0;
}

#include <iostream>

void foo(int x,int y,char a)
{
  switch (a)
{
  case '+':
std::cout<< x+y;
break;

  case '-':
  std::cout <<x-y;
  break;

  case '*':
  std::cout<<x*y;
  break;

  case '/':
  std::cout<<x/y;
  break;

  default:
  std::cout<<"Es vonc jogi Du Chjogir !!!"<<std::endl;
  break;
}
}

int main()
{
  int x;
  int y;
  char a;
  std::cout<<"Mutqagreq Arjeqnery:"<<std::endl;
  std::cin>>x;
  std::cin>>y;
  std::cout<<"Mutqagreq Gorcoxutyuny";
  std::cin>>a;
  foo(x,y,a);

  return 0;
}

