#ifndef  TEST_STUDENT_H
#define TEST_STUDENT_H

#include <cppunit\extensions\HelperMacros.h>

class StudentTest : public CPPUNIT_NS::TestFixture
{
	CPPUNIT_TEST_SUITE(StudentTest);
	CPPUNIT_TEST(TestConstructor);
	CPPUNIT_TEST(AssignAndRetrieveGrades);
	CPPUNIT_TEST(FindAverageGrade);
	CPPUNIT_TEST_SUITE_END();
	

public:
	void SetUp();
	void TearDown();
	void TestConstructor();
	void AssignAndRetrieveGrades();
	void FindAverageGrade();

};
#endif // ! TEST_STUDENT_H
