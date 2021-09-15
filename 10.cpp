 #include <iostream>
  int main ()
  {
    std::cout<<"Mutqagrel  Tivy Metrerov:";
    double tiv;
    std::cin>>tiv;
    tiv=tiv/1000;
    std::cout<<"Metrerov Kazmum e  "<< tiv<< "  km"<<std::endl;
    return 0;
  }



  #include <iostream>

  void foo(double tiv)
  {
    tiv=tiv/1000;
    std::cout<<"Metrerov Kazmum e  "<< tiv<< "  km"<<std::endl;

  }
 
 int main()
 {
   std::cout<<"Mutqagrel  Tivy Metrerov:";
    double tiv;
    std::cin>>tiv;
    foo(tiv);
    return 0;
 }