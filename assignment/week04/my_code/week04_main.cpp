#include "week04.hpp"
#include <iostream> //이미 wek04헤더파일에 존재하므로 안붙여도 됨.
#include <string>

/////// Human 클래스의 생성자 정의 ( 매개변수가 없는 생성자, 매개변수 m_name, m_hp, m_power인 생성자)

////////////////


/////// 멤버 함수 Attack, GetInfo 정의
void week04::Human::Attack(Human& defender)
{
    defender.m_hp -= this->m_power;
    std::cout << "데미지 " << this->m_power
              << "만큼의 공격 수행 !!!!" << std::endl;
    std::cout << "공격자: " << this->m_name << " => " << "방어자: "
              << defender.m_name << std::endl;
} 
//this는 현재 객체를 명시적으로 표현하기 위해 쓰는 것


void week04::Human::GetInfo()
{
    std::cout << m_name << "의 정보" << std::endl;
    std::cout << "체력: " << m_hp << ", 파워: " << m_power << std::endl;
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
	attacker.GetInfo();
	defender.GetInfo();
	////// 공격 수행
	std::cout << "\n====================== " << std::endl;	
	std::cout << "공격 수행 " << std::endl;
	std::cout << "======================\n" << std::endl;	
	attacker.Attack( defender ) ; //attacker가 this가 됨.
	
	////// 공격 후 객체 정보 확인
	std::cout << "\n====================== " << std::endl;	
	std::cout << "공격 후 객체 정보 확인" << std::endl;
	std::cout << "======================\n" << std::endl;	
	attacker.GetInfo();
	defender.GetInfo();


	return 0;
}



//처음엔 함수를 정의할 때 이런식으로 했었다. 그러나 오류 발생.
/*
void week04::Human::Attack(Human& defender){ 
	defender.m_hp -= attacker.m_power;
	std::cout << "데미지 " << defender.m_hp 
	<< "만큼의 공격 수행 !!!!" << std::endl;
	std::cout << "공격자: " << attacker.m_name << " => " << "방어자: "
	<< defender.m_name << std::endl;
	}


void week04::Human::GetInfo(Human& person){
	std::cout << person.m_name << "의 정보" << std::endl;
	std::cout << "체력: " << person.m_hp << ", 파워: " << person.m_power <<std::endl;
}
*/
//근데 잘 보니 attack함수의 호출 부분에서 attacker.Attack(defender)로 호출을 해주길래 !!기본적인 멤버변수는 호출한 객체가 가진 변수값으로 대입이 된다는것을 깨달음!! 매개변수와는 직접적인 관련이 없는 것이었음.
//그리고 주어진 툴을 바꾼 부분도 있는데 일단 맨 위 생성자 정의 부분은 자꾸 헤더파일이랑 중복된다는 식의 오류가 뜨길래 cpp파일에서는 그부분을 아예 삭제하고 hpp에 그냥 정의까지 몰아넣음.
//그리고 getinfo부분도 객체.getinfo로 했는데 다시보니까 객체 생성 없이도 실행되어야 한다고 되어있어서 바꾸면 안됐던듯.