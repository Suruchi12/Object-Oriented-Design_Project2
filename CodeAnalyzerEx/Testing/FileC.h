#pragma once
#include "FileD.h"
#include "FileA.h"

struct thisStruct
{

};
void xyz() 
{

}
namespace Test3 
{
	void x() {}
	class FileC 
	{
	public:
		void display3();
	private:
		Test1::FileA a;
		FileD d;
		
	};

	void FileC::display3()
	{
		a.display1();
		d.display4();
		std::cout << "\nInside File C that contains display3 function\n";
	}

}
 