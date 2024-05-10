#include "animal.h"
#include "amphibians.h"
#include "terrestrials.h"
#include "aquatic.h"

int main()
{
    Amphibians A("Frog 1",10,10,10);
    Amphibians B("Frog 2",10,10,10);
    Amphibians C("Frog 3",10,10,10);
    Amphibians D("Frog 4",10,10,10);

    std::cout<<A.getCount()<<std::endl;
    
    return 0;
}
