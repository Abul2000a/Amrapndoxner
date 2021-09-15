#include <iostream>
int main ()
{
  int number=0;
  std::cin>>number;
  int max=0;
  int min=9;
  while(number)
  {
    int t=number%10;
    max= std::max(t,max);
    min= std::min(t,min);
    number=number/10;
  }
  std::cout<<"Aravelaguyn Arjeqn e  "<< max<< std::endl;
  std::cout<<"Nvazaguyn Arjeqn e  "<< min<<std::endl;
  return 0;
}




#include <iostream>

void foo(int number)
{
   int max=0;
   int min=9;
  while(number)
   {
    int t=number%10;
   max= std::max(t,max);
     min= std::min(t,min);
    number=number/10;
   }
   std::cout<<"Aravelaguyn Arjeqn e  "<< max<< std::endl;
   std::cout<<"Nvazaguyn Arjeqn e  "<< min<<std::endl;
}

int main()
{
  int number =0;
  std::cin>>number;
  foo(number);
  return 0;
}