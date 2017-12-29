#pragma once

#include "FileB.h"
#include "FileC.h"
#include <iostream>



struct  myStruct
{
	
};
void abc() {}
namespace Test1 {
	void def() {}
	class FileA {
	public:
		void display1();
	private:
		FileB file2;
		Test3::FileC a;
	};

	void FileA::display1() {
		std::cout << "\nInside display Function of FileA\n";
		file2.display2();
	}
}
