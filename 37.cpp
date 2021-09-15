#include <iostream>

struct Point{
    int cordX;
    int cordY;

};

int main(){
    Point pixel;
    std::cout << "Enter X: ";
    std::cin >> pixel.cordX;
    std::cout << "Enter Y: ";
    std::cin >> pixel.cordY;
    std::cout << "Coordinate Pixel(" << pixel.cordX<<","<<pixel.cordY<<")";
}