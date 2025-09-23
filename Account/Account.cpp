#include "Account.hpp"

void openAccount(std::vector<Student>& studentAcc) {
    std::string name;
    int IdNum;
    float gpa;
    int age;
    std::cout << "Enter a the student's name: ";
    std::cin.ignore();
    getline(std::cin, name);

    std::cout << "Enter the student's age: ";
    std::cin >> age;
    
    std::cout << "Enter the student's ID number: ";
    std::cin >> IdNum;

    std::cout << "Enter the student's gpa: ";
    std::cin >> gpa;

}
void removeAccount(std::vector<Student>& studentAcc) {

}
void listAccounts(const std::vector<Student>& studentAcc) {
    if(studentAcc.empty()) {
        std::cout << "Error, No accounts in the system.";
        return;
    }

    
}