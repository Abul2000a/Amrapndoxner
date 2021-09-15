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
    Student st_2;
    st_2.anun = st.anun;
    st_2.azganun = st_1.azganun;
    st_2.age = (st.age + st_1.age)/2;
    st_2.ararka = st.ararka;
    std::cout << "Name is: " << st_2.anun << std::endl;
    std::cout << "Last Name is : " << st_2.azganun << std::endl;
    std::cout << "Age is: " << st_2.age << std::endl;
    std::cout << "Subject is: " <<  st_2.ararka << std::endl;
}