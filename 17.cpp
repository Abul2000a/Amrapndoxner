#include <iostream>
int main ()
{
  
  std::cout<<"Mutqagreq 5 Arjeq:"<<std::endl;
 int arr[5];
 int index;
 int min= arr[0];
  for (int i = 0; i <5; i++)
  {
    std::cin>>arr[i];
   
  for(int i=0; i<5;i++)
   if(arr [i]<min)
   {
     min = arr[i];
     index= i;
      
   }
   
  }
  std::cout<<"Nvazaguyn Arjeqi index-n e:"<<index;
return 0;
}



#include <iostream>
 void foo(int* arr)
 {
   int index;
  int min;
  for (int i = 0; i <5; i++)
  {
    std::cin>>arr[i];
    min=arr[0];
  for(int i=0;i<5;++i){
   if(arr [i]<min)
   {
     min = arr[i];
     index = i;
   }
   }
  }
   std::cout<<"Nvazaguyn Arjeqi index-n e:"<<index;
 }


int main()
{
  std::cout<<"Mutqagreq 5 Arjeq:"<<std::endl;
  int arr[5];
  foo(arr);

return 0;
}

