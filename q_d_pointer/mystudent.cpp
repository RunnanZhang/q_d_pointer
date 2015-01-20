#include "mystudent.h"
#include "mystudent_h.h"

MyStudentPrivateData::~MyStudentPrivateData()
{

}

MyStudent::MyStudent() : MyPerson(new MyStudentPrivateData)
{

}

MyStudent::~MyStudent()
{

}

void MyStudent::setID(int nID)
{
	//Q_D(MyStudent);
	//d->m_nID = nID;
	(reinterpret_cast<MyStudentPrivateData *>(d_ptr))->m_nID = nID;
}

int MyStudent::id() const
{
	Q_D(const MyStudent);
	return d->m_nID;
}