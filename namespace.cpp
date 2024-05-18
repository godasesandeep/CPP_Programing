#include<iostream>


namespace Marvellous

{
    class Demo
    {
        //logic
    };
}

namespace PPA
{
    class Hello
    {
        //logic
    };
}

using namespace PPA;
int main()
{
    std::cout<<"Inside main \n";
    Marvellous::Demo dobj;
    Hello hobj;

    return 0;
}