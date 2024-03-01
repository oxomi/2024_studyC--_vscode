#include <iostream>

template <typename T> //auto 자리에 들어간다고 생각하면 됨
void printInfo(T t_in)
{
    std::cout << typeid( t_in ).name() << std::endl ;
}

int main()
{
    printInfo(1);
    printInfo(2.0);
    printInfo("a");
    return 0;
}
