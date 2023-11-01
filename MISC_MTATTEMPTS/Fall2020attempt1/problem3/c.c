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

int find_grade(student* s, char* courseID){
    // If array of grades or courseID is non-existent, return -1
    if (s == NULL || courseID == NULL) return -1;
    for (int i = 0; i < s -> grades_len; i++){
        if(strcmp(s->grades[i].courseID, courseID) == 0){
            return s->grades[i].grade;
            }
    }
    return -1;
}

// ==========================================================

int add_grade(student* s, course_grade new_grade){
    // If student -> grades contains a course with this ID, do nothing
    if (s == NULL || find_grade(s, new_grade.courseID > -1)) return 0;
    // If student -> grades == NULL, create an array of length 1 and add new grade into the array
    if (s -> grades == NULL){
        s->grades = (course_grade*) malloc(sizeof(course_grade));
        if (s-> grades == NULL) return 0;
    }

    // student -> grades already exists
    else{
        s-> grades = realloc (s->grades, (s-> grades_len+1)* sizeof(course_grade));
    }

    s->grades[s->grades_len].grade = new_grade.grade;
    // Copy Grade

    // Copy CourseID
    s->grades[s->grades_len].courseID = new_grade.courseID;

    // Update length of array
    s->grades_len = s->grades_len+1;

    return 1;
}