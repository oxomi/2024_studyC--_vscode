#include <iostream>
struct Human {
private:
    char *name;
    int age;
    
public:
    void show();
    void SetInfo(char*_name, int _age); 
}; //구조체 뒤에 세미콜론

void Human::show(){
    std::cout << "제 이름은 " << name << " 입니다" << std::endl;
    std::cout << "저는 " << age << " 살 입니다!"<< std::endl;
}

void Human::SetInfo(char * _name, int _age){
    name = _name;
    age = _age;
}


int main(){
    Human person; //객체
    person.SetInfo("옥소미", 21);
    person.show();

    return 0;
}


