#include "animal.h"

int Animal::count = 0;

Animal::Animal(const std::string& name,const int& weight,const int& age)
                :
                m_name(name),m_weight(weight),m_age(age)
{
	std::cout<<__PRETTY_FUNCTION__<<std::endl;
    ++count;
	
}
Animal::~Animal()
{
	std::cout<<__PRETTY_FUNCTION__<<std::endl;
    --count;

}

Animal::Animal(const Animal& obj)
{
    m_name = obj.m_name;
    m_age = obj.m_age;
    m_weight = obj.m_weight;
}

int Animal::getCount() const
{
    return count;
}

void Animal::print()
{
    std::cout<<"Name: "<<m_name<<std::endl;
    std::cout<<"Weight: "<<m_weight<<std::endl;
    std::cout<<"Age: "<<m_age<<std::endl;
}
