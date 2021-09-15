#include <iostream>
int main ()
{
  std::cout<<"Mutqagreq Arjeqnery:";
  int arr [5];
  for(int i =0; i<5; i++)
  {
    std::cin>>arr[i];
  }
  for(int i=4;i>=0;i--)
  {
  
    std::cout<<arr[i]<<" ";
  }
}

#include <iostream>
void foo (int* arr)
{
 for(int i =0; i<5; i++)
  {
    std::cin>>arr[i];
  }
  for(int i=4;i>=0;i--)
  {
    std::cout<<arr[i]<<" ";
  }
}

int main ()
{
  std::cout<<"Mutqagreq Arjeqnery:";
  int arr [5];
  foo(arr);
  return 0;
}
