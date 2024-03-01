#include <iostream>
class Human {
private:
    //멤버 변수
    char *m_name;
    int m_age;
    
public:
    //멤버함수
    char* GetName() const { return m_name ; }
    int GetAge() const { return m_age ; }

    //(객체)생성자
    Human(char* t_name, int t_age) : m_name(t_name), m_age(t_age) {} //m = t

    //소멸자
    ~Human() {}
}; 


int main(){
    Human person("옥소미", 21); //객체
    std::cout << "제 이름은 " << person.GetName() << " 입니다" << std::endl;
    std::cout << "저는 " << person.GetAge() << " 살 입니다!"<< std::endl;

    return 0;
}


