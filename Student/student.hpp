#pragma once
#include <iostream>

class Student {

public:

Student();
virtual ~Student();

void SetStudentName();
void SetIdNum();
void Setgpa();
void SetAge();
void SetGrade();

void print();

std::string GetStudentName() const;
int GetIdNum() const;
float Getgpa() const;
int GetAge() const;
int GetGrade() const;

private:
std::string m_studentName;
int m_IdNum;
float m_gpa;
int m_Age;
int m_Grade;

};