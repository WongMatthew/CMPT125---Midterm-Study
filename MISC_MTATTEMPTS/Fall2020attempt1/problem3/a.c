#include <stdio.h>

typedef struct{
    char* courseID;
    int grade;
} course_grade;

typedef struct{
    unsigned int ID;
    char* name;
    course_grade* grades;
    unsigned int grades_len;
} student;

student* create_student(int id, char* name){
    student* new_student = (student*) malloc(sizeof(new_student));
    if (new_student == NULL) return NULL;

    new_student -> ID = id;
    new_student -> name = name;
    new_student -> grades = NULL;
    new_student -> grades_len = 0;

    return new_student;
}