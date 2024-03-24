#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "CheckFile.h"
#include "Student.h"
void FileOutput(Student* array, std::string var, int endSize);
void ConsoleOutput(Student* array, std::string var, int endSize);
void InitialFileOutput(Student* array, int size);