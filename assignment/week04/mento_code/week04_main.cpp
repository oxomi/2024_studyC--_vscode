#include "week04.hpp"

/////// Human Ŭ������ ������ ���� ( �Ű������� ���� ������, �Ű����� m_name, m_hp, m_power�� ������)

week04::Human::Human( ){};

week04::Human::Human( std::string t_name, int t_hp, int t_power )
{  
    m_name = t_name;
    m_hp = t_hp;
    m_power = t_power;
}
////////////////

/////// ��� �Լ� Attack, GetInfo ����
void week04::Human::Attack( Human& defender )
{
	std::cout << "������ " << this->m_power << "��ŭ�� ���� ���� !!!!" << std::endl;
	std::cout << "������ : " << this->m_name << " => ����� : " << defender.m_name << std::endl;
	std::cout << std::endl ;

	defender.m_hp -= this->m_power;
} //this�� ���� ��ü�� ����Ű�� ������. ��������� ���� ��ü�� �������� ǥ���ϱ� ���� ��.

void week04::Human::GetInfo( Human t_human )
{
    std::cout << t_human.m_name << "�� ����" << std::endl;
    std::cout << "ü�� : " << t_human.m_hp << ", �Ŀ� : "<< t_human.m_power << std::endl ;
	std::cout << std::endl ;	
}

////////////////


int main( )
{
	////// ��ü ����
	week04::Human attacker ;
	week04::Human defender( "��â��", 50, 10 )  ;

	////// ���� �� ��ü ���� Ȯ��
	std::cout << "\n====================== " << std::endl;	
	std::cout << "���� �� ��ü ���� Ȯ�� " << std::endl;
	std::cout << "======================\n" << std::endl;	
	week04::Human::GetInfo( attacker );
	week04::Human::GetInfo( defender );

	////// ���� ����
	std::cout << "\n====================== " << std::endl;	
	std::cout << "���� ���� " << std::endl;
	std::cout << "======================\n" << std::endl;	
	attacker.Attack( defender ) ;
	
	////// ���� �� ��ü ���� Ȯ��
	std::cout << "\n====================== " << std::endl;	
	std::cout << "���� �� ��ü ���� Ȯ��" << std::endl;
	std::cout << "======================\n" << std::endl;	
	week04::Human::GetInfo( attacker );
	week04::Human::GetInfo( defender );  


	return 0;
}