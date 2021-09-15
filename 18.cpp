#include <iostream>
int main ()
{
  
  std::cout<<"Mutqagreq 5 Arjeq:"<<std::endl;
 int arr[5];
 int max=arr[0];
 int min= arr[0];
  for (int i = 0; i <5; i++)
  {
    std::cin>>arr[i];
  }
  for(int i=0; i<5;i++)
  {
   if(arr [i]<min)
   {
     min = arr[i];
   }

   if(arr[i]>max)
   {
     max= arr [i];
  }
  }
  std::cout<< max + min;
return 0;
}


#include <iostream>
void foo (int* arr )
{
  int max=arr[0];
 int min= arr[0];
  for (int i = 0; i <5; i++)
  {
    std::cin>>arr[i];
  }
  for(int i=0; i<5;i++)
  {
   if(arr [i]<min)
   {
     min = arr[i];
   }

   if(arr[i]>max)
   {
     max= arr [i];
  }
  }
  std::cout<< max + min;
  
}


int main()
{
  int arr [5];
  foo(arr);
  return 0;
}
