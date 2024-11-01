/*
Problem Statement: Create a program to manage a list of students. 
Each student has a name, an ID number, and a dynamic array of grades. 

The program should provide functionalities to:
Add a new student.
Remove a student by their ID.
Add a grade to a student.
Calculate the average grade for a student.
Print the list of students with their details and average grades.
Free all dynamically allocated memory before exiting the program.

*/
#include <stdio.h>
#include <stdlib.h>
typedef struct 
{
   char name[50];
   int id;
   int grade;
}Student;

addNewStudent(Student **students, int *count, char *name, int id){
    *students = realloc(*students, (*count + 1) * sizeof(Student));
    (*students)[*count].name

}









int main(){
    Student *arrStudents = NULL;
    int studentCount = 0;

return 0;
}



