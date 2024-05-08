#include "amphibians.h"
Amphibians::Amphibians(const std::string& name,const int& age,const int& weight,const int& legs)
                       : 
                       Terrestrials(name,age,weight,legs),Aquatic(name,age,weight),Animal(name,weight,age)

{
	std::cout<<__PRETTY_FUNCTION__<<std::endl;
}

Amphibians::~Amphibians()
{
	std::cout<<__PRETTY_FUNCTION__<<std::endl;
}

void Amphibians::print()
{
   std::cout<<"Name: "<<m_name<<std::endl;
   std::cout<<"Legs: "<<m_legs<<std::endl;
   std::cout<<"Age: "<<m_age<<std::endl;
   std::cout<<"Has "<<m_legs<<" legs."<<std::endl;
   std::cout<<"Breathing using lungs and grills."<<std::endl;
   std::cout<<"Has a slimy skin."<<std::endl;
}
