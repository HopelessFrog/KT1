#include <iostream>

#include "GetList.h"
#include "Input.h"
#include "Menu.h"
#include "Output.h"
#include "Student.h"


enum class Type
{
	Console = 1,
	File
};


enum class MenuItems
{
	Input = 1,
	GetList,
	Exit
};

enum class ListType
{
	ByFaculty = 1,
	ByFacultyAndCourse,
	ByYear,
	None
};

enum class Answer
{
	Yes = 1,
	No
};


int main()
{
	std::cout << "v1 kr 1" << std::endl;
	Student* array = nullptr;
	int count = 0;

	while (true)
	{
		auto item = static_cast<MenuItems>(AscUserMenu());

		switch (item)
		{
		case MenuItems::Input:
			{
				auto type = static_cast<Type>(AscUserInputType());
				switch (type)
				{
				case Type::Console:
					std::cout << "Enter students count. " << std::endl;
					count = CheckIntValue();
					array = ConsoleInput(count);
					break;
				case Type::File:
					array = FileInput();
					count = sizeof(*array) / sizeof(array[0]);
					std::cin.clear();
					std::cin.ignore(30000, '\n');
				}

				if (type == Type::Console)
				{
					auto initialDataVar = static_cast<Answer>(AscInitialDataSaveMenu());
					if (initialDataVar == Answer::Yes)
						InitialFileOutput(array, count);
				}
				break;
			}
		case MenuItems::GetList:
			{
				int endSize = 0;
				std::string listType = "";
				Student* endList = nullptr;

				if (count == 0)
				{
					std::cout << "Create some students first." << std::endl;
					break;
				}
				auto var = static_cast<ListType>(AscListTypeMenu());

				switch (var)
				{
				case ListType::ByFaculty:
					{
						std::cout << "Enter faculty." << std::endl;
						int faculty = CheckIntValue();
						listType = "Students of faculty number " + std::to_string(faculty) + "\n";
						endList = GetListOfStudentsByFaculty(array, count, faculty, endSize);
					}
					break;
				case ListType::ByFacultyAndCourse:
					{
						std::cout << "Enter course." << std::endl;
						int course = CheckIntValue();
						std::cout << "Enter faculty." << std::endl;
						int facultyTemp = CheckIntValue();

						listType = "Students of faculty number " + std::to_string(facultyTemp) + "and course number " +
							std::to_string(course) + "\n";

						endList = GetListOfStudentsByFacultyAndCourse(array, count, facultyTemp, course, endSize);
					}
					break;

				case ListType::ByYear:
					{
						std::cout << "Enter year." << std::endl;
						int year = CheckIntValue();
						listType = "Students born after  " + std::to_string(year) + " year" + "\n";

						endList = GetListOfStudentsBornAfterGivenYear(array, count, year, endSize);
					}
					break;
				case  ListType::None:
					continue;


				
					break;
				}
				auto outputVar = static_cast<Type>(AscOutputType());


				switch (outputVar)
				{
				case Type::Console:
					if (endSize == 0)
					{
						std::cout << "No one  student :";
						
					}
					ConsoleOutput(array, listType, endSize);
					break;
				case Type::File:
					if (endSize == 0)
					{
						std::cout << "No one  student satisfying the condition" << std::endl;
						break;
					}
					FileOutput(array, listType, endSize);
					break;
				}


				delete[] endList;

			}
			break;
		case MenuItems::Exit:
			delete[] array;
			return 0;
		}
	}
}
