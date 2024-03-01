#include <iostream>
#include <string>

namespace week04
{
	class Human
	{
		// 멤버 변수 ( m_name, m_hp, m_power )
        private:
        std::string m_name;
        int m_hp;
        int m_power;


		// 멤버 함수 ( Attack, GetInfo )
		public:
		void Attack(Human& defender);
		void GetInfo();
        

		// 생성자 ( 매개변수 없는 디폴트 생성자, 매개변수 m_name, m_hp, m_power인 생성자 )
		Human() : m_name("옥소미"), m_hp(100), m_power(10) {}

		Human(std::string t_name, int t_hp, int t_power) : m_name(t_name), m_hp(t_hp), m_power(t_power) {}

	} ;
}