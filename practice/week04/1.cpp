#include <iostream>
struct Human {
private:
    char *name;
    int age;
    
public:
    void show();
    void SetInfo(char*_name, int _age); 
}; //����ü �ڿ� �����ݷ�

void Human::show(){
    std::cout << "�� �̸��� " << name << " �Դϴ�" << std::endl;
    std::cout << "���� " << age << " �� �Դϴ�!"<< std::endl;
}

void Human::SetInfo(char * _name, int _age){
    name = _name;
    age = _age;
}


int main(){
    Human person; //��ü
    person.SetInfo("���ҹ�", 21);
    person.show();

    return 0;
}


