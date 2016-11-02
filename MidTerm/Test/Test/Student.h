#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "Course.h"

const int MAXIMUM = 20;

class Student
{
public:
	Student(std::string nm, std::string no);

	std::string getStuName();

	std::string getStuNumber();

	void assignGrade(std::string co, int gr);

	int getGrade(std::string co);

	float findAverageGrade();

private:
	std::string name;
	std::string number;
	Course course_grade[MAXIMUM];
	int no_of_courses;
};

#endif