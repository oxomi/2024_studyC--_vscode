#include "week04.hpp"

/////// Human 클래스의 생성자 정의 ( 매개변수가 없는 생성자, 매개변수 m_name, m_hp, m_power인 생성자)

week04::Human::Human( ){};

week04::Human::Human( std::string t_name, int t_hp, int t_power )
{  
    m_name = t_name;
    m_hp = t_hp;
    m_power = t_power;
}
////////////////

/////// 멤버 함수 Attack, GetInfo 정의
void week04::Human::Attack( Human& defender )
{
	std::cout << "데미지 " << this->m_power << "만큼의 공격 수행 !!!!" << std::endl;
	std::cout << "공격자 : " << this->m_name << " => 방어자 : " << defender.m_name << std::endl;
	std::cout << std::endl ;

	defender.m_hp -= this->m_power;
} //this는 현재 객체를 가리키는 포인터. 명시적으로 현재 객체의 변수임을 표현하기 위해 씀.

void week04::Human::GetInfo( Human t_human )
{
    std::cout << t_human.m_name << "의 정보" << std::endl;
    std::cout << "체력 : " << t_human.m_hp << ", 파워 : "<< t_human.m_power << std::endl ;
	std::cout << std::endl ;	
}

////////////////


int main( )
{
	////// 객체 생성
	week04::Human attacker ;
	week04::Human defender( "이창율", 50, 10 )  ;

	////// 공격 전 객체 정보 확인
	std::cout << "\n====================== " << std::endl;	
	std::cout << "공격 전 객체 정보 확인 " << std::endl;
	std::cout << "======================\n" << std::endl;	
	week04::Human::GetInfo( attacker );
	week04::Human::GetInfo( defender );

	////// 공격 수행
	std::cout << "\n====================== " << std::endl;	
	std::cout << "공격 수행 " << std::endl;
	std::cout << "======================\n" << std::endl;	
	attacker.Attack( defender ) ;
	
	////// 공격 후 객체 정보 확인
	std::cout << "\n====================== " << std::endl;	
	std::cout << "공격 후 객체 정보 확인" << std::endl;
	std::cout << "======================\n" << std::endl;	
	week04::Human::GetInfo( attacker );
	week04::Human::GetInfo( defender );  


	return 0;
}