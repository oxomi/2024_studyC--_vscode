#include <iostream>
#include <string>

class Person {
private:
    std::string name;
public:
    Person(std::string n) : name(n) {}
    std::string getName() {
        return name;
    }
};

class Student : public Person
{
    public:
    Student(std::string n) : Person(n) {}
    void study(){
        std::cout << getName() << " is studying" << std::endl;
    };
};

class Teacher : public Person
{
    public:
    Teacher (std::string n) : Person(n) {}
    void teach(){
        std::cout << getName() << " is teaching" << std::endl;
    };
};


////Student, Teacher 클래스 정의
////


int main() {
    Student student("John");
    Teacher teacher("Anna");

    student.study();
    teacher.teach();

    return 0;
}
