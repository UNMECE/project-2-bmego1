#include <string>
#ifndef STUDENT_H
#define STDUENT_H


class Student {
	protected:
		std::string first_name;
		std::string last_name;
		double gpa;
		int graduation_year;
		std::string graduation_semester;
		int enrolled_year;
		std::string enrolled_semester;
		std::string grad_level;


	public:
		Student();
		virtual ~Student();

		void setName();
		void setGPA();
		void setGraduation();
		void setEnrollment();
		void setGradLevel();

		std::string getName() const;
		double getGPA() const;
		int getGraduationYear() const;
		std::string getGraduationSemester() const;
		int getEnrolledYear() const;
		std::string getEnrolledSemester() const;
		std::string getGradLevel() const;

		virtual void printInfo(std::ostream &out) const;
};

	#endif



