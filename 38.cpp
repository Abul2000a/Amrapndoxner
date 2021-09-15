#include <iostream>
 
struct Point{
    int cordX;
    int cordY;

};

int main(){
    Point line[2];
    for(int i = 0; i<2;i++){
        line[0].cordX=5;
        line[0].cordY=6;
        line[1].cordX=7;
        line[1].cordY=8;
    }
    int a=(line[1].cordY-line[0].cordY)/(line[1].cordX-line[0].cordX);
    int b;
    b = line[0].cordY-line[0].cordX*a;
    std::cout << "f(x)="<<a<<"x+"<< "("<<b<<")";
}