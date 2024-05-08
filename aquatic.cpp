#include "aquatic.h"

Aquatic::Aquatic(const std::string& name,const int& age,const int& weight)
         :
         Animal(name,age,weight)
{
	std::cout<<__PRETTY_FUNCTION__<<std::endl;
}
Aquatic::~Aquatic()
{
	 std::cout<<__PRETTY_FUNCTION__<<std::endl;

}

void Aquatic::print()
{ 
    std::cout<<"Name: "<<m_name<<std::endl;
    std::cout<<"Weight: "<<m_weight<<std::endl;
    std::cout<<"Age: "<<m_age<<std::endl;
    std::cout<<"Breathing using grills"<<std::endl;
}
