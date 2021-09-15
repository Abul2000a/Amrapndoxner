#include <iostream>
int main()
{
  int tmp;
  int x=0;
  std::cin>>x;
  while(x!=0)
  {
     tmp=x%10; 
     x/=10;
     std::cout<<tmp;
  }

}


#include <iostream>

void foo(int x){
  int tmp;
  while(x!=0){
    tmp=x%10;
    x=x/10;
    std::cout<<tmp;

  }
}
 int main ()
 {

   int x;
   std::cout<<"Mutqagreq tivy"<<std::endl;
   std::cin>>x;
   foo(x);
   return 0;
 }
