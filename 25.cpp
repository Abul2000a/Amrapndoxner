#include <iostream>
void foo(int arr[3][3])
{   
    int i;
    int tmp;
    for(int i=0;i<3;i++)
    {
       tmp=arr[i][i];
       arr[i][i]=arr[i][3-i-1];
       arr[i][3-i-1]=tmp; 
       std::cout<< arr[i][i];
    }  
   
}  


int main ()
{
   int arr [3][3]={{1,2,3},{4,5,6},{7,8,9}};
   foo(arr);
   return 0;
}
