#include <iostream>

class MyClass
{
	private:
	int m_int ;
	double m_double ;

	public:
	MyClass( int t_int, double t_double ) : m_int( t_int ), m_double( t_double ) {}
	void PrintInfo() 
	{
		std::cout << "\n\n=== Myclass PrintInfo() call ===" << std::endl ;
		std::cout << "int : " << this->m_int << std::endl ;
		std::cout << "double : " << this->m_double << std::endl ;
	}
	MyClass operator+( MyClass& t_myclass) //[반환타입] operator함수 (매개변수)
    {   
        std::cout << "\n\n=== Myclass PrintInfo() call ===" << std::endl ;
        std::cout << "<int> " << this->m_int << " + " << t_myclass.m_int << std::endl;
        std::cout << "<double> " << this->m_double << " + " << t_myclass.m_double << std::endl;
        return MyClass(this->m_int + t_myclass.m_int, this->m_double + t_myclass.m_double);
    }
} ;

int main(){
    MyClass num1(100, 60.78);
    MyClass num2(2000, 123.88);

    MyClass num3 = num1 + num2; //num1.operator+(num2)
    num3.PrintInfo();


}