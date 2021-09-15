#include <iostream>
int main()
{
int size=0;
int tt[9];
 int arr [3][3];
for(int i=0;i<3;++i)
{
    for(int j = 0; j < 3; ++j)
    {
        std::cin>> arr[i][j];
    }
}

for(int i = 0; i <3;++i )
{
    for(int j = 0; j <3;++j )
    {
        tt[size]=arr[i][j];
        size++;
    }
}



for(int i=0;i<3;++i)
{
    for(int j = 0; j < 3; ++j)
    {
        std::cout<< arr[i][j]<<" ";
    }
    std::cout << std::endl;
}

for(int i=0;i<size;++i)
{
    std::cout<<tt[i];
}
 
return 0;

}