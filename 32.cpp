#include <iostream>
char maxRepeating(std::string str, int n){
   int count = 0;
   char repchar = str[0];
   int maxC = 1;
   for (int i=0; i<n; i++){
      if (str[i] == str[i+1] && i < n-1 )
         maxC++;
      else{
         if (maxC > count){
            count = maxC;
            repchar = str[i];
         }
         maxC = 1;
      }
   }
   return repchar;
}
int main(){
   std::string string1;
   getline(std::cin,string1);
   int  sizeofstr= string1.length();
   std::cout << "Maximum Consecutive repeating character in string:";
   std::cout << maxRepeating(string1,sizeofstr);
   return 0;
}