#include "Menu.h"
#include "Menu.h"

int AscUserMenu()
{
	int variant;
	std::cout << " 1 - Input" << std::endl
		<< " 2 - Get list" << std::endl
		<< " 3 - Exit " << std::endl;
	variant = CheckMenuItem(3);
	return variant;
}

int AscListTypeMenu()
{
	int variant;
	std::cout << "Which list do you want to get? : " << std::endl
		<< " 1 - By faculty" << std::endl
		<< " 2 - By faculty and curse " << std::endl
		<< " 3 - Students born after give year  " << std::endl
		<< " 4 - Get back" << std::endl;
	variant = CheckMenuItem(4);
	return variant;
}

int AscUserInputType()
{
	int variant;
	std::cout << "Enter 1 for manual input " << std::endl
		<< "Enter 2 for file input " << std::endl;
	variant = CheckMenuItem(2);
	return variant;
}

int AscOutputType()
{
	int variant;
	std::cout << "Enter 1 for console output " << std::endl
		<< "Enter 2 for file output " << std::endl;
	variant = CheckMenuItem(2);
	return variant;
}

int AscOutputMenu()
{
	int variant;
	std::cout << "Enter 1 for overwriting an existing file " << std::endl
		<< "Enter 2 for creating a new file" << std::endl;
	variant = CheckMenuItem(2);
	return variant;
}

int AscInitialDataSaveMenu()
{
	int variant;
	std::cout << "1 - Yes" << std::endl
		<< "2 - No " << std::endl;
	variant = CheckMenuItem(2);
	return variant;
}
