#include <iostream>
int main()
{
  int arr1 [3];
  int arr2 [3];
  std::cout<<"Mutqagreq Arajin Zangvaci Arjeeqnery:";
  for(int i=0;i<3;i++)
  {
    std::cin>>arr1[i];
  }
  std::cout<<"Mutqagreq Erkrord Zangvaci Arjeqnery:";
  for(int i=0;i<3;i++)
  {
    std::cin>>arr2[i];
  }
  for(int i=0;i<3;i++)
  {
    arr1[i]=arr1[i]+ arr2[i];
    std::cout<<arr1[i]<<" ";
  }
  return 0;
}


#include <iostream>
void foo(int* arr1,int* arr2)
{
  std::cout<<"Mutqagreq Arajin Zangvaci Arjeeqnery:";
  for(int i=0;i<3;i++)
  {
    std::cin>>arr1[i];
  }
  std::cout<<"Mutqagreq Erkrord Zangvaci Arjeqnery:";
  for(int i=0;i<3;i++)
  {
    std::cin>>arr2[i];
  }
  for(int i=0;i<3;i++)
  {
    arr1[i]=arr1[i]+ arr2[i];
    std::cout<<arr1[i]<<" ";
  }
}


int  main()
{
  int arr1[3];
  int arr2 [3];
  foo(arr1,arr2);
  return 0;
}