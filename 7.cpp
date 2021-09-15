#include <iostream>
int main()
{
  std::cout<<"Enter Name:";
  char name [25];
  std::cin>>name ;
  for(int i=0;i<25;++i)
  {

    if(name[i]=='a' || name[i]=='A' || name[i]=='i' ||name[i]=='I'|| name[i]=='o' ||name[i]=='O' ||name[i]=='e' ||name[i]=='E' || name[i]=='u' || name[i]=='U' ) 
    {
     for (int j = i; j < 25; j++)
     {
         name[j]=name[j+1];
     }
     
     
    }
 
  }
  std::cout<< name;
return 0;

}





#include <iostream>

void foo(char name [25]){
 
  for(int i=0;i<25;++i)
  {

    if(name[i]=='a' || name[i]=='A' || name[i]=='i' ||name[i]=='I'|| name[i]=='o' ||name[i]=='O' ||name[i]=='e' ||name[i]=='E' || name[i]=='u' || name[i]=='U' ) 
    {
     for (int j = i; j < 25; j++)
     {
         name[j]=name[j+1];
     }
     
     
    }
 
  }
std::cout<<name;
  }
int main()
{
  std::cout<<"Enter Name:";
  char name [25];
  std::cin>>name ;

  foo(name);
return 0;

}
 
