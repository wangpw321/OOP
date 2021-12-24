//Constructors
#include <iostream>
using std::string;

// Rule 1: Following. No return type.
// Rule 2: Name of Constructors has the same name as class it belongs to (eg. Employee()).
// Rule 3: Constructor must be public.
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

    Employee(string name, string company, string position, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee employee1 = Employee("Saldina", "Ubisoft Winnipeg", "Game Developer", 25);
    // employee1.Name = "Palvin Wang";
    // employee1.Company = "Ubisoft Winnipeg";
    // employee1.Position = "Game Developer";
    // employee1.Age = 25;
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Micheal Scott", "Dunder Miffilin", "Branch Manager", 35);;
    // employee2.Name = "Micheal Scott";
    // employee2.Company = "Dunder Miffilin";
    // employee1.Position = "Branch Manager";
    // employee2.Age = 35;
    employee2.IntroduceYourself();
}