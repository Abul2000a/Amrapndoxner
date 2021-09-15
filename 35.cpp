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
    Student st_1;
    std::cout << "Enter Name: ";
    std::cin >> st_1.anun;
    std::cout << "Enter Last Name: ";
    std::cin >> st_1.azganun;
    std::cout << "Enter Age: ";
    std::cin >> st_1.age;
    std::cout << "Enter subject: ";
    std::cin >> st_1.ararka;
    if(st.age > st_1.age){
        std::cout << st.anun;
    }
    else{
        std::cout << st_1.anun;
    }

}