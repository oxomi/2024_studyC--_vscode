#include <iostream>
class Human {
private:
    //��� ����
    char *m_name;
    int m_age;
    
public:
    //����Լ�
    char* GetName() const { return m_name ; }
    int GetAge() const { return m_age ; }

    //(��ü)������
    Human(char* t_name, int t_age) : m_name(t_name), m_age(t_age) {} //m = t

    //�Ҹ���
    ~Human() {}
}; 


int main(){
    Human person("���ҹ�", 21); //��ü
    std::cout << "�� �̸��� " << person.GetName() << " �Դϴ�" << std::endl;
    std::cout << "���� " << person.GetAge() << " �� �Դϴ�!"<< std::endl;

    return 0;
}


