


// #include <iostream>
// int main ()
// {
//      int arr [3][3]={{1,2,3},{4,5,6},{7,8,9}};
//      for(int i=0;i<3;i++)
//      {
//         std::cout<<arr[i][3-i-1];
//      }
// }

#include <iostream>

void foo(int arr[3][3])
{
     for(int i=0;i<3;i++)
     {
        std::cout<<arr[i][3-i-1];
     }
}

int main()
{
   int arr [3][3]={{1,2,3},{4,5,6},{7,8,9}};
   foo(arr);
   return 0; 
}