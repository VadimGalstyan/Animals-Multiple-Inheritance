#ifndef _AMPHIBIANS_
#define _AMPHIBIANS_

#include "terrestrials.h"
#include "aquatic.h"
#include <iostream>

class Amphibians : public Aquatic,public Terrestrials
{
public:
    Amphibians(const std::string&,const int&,const int&,const int&);
    ~Amphibians();

public:
void print() override;

public:
bool m_slimySkin = true;

};

#endif //_AMPHIBIANS_
