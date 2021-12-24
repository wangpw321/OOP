//Access Modifiers
#include <iostream>
using std::string;

class Employee {
    // private: #by default
    public:
        string Name;
        string Company;
        string Position;
        int Age;

        void IntroduceYourself() { //class method
            std::cout<<"Name - "<< Name <<std:endl;
            std::cout<<"Company - "<< Company <<std:endl;
            std::cout<<"Position - "<< Position <<std:endl;
            std::cout<<"Age - "<< Age <<std:endl;
        }
};

int main()
{
    Employee employee1;
    employee1.Name = "Palvin Wang";
    employee1.Company = "Ubisoft Winnipeg";
    employee1.Position = "Game Developer";
    employee1.Age = 25;
    employee1.IntroduceYourself();

    Employee employee2;
    employee2.Name = "Micheal Scott";
    employee2.Company = "Dunder Miffilin";
    employee1.Position = "Branch Manager";
    employee2.Age = 35;
    employee2.IntroduceYourself();
}