#include "student.h"
#ifndef ART_STUDENT_H
#define ART_STUDENT_H


class Art_Student : public Student {
	private:
		std::string art_details;

	public:
		Art_Student();
		~Art_Student();

		void setArtdetails(const std::string &art_details);
		std::string getArtdetails() const;

		void printInfo(std::ostream &out) const override;

};

	#endif





