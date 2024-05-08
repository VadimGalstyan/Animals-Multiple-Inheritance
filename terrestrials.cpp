#include "terrestrials.h"

Terrestrials::Terrestrials(const std::string& name,const int& age,const int& legs,const int& weight)
             :
             Animal(name,weight,age),m_legs(legs)
{
   	std::cout<<__PRETTY_FUNCTION__<<std::endl;

}

Terrestrials::~Terrestrials()
{
	std::cout<<__PRETTY_FUNCTION__<<std::endl;
}

void Terrestrials::print()
{
   std::cout<<"Name: "<<m_name<<std::endl;
   std::cout<<"Legs: "<<m_legs<<std::endl;
   std::cout<<"Age: "<<m_age<<std::endl;
   std::cout<<"Has "<<m_legs<<" legs."<<std::endl;
   std::cout<<"Breathing using lungs."<<std::endl;
}
