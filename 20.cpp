#include <iostream>
int main()
{
 
  int arr1 [2];
  int arr2 [2];
  std::cout<<"Mutqagreq arajin zangvaci arjeqnery :";
  for(int i =0;i<2;i++)
  {
    std::cin>>arr1[i];
  }

  std::cout<<"Mutqagreq Erkrord Zangvaci Arjeqnery:";
 for(int i =0;i<2;i++){
  
    std::cin>>arr2 [i];
  }
  for(int i=0;i<2;i++)
  {
    arr1[i] = arr1[i] * arr2[i];
    std::cout<<arr1[i]<<" ";
  }
   

}



#include <iostream>
void foo(int* arr1,int* arr2)
{
  std::cout<<"Mutqagreq arajin zangvaci arjeqnery:";
   for(int i =0;i<2;i++)
  {
    std::cin>>arr1[i];
  }

std::cout<<"Mutqagreq Erkrord Zangvaci Arjeqnery:";
  for(int i=0;i<2;i++)
  {
    std::cin>>arr2 [i];
  }
  for(int i=0;i<2;i++)
  {
    arr1[i] = arr1[i] * arr2[i];
    std::cout<<arr1[i]<<" ";
  }
}

int main()
{
  int arr1 [2];
  int arr2 [2];
  foo(arr1,arr2);
  return 0;
}



