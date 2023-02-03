/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number. 
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/
#include<iostream>
#include<string>

void getDetails() {
    
    std::string name, address, phone;
    std::getline(std::cin, name);
    std::getline(std::cin, address);
    std::getline(std::cin, phone);
    std::cout << name << "\n";
    std::cout << address;
    std::cout << phone;
    
}

int main() {
    getDetails();
    getDetails();
}