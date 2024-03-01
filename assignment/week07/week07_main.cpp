#include "week07.hpp"

/////// ( 1 ) ///////
week07::Human::Human(int t_age, std::string t_name) : m_age(t_age), m_name(t_name) {}
/////////////////////

/////// ( 2 ) ///////

week07::Human week07::Human::operator+(week07::Human& t_human)
{
	std::cout << std::endl;
	std::cout << "========== + 연산자 호출 ==========" <<std::endl;
	std::cout << "Name : " << this->m_name << " or " << t_human.m_name << std::endl;
	std::cout << "Age : " << this->m_age << " + " << t_human.m_age << std::endl;

	/////////
	std::string t_name;
	std::string temp1 = this->m_name, temp2 = t_human.m_name;


	for(int i=0; i< temp1.size(); i++) //size 함수는 <string> 안에 있음
	{
		if('A' <= temp1[i] && temp1[i] <= 'Z') temp1[i] += 32;
	}

	for(int i=0; i< temp2.size(); i++)
	{ 
		if('A' <= temp2[i] && temp2[i] <= 'Z') temp2[i] += 32;
	}

	if(temp1[0] < temp2[0]) t_name = m_name;
	else if(temp1[0] > temp2[0]) t_name = t_human.m_name;
	/////////

	return Human(this->m_age + t_human.m_age, t_name);
}

/////////////////////

/////// ( 3 ) ///////
std::ostream& week07::operator<<(std::ostream& t_ostream, const week07::Human& t_human) 
//입력스트립 정의완 다르게 const를 붙이는 이유는 입력관 다르게 출력은 값이 바뀔 여지가 없으므로 명시적으로 붙이는 것임.
//왜 std::ostream&에는 week07을 붙이면 오류가 나는데 operator에는 week07::을 붙여야 오류가 나지 않는지...?
//operator함수가 week07 네임스페이스에는 속하지만 Human클래스에는 속하지 않기 때문임!
//팁 그냥 함수명 클릭하면 다 띄워줌 ㅋㅋ
{	
	t_ostream << "Name : " << t_human.m_name << ", Age : " << t_human.m_age;
	return t_ostream;
}
//설명: std::ostream은 std::cout객체의 자료형!(istream도 마찬가지로 cin객체의 자료형)
//그리고 return을 꼭 해줘야 하는 이유는 여러번의 입출력이 필요할 때 하나 출력하고 다음걸 출력하기 위해 cout, cin을 반환해줘야 다음 출력이 가능하기 때문


/////////////////////

/////// ( 4 ) ///////
std::istream& week07::operator>>(std::istream& t_istream, week07::Human& t_human)
{	
	std::cout << "이름, 나이 입력 (띄어쓰기 구분)" << std::endl;
	t_istream >> t_human.m_name >> t_human.m_age;
	return t_istream;
}


/////////////////////


int main()
{
	week07::Human a ;
	week07::Human b ;

	std::cout << "========== 객체 2개 입력 ==========" << std::endl ;

	std::cin >> a ;
	std::cin >> b ;	

	std::cout << a << std::endl ;
	std::cout << b << std::endl ;

	

	week07::Human c = a + b ;

	std::cout << "\n========== C 정보 출력 ==========" << std::endl ;
	std::cout << c << std::endl ;

	return 0 ;
}


//질문: 연산자 오버로딩의 전체적인 프로세스를 잘 모르겠다(특히 입출력 연산자 오버로딩에서 왜 매개변수가 저렇게 되어야 하는지 모르겠다)
//알파벳 순서가 빠른 이름을 대소문자 구분하지 않고 비교하게 하기 위해서 소문자로 다 바꿔서 비교하는 방법을 선택했는데
//다른 방법이 있을지 궁금하다.