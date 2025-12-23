// Learning C++ 
// Challenge Solution 01_04
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Enter your name: " << std::flush;
    std::cin >> str;
    std::cout << "Nice to meet you, " << str << "!" << std::endl;
        std::cout << "do you have a last name " << str << "?" << std::endl;
        std::cin >> str;
        std::cout << "Hot diggity dog that is your last name it is  " << str << "?" << std::endl;
            std::cout << "what a cheezy last name dont ya think?";
            std::cin >> str;
            std::cout <<"okay okay my bad, dont mean to offend I can take  " << str << "  as an answer!" <<std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
