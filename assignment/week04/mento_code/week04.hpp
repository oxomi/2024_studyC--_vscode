#include <iostream>
#include <string>

namespace week04
{
	class Human
	{
		// ��� ���� ( m_name, m_hp, m_power )
        private:
        std::string m_name = "John Doe" ;
        int m_hp = 100 ;
        int m_power = 10 ;
        
		// ��� �Լ� ( Attack, GetInfo )
        public:
        void Attack( Human& defender ) ;
        static void GetInfo( Human t_human ) ; 
        //static: �� ������ �ٽ�/ ��ü ���� ���� ������ ������ �������� �Լ� ������ ���.
        //main�Լ����� getinfo ȣ�� �ÿ� ���̷��� �ڵ尡 �ȵƴ� ������ ���� static�� �ț��� �����ε� ��. 

		// ������ ( �Ű����� ���� ����Ʈ ������, �Ű����� m_name, m_hp, m_power�� ������ )
        Human() ;
        Human( std::string t_name, int t_hp,int t_power ) ;
	} ;
}