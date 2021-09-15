#include <iostream>
#include<string>


std::string to_Binary(int n)
{
    std::string r;
    while(n!=0) {
       // r=(n%2==0 ?"0":"1")+r; //es taki gracy karas senc mi toxov gres minchev return r;
       if(n%2==0){
           r="0"+r;
             n/=2;
       }
    
       else{
           r="1"+r;
             n/=2;
       }
       
        }
       
    return r;
}
int main()
{
    std::cout << to_Binary(7);
    
}