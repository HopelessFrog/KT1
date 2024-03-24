#include "Output.h"

void FileOutput(Student* array, std::string var, int endSize)
{
	std::ofstream fileRecorder = CheckFileOutput();

	fileRecorder << var << std::endl;

	for (int i = 0; i < endSize; i++)
	{
		fileRecorder << "Student #" << i + 1 << std::endl;

		fileRecorder << "Surname is " + array[i].GetSurname() << std::endl;

		fileRecorder << "Name is " + array[i].GetName() << std::endl;

		fileRecorder << "Patronymic is " + array[i].GetPatronymic() << std::endl;

		fileRecorder << "Date of birth is " + std::to_string(array[i].GetDateOfBirthDay().day) + "." + std::to_string(array[i].GetDateOfBirthDay().month) + "." + std::to_string(array[i].GetDateOfBirthDay().year) << std::endl;

		fileRecorder << "Address is " + array[i].GetAddress() << std::endl;

		fileRecorder << "Phone is " + array[i].GetPhone() << std::endl;

		fileRecorder << "Faculty is " + std::to_string(array[i].GetFaculty())  << std::endl;

		fileRecorder << "Course is " + std::to_string(array[i].GetCourse()) << std::endl;

	}

	std::cout << "File saved successfully!!!" << std::endl;;

	fileRecorder.close();
}


void InitialFileOutput(Student* array, int size)
{
	std::ofstream fileRecorder = CheckFileOutput();
	fileRecorder << size << std::endl;
	for (int i = 0; i < size; i++)
	{
		fileRecorder << array[i].GetSurname() << std::endl;
		fileRecorder << array[i].GetName() << std::endl;
		fileRecorder << array[i].GetPatronymic() << std::endl;
		fileRecorder << array[i].GetDateOfBirthDay().day << std::endl;
		fileRecorder << array[i].GetDateOfBirthDay().month << std::endl;
		fileRecorder << array[i].GetDateOfBirthDay().year << std::endl;
		fileRecorder << array[i].GetAddress() << std::endl;
		fileRecorder << array[i].GetPhone() << std::endl;
		fileRecorder << array[i].GetFaculty() << std::endl;
		fileRecorder << array[i].GetCourse() << std::endl;

	}
	std::cout << "File saved successfully!!!" << std::endl;;

}

void ConsoleOutput(Student* array, std::string var, int endSize)
{

	std::cout << var;
	for (int i = 0; i < endSize; i++)
	{
		std::cout << "Student #" << i + 1 << std::endl;

		std::cout << "Surname is " + array[i].GetSurname() << std::endl;

		std::cout << "Name is " + array[i].GetName() << std::endl;

		std::cout << "Patronymic is " + array[i].GetPatronymic() << std::endl;

		std::cout << "Date of birth is " + std::to_string(array[i].GetDateOfBirthDay().day) + "." + std::to_string(array[i].GetDateOfBirthDay().month) + "." + std::to_string(array[i].GetDateOfBirthDay().year) << std::endl;

		std::cout << "Address is " + array[i].GetAddress() << std::endl;

		std::cout << "Phone is " + array[i].GetPhone() << std::endl;

		std::cout << "Faculty is " + std::to_string(array[i].GetFaculty()) << std::endl;

		std::cout << "Course is " + std::to_string(array[i].GetCourse()) << std::endl;
	}
}