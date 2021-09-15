#include <iostream>
int main ()
{
  
  std::cout<<"Mutqagreq 5 Arjeq:"<<std::endl;
 int arr[5];
 int index;
 int max= arr[0];
  for (int i = 0; i <5; i++)
  {
    std::cin>>arr[i];
   
  
   if(arr [i]>max)
   {
     max = arr[i];
     index= i;
      
   }
   
  }
  std::cout<<"Aravelaguyn Arjeqi index-n e:"<<index;
return 0;
}


#include <iostream>
 void foo(int* arr)
 {
   int index;
 int max= arr[0];
  for (int i = 0; i <5; i++)
  {
    std::cin>>arr[i];
   
  
   if(arr [i]>max)
   {
     max = arr[i];
     index= i;
   }
   }
   std::cout<<"Aravelaguyn Arjeqi index-n e:"<<index;
 }


int main()
{
  std::cout<<"Mutqagreq 5 Arjeq:"<<std::endl;
  int arr[5];
  foo(arr);
}

