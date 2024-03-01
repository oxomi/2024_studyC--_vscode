#include "week04.hpp"
#include <iostream> //�̹� wek04������Ͽ� �����ϹǷ� �Ⱥٿ��� ��.
#include <string>

/////// Human Ŭ������ ������ ���� ( �Ű������� ���� ������, �Ű����� m_name, m_hp, m_power�� ������)

////////////////


/////// ��� �Լ� Attack, GetInfo ����
void week04::Human::Attack(Human& defender)
{
    defender.m_hp -= this->m_power;
    std::cout << "������ " << this->m_power
              << "��ŭ�� ���� ���� !!!!" << std::endl;
    std::cout << "������: " << this->m_name << " => " << "�����: "
              << defender.m_name << std::endl;
} 
//this�� ���� ��ü�� ��������� ǥ���ϱ� ���� ���� ��


void week04::Human::GetInfo()
{
    std::cout << m_name << "�� ����" << std::endl;
    std::cout << "ü��: " << m_hp << ", �Ŀ�: " << m_power << std::endl;
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
	attacker.GetInfo();
	defender.GetInfo();
	////// ���� ����
	std::cout << "\n====================== " << std::endl;	
	std::cout << "���� ���� " << std::endl;
	std::cout << "======================\n" << std::endl;	
	attacker.Attack( defender ) ; //attacker�� this�� ��.
	
	////// ���� �� ��ü ���� Ȯ��
	std::cout << "\n====================== " << std::endl;	
	std::cout << "���� �� ��ü ���� Ȯ��" << std::endl;
	std::cout << "======================\n" << std::endl;	
	attacker.GetInfo();
	defender.GetInfo();


	return 0;
}



//ó���� �Լ��� ������ �� �̷������� �߾���. �׷��� ���� �߻�.
/*
void week04::Human::Attack(Human& defender){ 
	defender.m_hp -= attacker.m_power;
	std::cout << "������ " << defender.m_hp 
	<< "��ŭ�� ���� ���� !!!!" << std::endl;
	std::cout << "������: " << attacker.m_name << " => " << "�����: "
	<< defender.m_name << std::endl;
	}


void week04::Human::GetInfo(Human& person){
	std::cout << person.m_name << "�� ����" << std::endl;
	std::cout << "ü��: " << person.m_hp << ", �Ŀ�: " << person.m_power <<std::endl;
}
*/
//�ٵ� �� ���� attack�Լ��� ȣ�� �κп��� attacker.Attack(defender)�� ȣ���� ���ֱ淡 !!�⺻���� ��������� ȣ���� ��ü�� ���� ���������� ������ �ȴٴ°��� ������!! �Ű������ʹ� �������� ������ ���� ���̾���.
//�׸��� �־��� ���� �ٲ� �κе� �ִµ� �ϴ� �� �� ������ ���� �κ��� �ڲ� ��������̶� �ߺ��ȴٴ� ���� ������ �߱淡 cpp���Ͽ����� �׺κ��� �ƿ� �����ϰ� hpp�� �׳� ���Ǳ��� ���Ƴ���.
//�׸��� getinfo�κе� ��ü.getinfo�� �ߴµ� �ٽú��ϱ� ��ü ���� ���̵� ����Ǿ�� �Ѵٰ� �Ǿ��־ �ٲٸ� �ȵƴ���.