#include "animal.h"

Animal::Animal(const std::string& name,const int& weight,const int& age)
                :
                m_name(name),m_weight(weight),m_age(age)
{
	std::cout<<__PRETTY_FUNCTION__<<std::endl;
	
}
Animal::~Animal()
{
	std::cout<<__PRETTY_FUNCTION__<<std::endl;

}

void Animal::print()
{
    std::cout<<"Name: "<<m_name<<std::endl;
    std::cout<<"Weight: "<<m_weight<<std::endl;
    std::cout<<"Age: "<<m_age<<std::endl;
}
