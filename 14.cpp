#include <iostream>
int main ()
{
    long dec;
    int rem;

    std::cout << " enter decimal number:";
    std::cin>>dec;
     while(dec>0)
     {
         rem = dec%16;
         if(rem >9)
         {
             switch (rem)
             {
                 case 10: std::cout<< "A"; break;
                 case 11: std::cout<< "B"; break;
                 case 12: std::cout<< "C"; break;
                 case 13: std::cout<< "D"; break;
                 case 14: std::cout<< "E"; break;
                 case 15: std::cout<< "F"; break;
             }
         }
         else 
         {
             std::cout<< rem;
         }
         
         dec = dec / 16;
     }
}    