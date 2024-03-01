#include <iostream>
#include <string>

namespace week07
{
	class Human
	{
		private:
		int m_age ;
		std::string m_name ;

		public:
		Human() {}
		Human( int , std::string ) ;

		Human operator+( Human& ) ; //Human의 멤버함수이기 때문에 반환타입에 Human
		friend std::ostream& operator<<( std::ostream& , const Human& ) ; 
		friend std::istream& operator>>( std::istream& , Human& ) ;
		////매우중요!! friend 함수는 클래스의 멤버가 아니다! (그러나 클래스에 엑세스 할수 있는 것.)
	} ;
} 

