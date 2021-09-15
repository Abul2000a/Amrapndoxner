#include <iostream>

std::string reversestr(std::string s){
    for(int i=s.length();i>=0;i--){
        std::cout << s[i]; 
    }
    return s;

}
int main(){
    std::string str;
    std::cin >> str;
    reversestr(str);
}