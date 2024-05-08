#ifndef _TERESTRIALS_
#define _TERESTRIALS_

#include <iostream>
#include "animal.h"

class Terrestrials : public virtual Animal
{
public:
Terrestrials(const std::string&,const int&,const int&,const int&);

~Terrestrials();

public:
void print() override;

private:
bool m_lungs = true;

protected:
int m_legs = 0;

};

#endif //_TERESTRIALS_
