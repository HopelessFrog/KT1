#include "Input.h"

Student* ConsoleInput(int count)
{
	std::string _surname;
	std::string _name;
	std::string _patronymic;
	bithdayDate _dateOfBirth;
	std::string _address;
	std::string _phone;
	int _faculty;
	int _course;
	Student* array = new Student[count];

	for (int i = 0; i < count; i++)
	{
		std::cout << "Enter surname(#" + std::to_string(i + 1) + ")." << std::endl << "ENTER: ";
		std::getline(std::cin, _surname);

		std::cout << "Enter name(#" + std::to_string(i + 1) + ")." << std::endl;
		std::getline(std::cin, _name);

		std::cout << "Enter patronymic;(#" + std::to_string(i + 1) + ")." << std::endl;
		std::getline(std::cin, _patronymic);

		std::cout << "Enter date of birth;(#" + std::to_string(i + 1) + ")." << std::endl;
		std::cout << "Enter day:" << std::endl;
		_dateOfBirth.day = CheckIntValue();
		std::cout << "Enter month:" << std::endl;
		_dateOfBirth.month = CheckIntValue();
		std::cout << "Enter year:" << std::endl;
		_dateOfBirth.year = CheckIntValue();



		std::cout << "Enter address(#" + std::to_string(i + 1) + ")." << std::endl;
		std::getline(std::cin, _address);

		std::cout << "Enter phone(#" + std::to_string(i + 1) + ")." << std::endl;
		std::getline(std::cin, _phone);

		std::cout << "Enter faculty(#" + std::to_string(i + 1) + ")." << std::endl;
		_faculty = CheckIntValue();

		std::cout << "Enter course(#" + std::to_string(i + 1) + ")." << std::endl;
		_course = CheckIntValue();
		std::cout << "Correct data entered(#" << i + 1 << ")!" << std::endl;

		array[i].Set(_surname, _name, _patronymic, _dateOfBirth, _address, _phone, _faculty, _course);
	}
	return array;
}

Student* FileInput()
{
	std::string fileName = "";
	std::ifstream file;
	int count = 0;

	file.exceptions(std::ifstream::badbit | std::ifstream::failbit);
	while (true)
	{
		std::cout << "Enter file name. " << std::endl << "ENTER : ";
		std::cin >> fileName;
		try
		{
			file.open(fileName);
			std::cout << "Sucefull file open " << std::endl;
		}
		catch (const std::exception)
		{
			std::cout << "Eror.Try again ." << std::endl;
			continue;

		}

		std::string _surname;
		std::string _name;
		std::string _patronymic;
		bithdayDate _dateOfBirth;
		_dateOfBirth.day = 0;
		_dateOfBirth.month = 0;
		_dateOfBirth.year = 0;
		std::string _address;
		std::string _phone;
		int _faculty;
		int _course;
		Student* array;

		try
		{
			count = CheckLineInt(file);
			array = new Student[count];
			for (int i = 0; i < count; i++)
			{
				_surname = CheckLineString(file);
				_name = CheckLineString(file);;
				_patronymic = CheckLineString(file);
				_dateOfBirth.day = CheckLineInt(file);
				_dateOfBirth.month = CheckLineInt(file);
				_dateOfBirth.year = CheckLineInt(file);
				_address = CheckLineString(file);
				_phone = CheckLineString(file);
				_faculty = CheckLineInt(file);
				_course = CheckLineInt(file);


				array[i].Set(_surname, _name, _patronymic, _dateOfBirth, _address, _phone, _faculty, _course);

			}
		}
		catch (std::invalid_argument iaex)
		{
			file.close();
			continue;
		}

		file.close();
		return array;

	}
}