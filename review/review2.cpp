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
    cout << "Input the CWID: ";
    cin >> x->cwid;

    return x;
}

// Displays the student object passed in.
void display_student(Student* x) {
    // TO BE COMPLETED
    std::cout << "Int: " << x->cwid << std::endl;
  /*  std::cout << "First Name: " << x->first << std::endl;
    std::cout << "Last Name: " << x->last << std::endl;
    std::cout << "Number of Courses: " << x->num_courses << std::endl;
    for (int i = 0; i < x->num_courses; i++) {
      cout << x->courses[i] << ", ";
    }
    std::cout << std::endl;
    */
}

int main() {
    // Declare a Student object in the heap
    Student *s1 = new Student;
    popukate_fields
    // Call the functions that were completed
    display_student(s1);

    return 0;
}
