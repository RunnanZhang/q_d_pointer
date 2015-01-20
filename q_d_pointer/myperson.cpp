#include "myperson.h"
#include "myperson_h.h"
#include <iostream>

MyPersonPrivateData::~MyPersonPrivateData()
{

}

MyPerson::MyPerson() : d_ptr(new MyPersonPrivateData)
{

}

MyPerson::MyPerson(MyPrivateData *p) : d_ptr(p)
{

}

MyPerson::~MyPerson()
{

}

void MyPerson::setName(const std::string &sName)
{
	Q_D(MyPerson); 
	d->m_sName = sName;
	//(reinterpret_cast<MyPersonPrivateData *>(d_ptr))->m_sName = sName;
}

std::string MyPerson::name() const
{
	Q_D(const MyPerson); 
	return d->m_sName;
	//return (reinterpret_cast<MyPersonPrivateData *>(d_ptr))->m_sName;
}

void MyPerson::setAge(int nAge)
{
	Q_D(MyPerson); 
	d->m_nAge = nAge;
	//(reinterpret_cast<MyPersonPrivateData *>(d_ptr))->m_nAge = nAge;
}

int MyPerson::age() const
{
	Q_D(const MyPerson); 
	return d->m_nAge;
	//return (reinterpret_cast<MyPersonPrivateData *>(d_ptr))->m_nAge;
}

void MyPerson::person()
{
	//Q_D(MyPerson);
	//d->foo();
}