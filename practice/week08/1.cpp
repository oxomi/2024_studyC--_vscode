#include <iostream>

template <typename T> //auto �ڸ��� ���ٰ� �����ϸ� ��
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
