#include <cppunit\config\SourcePrefix.h>
#include "Student.h"
#include "TestStudent.h"

#include <iostream>
#include <string>

void 
StudentTest::SetUp()
{
}

void
StudentTest::TearDown()
{
}

CPPUNIT_TEST_SUITE_REGISTRATION(StudentTest);

void StudentTest::TestConstructor()
{
	Student stu("Ivan Aupart", "374718");

	std::string student_name = stu.getStuName();
	CPPUNIT_ASSERT(student_name == "Ivan Aupart");

	std::string student_number = stu.getStuNumber();
	CPPUNIT_ASSERT(student_number == "374718");

	return;
}

void StudentTest::AssignAndRetrieveGrades()
{
	Student stu1("Bill Gates", "0000001");
	stu1.assignGrade("BEING RICH", 100);
	int grade = stu1.getGrade("BEING RICH");
	CPPUNIT_ASSERT(grade == 100);

	Student stu2("Mark Zuckerberg", "0000006");
	stu2.assignGrade("BEING RICH", 80);
	int grade2 = stu2.getGrade("BEING RICH");
	CPPUNIT_ASSERT(grade2 == 80);

	Student stu3("Carlos Slim Helu", "0000004");
	stu3.assignGrade("BEING RICH", 90);
	int grade3 = stu3.getGrade("BEING RICH");
	CPPUNIT_ASSERT(grade3 == 90);

	return;
}

void StudentTest::FindAverageGrade()
{
	Student stu("Jimmy Neutron", "01010101");

	stu.assignGrade("SCIENCE", 50);
	stu.assignGrade("MATH", 70);
	stu.assignGrade("ROBOT CONSTRUCTION", 70);
	stu.assignGrade("PICK UP CLASS", 100);

	CPPUNIT_ASSERT_EQUAL((float)75, stu.findAverageGrade());
}




