#include <iostream>
#include <string>

namespace week04
{
	class Human
	{
		// ��� ���� ( m_name, m_hp, m_power )
        private:
        std::string m_name;
        int m_hp;
        int m_power;


		// ��� �Լ� ( Attack, GetInfo )
		public:
		void Attack(Human& defender);
		void GetInfo();
        

		// ������ ( �Ű����� ���� ����Ʈ ������, �Ű����� m_name, m_hp, m_power�� ������ )
		Human() : m_name("���ҹ�"), m_hp(100), m_power(10) {}

		Human(std::string t_name, int t_hp, int t_power) : m_name(t_name), m_hp(t_hp), m_power(t_power) {}

	} ;
}