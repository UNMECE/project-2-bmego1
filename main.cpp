#include <iostream>
#include <vector>
#include <fstream>
#include "art_student.h"
#include "physics_student.h"
#include <string>


int main() {
	std::vector<Art_Student*> art_students;
	std::vector<Physics_Student*> physics_students;

	for(int i=0; i<5; ++i) {
		Art_Student* a = new Art_Student();
		a -> setName("First Name" + std::to_string(i), "Last Name" + std::to_string(i));
		a -> setGPA(3.5 + i * 0.1);
		a -> setArtDetails("Art History");
		a -> setGraduation(2026, "Spring");
		a -> setEnrollment(2022, "Fall");
		a -> setGradLevel("Undergraduate");
		art_students.push_back(a);
	
	}



	for(int i=0; i<5; ++i) {
		Physics_Student* p = new Physics_Student();
    	p -> setName("First Name" + std::to_string(i), "Last Name" + std::to    _string(i));
    	p -> setGPA(3.3 + i * 0.15);
    	p -> setTopicofFocus("Astrophysics");
    	p -> setGraduation(2027, "Spring");
		p -> setEnrollment(2023, "Spring");
		p -> setGradLevel("Graduate");
    	physics_students.push_back(p);
	}	

	std::ofstream outfile("student_info_file.dat");
		for(size_t i=0; i<art_students.size(); ++i) {
			art_students[i] -> printInfo(outfile);
		}
		
		for(size_t i=0; i<art_students.size(); ++i) {
        	delete art_students[i];
        }


		for(size_t i=0; i<physics_students.size(); ++i) {
			physics_students[i] -> printInfo(outfile);
        }

		for(size_t i=0; i<physics_students.size(); ++i) {
			delete physics_students[i];
		}


	outfile.close();

	return 0;
}

