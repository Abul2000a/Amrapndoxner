// #include <iostream>
// int main ()
// {
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int gum=0;
//     int gum2=0;
//     for(int i=0;i<3;i++)
//     {
//         gum= gum + arr[i] [i];
        
//     }
//     for(int i=0;i<3;i++)
//     {
//         gum2=gum2 + arr[i][3-i-1];
//     }
//     std::cout<<gum+gum2;
//     return 0 ;

// }


#include <iostream>
void foo(int arr[3][3])
{
     int gum=0;
    int gum2=0;
    for(int i=0;i<3;i++)
    {
        gum= gum + arr[i] [i];
        
    }
    for(int i=0;i<3;i++)
    {
        gum2=gum2 + arr[i][3-i-1];
    }
    std::cout<<gum+gum2;
}

int main()
{
     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
     foo(arr);
     return 0;
}