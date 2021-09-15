#include <iostream>
int main ()
{
  std::cout<<"Mutqagreq Arjeqnery:";
  int count=0;
  int arr [5];
  for (int i=0;i<5;++i)
  {
    std::cin>>arr[i];

    if(arr[i]%2!=0)
    {
      count ++;
      
    }
  }
  std::cout<<count;
  return 0;
}