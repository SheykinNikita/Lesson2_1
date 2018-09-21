#include <iostream>

int main() {
     short int a=4789;
     short int b=4584;
    if ((a+b)>127) {
        if ((a+b)< -128)
        std::cout <<char(a+b)<<std::endl;
        else
            std::cout<<a+b<<std::endl;
    }
    else
        std::cout<<a+b<<std::endl;
    if ((a-b)>127) {
        if ((a-b)< -128)
            std::cout <<char(a-b)<<std::endl;
        else
            std::cout<<a-b<<std::endl;
    }
    else
        std::cout<<a-b<<std::endl;
    if ((a*b)>127) {
        if ((a*b)< -128)
            std::cout <<char(a*b)<<std::endl;
        else
            std::cout<<a*b<<std::endl;
    }
    else
        std::cout<<a*b<<std::endl;
    if ((a/b)>127) {
        if ((a/b)< -128)
            std::cout <<char(a/b)<<std::endl;
        else
            std::cout<<a/b<<std::endl;
    }
    else
        std::cout<<a/b<<std::endl;
    
    return 0;
}