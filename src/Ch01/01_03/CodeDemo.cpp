// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;

    std::cout << "Please type your name." << std::endl;
    std::cin >> str;

    std::cout << std::endl << std::endl;

    std::cout << "Hello " << str << " and welcome!" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
