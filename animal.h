#ifndef _ANIMAL_
#define _ANIMAL_

#include <iostream>

class Animal
{
public:
Animal(const std::string&,const int&,const int&);
virtual ~Animal();

Animal(const Animal&);

public:
virtual void print();
int getCount() const;

protected:
std::string m_name;
int m_weight = 0;
int m_age = 0;

private:
static int count;

};

#endif //_ANIMAL_
