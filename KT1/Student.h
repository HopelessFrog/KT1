#pragma once
#include <iostream>
#include <ostream>
#include <xstring>


struct bithdayDate
{
	int day;
	int month;
	int year;
};

class Student
{
private:
	std::string surname;
	std::string name;
	std::string patronymic;
	bithdayDate dateOfBirth;
	std::string address;
	std::string phone;
	int faculty;
	int course;

public:

	Student()
	{
		surname = "";
		name = "";
		patronymic = "";
		dateOfBirth.day = 0;
		dateOfBirth.month = 0;
		dateOfBirth.year = 0;
		address = "";
		phone = "";
		faculty = 0;
		course = 0;
	}

	Student(const std::string& _surname, const std::string& _name, const std::string& _patronymic,
		bithdayDate _dateOfBirth,
		const std::string& _address, const std::string& _phone, int _faculty, int _course)
	{
		surname = _surname;
		name = _name;
		patronymic = _patronymic;
		dateOfBirth = _dateOfBirth;
		address = _address;
		phone = _phone;
		faculty = _faculty;
		course = _course;
	}


	void Set(const std::string& _surname, const std::string& _name, const std::string& _patronymic,
	         bithdayDate _dateOfBirth,
	         const std::string& _address, const std::string& _phone, int _faculty, int _course)
	{
		surname = _surname;
		name = _name;
		patronymic = _patronymic;
		dateOfBirth = _dateOfBirth;
		address = _address;
		phone = _phone;
		faculty = _faculty;
		course = _course;
	}

	std::string GetName() const;

	std::string GetPatronymic() const;


	std::string GetSurname() const;

	int GetFaculty() const;

	int GetCourse() const;

	std::string GetPhone() const;

	bithdayDate GetDateOfBirthDay() const;

	std::string GetAddress() const;

	void SetName(std::string value);
	void SetSurname(std::string value);
	void SetPatronymic(std::string value);
	void SetDayOfBirth(bithdayDate value);
	void SetAddress(std::string value);
	void SetPhone(std::string value);
	void SetFaculty(int value);
	void SetCourse(int value);


	void Show() const;


	bool operator == (const Student& other);
	bool operator !=(const Student& other);
	
};
