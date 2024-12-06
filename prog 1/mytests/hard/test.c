/*
create an array of students including name age and gpa.
i want to create dynamically new students, remove them by id always working with a file that stores them
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char name[50]; // Allocate memory statically for simplicity
    int age;
    float gpa;
} Student;

void addStudent(const char *filename, int count)
{
    FILE *my_file = fopen(filename, "a");
    Student curr_student;
    curr_student.id = count++;
    printf("name: ");
    scanf(" %99s", curr_student.name);
    printf("age: ");
    scanf("%d", &curr_student.age);
    printf("gpa: ");
    scanf("%f", &curr_student.gpa);
    fprintf(my_file, "%d %s %d %.1f", curr_student.id, curr_student.name, curr_student.age, curr_student.gpa);
    fclose(my_file);
}

void removeStudent(const char *filename, int count)
{
    int selected;
    do
    {
        printf("Select an id from 0 to %d\n", count-1);
        scanf("%d", &selected);
    } while (selected > (count-1) || selected < 0);
    FILE *my_file = fopen(filename, "r");
    if (my_file == NULL)
    {
        printf("File could not be opened\n");
    }
    else
    {
        Student curr_student;
        Student tempList[count - 1];
        int index = 0;
        while (fscanf(my_file, "%d %s %d %f", &curr_student.id, curr_student.name, &curr_student.age, &curr_student.gpa) == 4)
        {
            if (curr_student.id != selected)
            {
                tempList[index] = curr_student;
                index++;
            }
        }
        fclose(my_file);

        my_file = fopen(filename, "w");
        if (my_file == NULL)
        {
            printf("File could not be opened\n");
        }
        else
        {
            for (int i = 0; i < index; i++)
            {
                fprintf(my_file, "%d %s %d %.1f\n", i, tempList[i].name, tempList[i].age, tempList[i].gpa);
            }
            fclose(my_file);

            printf("Student with id %d removed.\n", selected);
        }
    }
    return;
}

int countStudents(const char *filename)
{
    FILE *my_file = fopen(filename, "r");
    int contador = 0;
    if (my_file == NULL)
    {
        printf("File could not be opened\n");
    }
    else
    {
        Student stu;
        while (fscanf(my_file, "%d %s %d %f", &stu.id, stu.name, &stu.age, &stu.gpa) == 4)
        {
            contador++;
        }
        fclose(my_file);
    }
    return contador;
}

int main()
{
    const char *filename = "students.txt";
    addStudent(filename, countStudents(filename));
    removeStudent(filename, countStudents(filename));
    return 0;
}