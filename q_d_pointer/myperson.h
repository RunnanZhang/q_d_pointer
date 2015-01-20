#ifndef MY_PERSON_H
#define MY_PERSON_H

#include "yh.h"
#include "myprivatedata.h"
#include <string>

class MyPersonPrivateData;
class MyPerson
{
public:
	MyPerson();
	MyPerson(MyPrivateData *p);
	~MyPerson();

	void setName(const std::string &sName);
	std::string name() const;

	void setAge(int nAge);
	int age() const;

	void person();

protected:
	MyPrivateData * const d_ptr;

private:
	Q_DECLARE_PRIVATE(MyPerson);
};
#endif