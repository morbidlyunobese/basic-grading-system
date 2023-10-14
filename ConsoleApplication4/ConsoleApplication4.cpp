#include <iostream>
#include <string>

// Student Grading System

int main() {

    // variables
    int students;
    char grade = ' ';
    std::string subject;

    // arrays
    std::string subjects[4] = { " Math", "Science", " History", "Enlish" };
    char grades[5] = { 'A', 'B', 'C', 'D', 'F' };
    std::string* pStudents = NULL;

    std::cout << "How many students are there: ";
    std::cin >> students;
    std::cout << '\n';

    std::cout << "Subject?: ";
    std::cin >> subject;
    std::cout << '\n';

    pStudents = new std::string[students];


    // checking if student count is less than 20
    if (students < 10) {
        // indexing array for individual students
        for (int i = 0; i < students; i++) {

            std::cout << "Enter student #" << i + 1 << ": ";
            std::cin >> pStudents[i];

        }

        // grading individual students
        for (int i = 0; i < students; i++) {

            std::cout << "Enter student " << pStudents[i] << "'s grade: ";
            std::cin >> grade;
            grade = toupper(grade);

            if (grade == grades[i]) {

                std::cout << "Student: " << pStudents[i] << " has been given the grade: " << "'" << grade << "'";
                std::cout << '\n';
            }
            else if(!grade) {
                std::cout << "Invalid grade.";
            }
        }
    }
    else {
        std::cout << "Too many students.";
    }

    // deleting all allocated memory
    delete[] pStudents;

}
