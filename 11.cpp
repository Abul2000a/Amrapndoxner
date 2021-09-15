#include <iostream>
int main()
{
  char tt;
  std::cin>>tt;

  for (int i = 1; i < 10; i+=2)
  {
    for(int k=0;k<(10-i)/2;k++)
    {
      std::cout<<" ";
    }
    for (int j=0;j<i;j++)
    {
      std::cout<<tt;

    }
    std::cout<<std::endl;
  }

  for(int x=0;x<8;++x)
  {
    for(int y=0;y<9;y++)
    {
      std::cout<<tt;
    }
    std::cout<<std::endl;
  }

    
  return 0;
  

}



#include <iostream>
void foo( char tt)
{
   

  for (int i = 1; i < 10; i+=2)
  {
    for(int k=0;k<(10-i)/2;k++)
    {
      std::cout<<" ";
    }
    for (int j=0;j<i;j++)
    {
      std::cout<<tt;

    }
    std::cout<<std::endl;
  }

  for(int x=0;x<8;++x)
  {
    for(int y=0;y<9;y++)
    {
      std::cout<<tt;
    }
    std::cout<<std::endl;
  }
}

int main ()
{
  char tt;
  std::cin>>tt;
  foo(tt);
  return 0;
}



