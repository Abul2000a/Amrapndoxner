#include <iostream>


struct Student{
    std::string anun;
    std::string azganun;
    int age;
    std::string ararka;
};

int main(){
    Student st;
    std::cout << "Enter Name: ";
    std::cin >> st.anun;
    std::cout << "Enter Last Name: ";
    std::cin >> st.azganun;
    std::cout << "Enter Age: ";
    std::cin >> st.age;
    std::cout << "Enter subject: ";
    std::cin >> st.ararka;

}