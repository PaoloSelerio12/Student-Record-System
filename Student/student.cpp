#include "student.hpp"

Student::Student() {
    m_studentName = "None";
    m_IdNum = 000000;
    m_gpa = 0.0;

}

Student::~Student() {
    std::cout << "Student object Destroyed" << std::endl;
}

/*
void Student::SetStudentName() {
    m_studentName = name;
}
void Student::SetIdNum() {
    m_IdNum = m_IdNum;
}
void Student::Setgpa() {
    m_gpa = gpa;
}

void Student::SetAge() {
    m_Age = age;
}
void Student::SetGrade() {
    m_Grade = grade;
*/

std::string Student::GetStudentName() const {
    return this->m_studentName;
}
int Student::GetIdNum() const {
    return this->m_IdNum;
}
float Student::Getgpa() const {
    return this->m_gpa;
}

int Student::GetAge() const {
    return this->m_Age;
}
int Student::GetGrade() const {
    return this->m_Grade;
}
