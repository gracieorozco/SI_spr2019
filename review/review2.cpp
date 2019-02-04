// CPSC 131 SI: Review Exercise 2
// 1. Instantiate a Student object in the heap.
// 2. Complete the functions that allow a user to populate the values
//    within the struct and displays the student object passed in.
#include <iostream>
#include <string>

struct Student {
    int cwid;
    std::string first, last;
    int num_courses;
    std::string courses[10];
};

// This function populates the fields of the student object from user
// input into the student object passed in as an argument.
Student* populate_fields(Student* x) {
    // TO BE COMPLETED
    std::cout << "Enter CWID: ";
    std::cin >> x->cwid;

    std::cout << "Enter first name: ";
    std::cin >> x->first;

    std::cout << "Enter last name: ";
    std::cin >> x->last;

    std::cout << "Enter number of courses: ";
    std::cin >> x->num_courses;

    for(int i = 0, j = 1; i < x->num_courses; i++, j++) {
      std::cout << "Input the name of course #" << j << ": ";
      std::cin >> x->courses[i];
    }
    return x;
}

// Displays the student object passed in.
void display_student(Student* x) {
    // TO BE COMPLETED
    std::cout << std::endl;
    std::cout << "CWID: " << x->cwid << std::endl;
    std::cout << "FIRST NAME: " << x->first << std::endl;
    std::cout << "LAST NAME: " << x->last << std::endl;
    std::cout << "COURSES: ";
    for (int i = 0, j = 1; i < x->num_courses; i++, j++) {
      std::cout << std::endl << "    " << j << ". " << x->courses[i];
    }
    std::cout << std::endl;

}

int main() {
    // Declare a Student object in the heap
    Student *s1 = new Student;
    populate_fields(s1);
    // Call the functions that were completed
    display_student(s1);

    return 0;
}
