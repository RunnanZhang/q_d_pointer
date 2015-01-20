#ifndef MY_STUDENT_H
#define MY_STUDENT_H

#include "myperson.h"

class MyStudentPrivateData;
class MyStudent : public MyPerson
{
public:
	MyStudent();
	~MyStudent();

	void setID(int nID);
	int id() const;

//protected:
//	MyStudentPrivateData * const dd_ptr;

private:
	Q_DECLARE_PRIVATE(MyStudent);
};
#endif