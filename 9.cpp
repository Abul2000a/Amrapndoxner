//// 9-rd ****************///





  #include <iostream>


  int main ()
  {
    std::cout<<"Enter Name:";
    std::string name;
    std::cin>>name;
    for (int i=1;i<name.length();i=i+2)
    {
      name[i]= name[i] -32;
    }
    std::cout<<name;
    return 0;
  }


#include <iostream>

void foo(std::string name)
{
  for(int i =1;i<name.length();i=i+2)
  {
  name[i]=name[i] - 32;
  }
  std::cout<<name;

}

int main ()
{
 std::cout<<" Enter Name:";
 std::string name;
 std::cin>>name;
  
foo(name);
return 0;
}