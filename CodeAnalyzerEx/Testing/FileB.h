#pragma once

#include <iostream>
#include "FileC.h"
typedef int abc;

class FileB {
public:
	void display2();
private:
	Test3::FileC c;

};

void FileB::display2() {
	std::cout << "\nInside File B show Function\n";
	c.display3();
}


