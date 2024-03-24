#include "Student.h"

#include <string>

std::string Student::GetAddress() const
{
	return address;
}

int Student::GetCourse() const
{
	return course;
}

bithdayDate Student::GetDateOfBirthDay() const
{
	return dateOfBirth;
}

int Student::GetFaculty() const
{
	return faculty;
}

std::string Student::GetName() const
{
	return name;
}


std::string Student::GetPatronymic() const
{
	return patronymic;
}

std::string Student::GetPhone() const
{
	return phone;
}

std::string Student::GetSurname() const
{
	return surname;
}

void Student::SetCourse(int value)
{
	if (course != value)
		course = value;
}

void Student::SetDayOfBirth(bithdayDate value)
{
	dateOfBirth = value;
}

void Student::SetFaculty(int value)
{
	if (faculty != value)
		faculty = value;
}

void Student::SetName(std::string value)
{
	if (name != value)
		name = value;
}

void Student::SetAddress(std::string value)
{
	if (address != value)
		address = value;
}

void Student::SetSurname(std::string value)
{
	if (surname != value)
		surname = value;
}

void Student::SetPatronymic(std::string value)
{
	if (patronymic != value)
		patronymic = value;
}

void Student::SetPhone(std::string value)
{
	if (value != phone)
		phone = value;
}

void Student::Show() const
{
	std::cout << "Surname: " << surname << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Patronymic: " << patronymic << std::endl;
	std::cout << "Date of Birth: " << dateOfBirth.day + "." + std::to_string(dateOfBirth.month) + "." +
		std::to_string(dateOfBirth.year) << std::endl;
	std::cout << "Address: " << address << std::endl;
	std::cout << "Phone: " << phone << std::endl;
	std::cout << "Faculty: " << faculty << std::endl;
	std::cout << "Course: " << course << std::endl;
	std::cout << std::endl;
}

bool Student::operator==(const Student& other)
{
	return surname == other.surname && name == other.name && patronymic == other.patronymic && phone == other.phone &&
		dateOfBirth.day == other.dateOfBirth.day && dateOfBirth.month == other.dateOfBirth.month && dateOfBirth.year
		== other.dateOfBirth.year, faculty == other.faculty, course == other.course;
}

bool Student::operator!=(const Student& other)
{
	return !(*this == other);
}
