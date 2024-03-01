#include "week07.hpp"

/////// ( 1 ) ///////
week07::Human::Human(int t_age, std::string t_name) : m_age(t_age), m_name(t_name) {}
/////////////////////

/////// ( 2 ) ///////

week07::Human week07::Human::operator+(week07::Human& t_human)
{
	std::cout << std::endl;
	std::cout << "========== + ������ ȣ�� ==========" <<std::endl;
	std::cout << "Name : " << this->m_name << " or " << t_human.m_name << std::endl;
	std::cout << "Age : " << this->m_age << " + " << t_human.m_age << std::endl;

	/////////
	std::string t_name;
	std::string temp1 = this->m_name, temp2 = t_human.m_name;


	for(int i=0; i< temp1.size(); i++) //size �Լ��� <string> �ȿ� ����
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
//�Է½�Ʈ�� ���ǿ� �ٸ��� const�� ���̴� ������ �Է°� �ٸ��� ����� ���� �ٲ� ������ �����Ƿ� ��������� ���̴� ����.
//�� std::ostream&���� week07�� ���̸� ������ ���µ� operator���� week07::�� �ٿ��� ������ ���� �ʴ���...?
//operator�Լ��� week07 ���ӽ����̽����� �������� HumanŬ�������� ������ �ʱ� ������!
//�� �׳� �Լ��� Ŭ���ϸ� �� ����� ����
{	
	t_ostream << "Name : " << t_human.m_name << ", Age : " << t_human.m_age;
	return t_ostream;
}
//����: std::ostream�� std::cout��ü�� �ڷ���!(istream�� ���������� cin��ü�� �ڷ���)
//�׸��� return�� �� ����� �ϴ� ������ �������� ������� �ʿ��� �� �ϳ� ����ϰ� ������ ����ϱ� ���� cout, cin�� ��ȯ����� ���� ����� �����ϱ� ����


/////////////////////

/////// ( 4 ) ///////
std::istream& week07::operator>>(std::istream& t_istream, week07::Human& t_human)
{	
	std::cout << "�̸�, ���� �Է� (���� ����)" << std::endl;
	t_istream >> t_human.m_name >> t_human.m_age;
	return t_istream;
}


/////////////////////


int main()
{
	week07::Human a ;
	week07::Human b ;

	std::cout << "========== ��ü 2�� �Է� ==========" << std::endl ;

	std::cin >> a ;
	std::cin >> b ;	

	std::cout << a << std::endl ;
	std::cout << b << std::endl ;

	

	week07::Human c = a + b ;

	std::cout << "\n========== C ���� ��� ==========" << std::endl ;
	std::cout << c << std::endl ;

	return 0 ;
}


//����: ������ �����ε��� ��ü���� ���μ����� �� �𸣰ڴ�(Ư�� ����� ������ �����ε����� �� �Ű������� ������ �Ǿ�� �ϴ��� �𸣰ڴ�)
//���ĺ� ������ ���� �̸��� ��ҹ��� �������� �ʰ� ���ϰ� �ϱ� ���ؼ� �ҹ��ڷ� �� �ٲ㼭 ���ϴ� ����� �����ߴµ�
//�ٸ� ����� ������ �ñ��ϴ�.