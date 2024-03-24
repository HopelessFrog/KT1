#include "GetList.h"


Student* GetListOfStudentsBornAfterGivenYear(Student* array, int size,int  year, int& endSize)
{
	Student* tmp_list = new Student[size];
	endSize = 0;
	for (int i = 0; i < size; i++)
		if (array[i].GetDateOfBirthDay().year > year)
		{
			tmp_list[endSize] = array[i];
			endSize++;
		}
	Student* endList = new Student[endSize];
	for (int i = 0; i < endSize; i++)
		endList[i] = tmp_list[i];

	return endList;
}

Student* GetListOfStudentsByFaculty(Student* array, int size,int faculty, int& endSize)
{
	Student* tmp_list = new Student[size];
	endSize = 0;
	for (int i = 0; i < size; i++)
		if (array[i].GetFaculty() == faculty)
		{
			tmp_list[endSize] = array[i];
			endSize++;
		}
	Student* endList = new Student[endSize];
	for (int i = 0; i < endSize; i++)
		endList[i] = tmp_list[i];

	return endList;
}

Student* GetListOfStudentsByFacultyAndCourse(Student* array, int size, int faculty,int course, int& endSize)
{
	Student* tmp_list = new Student[size];
	endSize = 0;
	for (int i = 0; i < size; i++)
		if (array[i].GetFaculty() == faculty && array[i].GetCourse() == course)
		{
			tmp_list[endSize] = array[i];
			endSize++;
		}
	Student* endList = new Student[endSize];
	for (int i = 0; i < endSize; i++)
		endList[i] = tmp_list[i];

	return endList;
}