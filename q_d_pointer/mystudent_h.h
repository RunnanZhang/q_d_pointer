#include "myperson_h.h"
class MyStudentPrivateData : public MyPersonPrivateData
{
public:
	virtual ~MyStudentPrivateData();
	int m_nID;
};
