#include <iostream>

int* deleteInd(int* arr,int* arr_1, int index ,int size)

{
   for(int i =0;i<index;++i)
   {
       arr_1 [i]=arr[i];
   }
   for(int j=index;j<size;++j)
   {
       arr_1[j]=arr[j+1];
   }
   return arr_1;
}

int main()

{
    int size;
    std::cout<<"Mutqagreq Zangvaci chaqy :";
    std::cin>>size;
    int* arr = new int [size];
    std::cout<<"Mutqagreq Zangvaci arjeqnery:";
    for(int i=0;i<size;++i)
    {
        std::cin>>arr[i];
    }
    int* arr_1 = new int[size-1];
    std::cout<<"Vor Indexov tivn eq uzum jnjel ?:";
    int index;
    std::cin>>index;
    std::cout<<"Dzer Nor Zangvacn e :";
    deleteInd(arr,arr_1,index,size);
    for(int i=0;i<size-1;++i)
    {
        std::cout<<arr_1[i]<<" ";
    }

delete [] arr;
delete [] arr_1;
arr=nullptr;
arr_1=nullptr;
}

