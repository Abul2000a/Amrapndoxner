#include <iostream>

int main() {
   int n = 6, fact = 1, i;
   for(i=1; i<=n; i++)
   fact = fact * i;
   std::cout<<"Factorial of "<< n <<" is "<<fact;
   return 0;