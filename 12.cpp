#include <iostream>
int main()
{
  

  for (int i = 1; i < 10; i+=2)
  {
    for(int k=0;k<(10-i)/2;k++)
    {
      std::cout<<" ";
    }
    for (int j=0;j<i;j++)
    {
      std::cout<<"*";

    }
    std::cout<<std::endl;
  }

    
  return 0;
  

}







#include <iostream>
void foo(int l)
{
  for (int i = 1; i < 10; i+=2)
  {
    for(int k=0;k<(10-i)/2;k++)
    {
      std::cout<<" ";
    }
    for (int j=0;j<i;j++)
    {
      std::cout<<"*";

    }
    std::cout<<std::endl;
  }
  
} 


int main ()
{
  int l=10;
  foo(l);
return 0;
}