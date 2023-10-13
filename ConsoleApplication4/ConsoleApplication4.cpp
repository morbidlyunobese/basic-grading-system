#include <iostream>
#include <string>

// Student Grading Program

void gradeSubject(char grades[], int size, std::string subject)
{
	char grade;

	std::cout << "Enter grade: ";
	std::cin >> grade;
	grade = toupper(grade);

	for (int i = 0; i < size; i++) {

		if (grade == grades[i]) {
			std::cout << subject << " has been graded as: " << grade;
			std::cout << '\n';
			break;
		}
		else {
			std::cout << "Invalid grade.";
			break;
		}
	}
	
}

int main() {

	std::string studentName;
	std::string* pName = &studentName;

	std::string subjects[4] = { "Math", "Science", "English", "History" };
	int size = sizeof(subjects) / sizeof(subjects[0]);
	std::string subject;

	char grades[5] = { 'A','B','C','D','F' };
	int allGrades = sizeof(grades) / sizeof(grades[0]);

	std::cout << "Enter the student's first and last name: ";
	std::getline(std::cin, *pName);
	std::cout << '\n';

	std::cout << "Subjects: ";

	for (int i = 0; i < size; i++) {
		std::cout << subjects[i] << " ";
	}

	std::cout << '\n';

	std::cout << "Enter the subject do you want to grade: ";
	std::getline(std::cin, subject);

	gradeSubject(grades, size, subject);

}