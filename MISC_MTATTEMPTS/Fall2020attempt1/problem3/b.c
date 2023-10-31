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

// ==========================================================

int find_grade(student* s, char* courseID){
    if (s == NULL || courseID == NULL) return -1;
    for (int i = 0; i < s -> grades_len; i++){
        if(strcmp(s->grades[i].courseID, courseID) == 0){
            return s->grades[i].grade;
            }
    }
    return -1;
}