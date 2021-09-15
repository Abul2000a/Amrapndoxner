#include <iostream>
 
struct Point{
    int cordX;
    int cordY;

};

int main(){
    Point line[2];
    Point lin[2];
    for(int i = 0; i<2;i++){
        line[0].cordX=5;
        line[0].cordY=6;
        line[1].cordX=7;
        line[1].cordY=8;
    }
    int a=(line[1].cordY-line[0].cordY)/(line[1].cordX-line[0].cordX);
    int b;
    b = line[0].cordY-line[0].cordX*a;
    std::cout << "f(x)="<<a<<"x+"<< "("<<b<<")"<<std::endl;
    for(int i = 0; i<2;i++){
        lin[0].cordX=0;
        lin[0].cordY=1;
        lin[1].cordX=1;
        lin[1].cordY=0;
    }
    int a_1=(lin[1].cordY-lin[0].cordY)/(lin[1].cordX-lin[0].cordX);
    int b_1;
    b_1 = lin[0].cordY-lin[0].cordX*a;
    std::cout << "f(x)="<<a_1<<"x+"<< "("<<b_1<<")";
    
    int y = lin[0].cordX*a+b;
    int y1 = lin[0].cordX*a_1+b_1;
    if(y==y1){
        std::cout << "Uxixnery hatvum en";

    }
    else{
        std::cout << "Uxixnery chen hatvum";
    }
    
    
}