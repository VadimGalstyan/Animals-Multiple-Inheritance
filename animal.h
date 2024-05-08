#ifndef _ANIMAL_
#define _ANIMAL_

#include <iostream>

class Animal
{
public:
Animal(const std::string&,const int&,const int&);
virtual ~Animal();

public:
virtual void print();

protected:
std::string m_name;
int m_weight = 0;
int m_age = 0;

};

#endif //_ANIMAL_
