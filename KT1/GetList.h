#pragma once
#include <xstring>

#include "Student.h"


Student* GetListOfStudentsBornAfterGivenYear(Student* array, int size, int year, int& endSize);

Student* GetListOfStudentsByFaculty(Student* array, int size, int faculty, int& endSize);

Student* GetListOfStudentsByFacultyAndCourse(Student* array, int size, int faculty, int course, int& endSize);