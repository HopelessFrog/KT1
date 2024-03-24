
#include "CppUnitTest.h"
#include "../KT1/GetList.h"
#include "../KT1/Student.h"
#include "../KT1/GetList.cpp"
#include "../KT1/Student.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	private:

		bool listComparison(Student* list1, Student* list2, int tempSize)
		{
			for (int i = 0; i < tempSize; i++)
				if (list1[i] != list2[i])
					return false;
			return true;
		}
		const int testFaculty = 3;

		const int testCourse = 2;

		const int testYear = 2500;

		int endSize = 0;


		Student testList[3]
		{
			Student("asd", "zcxc", "wer",  bithdayDate{1,2,123}, "Moscow", "1234567890", 3, 2),
			Student("fsdf", "asd", "Idsdfewr",  bithdayDate{1,2,2000}, "Moscow", "1234567890", 6, 2),
			Student("wer", "234", "fdsfewerich",  bithdayDate{1,2,3505}, "Moscow", "1234567890", 3, 6)


		};

		Student test1TrueList[2]
		{
			Student("asd", "zcxc", "wer",  bithdayDate{1,2,123}, "Moscow", "1234567890", 3, 2),
			Student("wer", "234", "fdsfewerich",  bithdayDate{1,2,3505}, "Moscow", "1234567890", 3, 6)
		};

		Student test2TrueList[1]
		{
				Student("wer", "234", "fdsfewerich",  bithdayDate{1,2,3505}, "Moscow", "1234567890", 3, 6)
		};

		Student test3TrueList[1]
		{
			Student("asd", "zcxc", "wer",  bithdayDate{1,2,123}, "Moscow", "1234567890", 3, 2)
		};
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Student* endTestList = GetListOfStudentsByFaculty(testList, 3, testFaculty, endSize);
			Assert::IsTrue(listComparison(endTestList, test1TrueList, endSize));
		}

		TEST_METHOD(TestMethod2)
		{
			Student* endTestList = GetListOfStudentsBornAfterGivenYear(testList, 3, testYear, endSize);
			Assert::IsTrue(listComparison(endTestList, test2TrueList, endSize));
		}

		TEST_METHOD(TestMethod3)
		{
			Student* endTestList = GetListOfStudentsByFacultyAndCourse(testList, 3, testFaculty, testCourse, endSize);
			Assert::IsTrue(listComparison(endTestList, test3TrueList, endSize));
		}
	};
}
