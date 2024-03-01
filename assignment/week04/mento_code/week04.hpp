#include <iostream>
#include <string>

namespace week04
{
	class Human
	{
		// 멤버 변수 ( m_name, m_hp, m_power )
        private:
        std::string m_name = "John Doe" ;
        int m_hp = 100 ;
        int m_power = 10 ;
        
		// 멤버 함수 ( Attack, GetInfo )
        public:
        void Attack( Human& defender ) ;
        static void GetInfo( Human t_human ) ; 
        //static: 이 과제의 핵심/ 객체 생성 없이 실행이 가능한 독립적인 함수 구현에 사용.
        //main함수에서 getinfo 호출 시에 스켈레톤 코드가 안됐던 이유는 내가 static을 안썻기 때문인듯 함. 

		// 생성자 ( 매개변수 없는 디폴트 생성자, 매개변수 m_name, m_hp, m_power인 생성자 )
        Human() ;
        Human( std::string t_name, int t_hp,int t_power ) ;
	} ;
}