#include <iostream>
int main ()
{
  int num;
  int count=0;
  int bin [100];
  std::cout<<" Enter your decimal number";
  std::cin>>num;
  for(int i=0;num > 0;i++)
  {
    bin[i]= num %2;
    num=num/2;
    count ++;
  }
  std::cout<< " \n Your Digital Number is  "; 

  for ( int j = count-1; j>=0;j--)
  {
    std::cout<<bin[j];
  }
   return 0;
}



#include <iostream>

void foo(int num)
{
 int count=0;
 int bin [100];

  
  for(int i=0;num > 0;i++)
  {
    bin[i]= num %2;
    num=num/2;
    count ++;
  }
  std::cout<< " \n Your Digital Number is  "; 

  for ( int j = count-1; j>=0;j--)
  {
    std::cout<<bin[j];
  }


}

int main()
{
  int num;
  std::cout<<" Enter your decimal number";
  std::cin>>num;
 
  
  
  foo(num);

  return 0;
}
