#include <iostream>
class Mammal{
    public:
        bool alive = true;

        void run(){
            std::cout << "mammal running" << '\n';
        }
};

class Human : public Mammal{
    private:
        int salary = 0;
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout << "eating" << '\n';
        }
        void drink(){
            std::cout << "drinking" << '\n';
        }
        void sleep(){
            std::cout << "sleeping" << '\n';
        }
        int getSalary(){
            return salary;
        }
        void setSalary(int salary){
            this->salary = salary;
        }

    Human(std::string name, std::string occupation, int age){
        this->name = name;
        this->occupation = occupation;
        this->age = age;
    }
};



int main (){

    Human human1("Matti", "Engineer", 29);
    Human human2("tero", "IT", 28);

    human1.setSalary(2500);

    std::cout << human1.name << '\n';
    std::cout << human1.age << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.getSalary() << '\n';

    human1.eat();
    human1.run();

}