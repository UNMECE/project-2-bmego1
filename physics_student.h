#include "student.h"
#ifndef PHYSICS_STUDENT_H
#define PHYSICS_STUDENT_H


class Physics_Student : public Student {
	private:
		std::string topic_of_focus;


	public:
		Physics_Student();
		~Physics_Student();

		void setTopicofFocus(const std::string &topic_of_focus);
		std::string getTopicofFocus() const;

		void printInfo(std::ostream &out) const override;

};

	#endif


