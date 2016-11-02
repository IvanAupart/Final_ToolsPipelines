
#include "Student.h"

Student::Student(std::string nm, std::string no) : name(nm), number(no)
{
	no_of_courses = 0;
}

std::string Student::getStuName() { return name; }

std::string Student::getStuNumber() { return number; }

void Student::assignGrade(std::string co, int gr)
{
	if (no_of_courses == MAXIMUM)
	{
		std::cout << "YOU HAVE EXCEDED THE MAXIMUN NUMBER OF COURSES" << std::endl;
		return;
	}

	Course c(co, gr);
	course_grade[no_of_courses++] = c;
}

	int Student::getGrade(std::string co)
	{
		int i = 0;

		while (i < no_of_courses)
		{
			if (course_grade[i].getCourseName() == co)
				return (course_grade[i].getCourseGrade());
				i++;
		}
		return(-1);
	}

	float Student::findAverageGrade()
	{
		int i = 0;
		float sum = 0.0;

		while(i < no_of_courses)
		{
			sum += course_grade[i].getCourseGrade();
			++i;
		}

		return (sum / no_of_courses);
	}


