#include "myperson.h"
#include "mystudent.h"
#include <iostream>

int main(int argc, char *argv[])
{
	MyPerson men;
	men.setName("John");
	men.setAge(21);

	std::cout << men.name() << std::endl;
	std::cout << men.age() << std::endl;

	MyStudent student;
	student.setID(10002);
	student.setName("Mike");

	std::cout << student.id() << std::endl;
	std::cout << student.name() << std::endl;

	//men.person();
	system("pause");
}