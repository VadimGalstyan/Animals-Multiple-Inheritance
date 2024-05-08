#ifndef _AQUATIC_
#define _AQUATIC_

#include <iostream>
#include "animal.h"

class Aquatic : public virtual Animal
{
public:
Aquatic(const std::string&,const int&,const int&);
~Aquatic();

public:
void print() override;

private:
bool m_grill = true;

};


#endif //_AQUATIC_
