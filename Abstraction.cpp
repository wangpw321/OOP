//Abstraction
#include <iostream>
using std::string;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee {
    private: //Encapsulated properties, Read and Write by Getter and Setter.
        string Name;
        string Company;
        string Position;
        int Age;
    public:
        void setName(string name){ //Setter
            Name = name;
        }
        string getName(){ //Getter
            return Name;
        }
        void setCompany(string company){
            Company = company;
        }
        string getCompany(){
            return Company;
        }
        void setPosition(string position){
            Position = position;
        }
        string getPosition(){
            return Position;
        }
        void setAge(string age){
            if(age >= 18)
            Age = age;
        }
        int getAge(){
            return Age;
        }

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

    void AskForPromotion(){
        if(Age>30) std::cout<< Name << " got promoted!" <<std::endl;
        else std::cout<< Name << ", sorrt NO promotion for you!" <<std::endl;
    }
};

int main()
{
    Employee employee1 = Employee("Palvin Wang", "Ubisoft Winnipeg", "Game Developer", 25);
    // employee1.Name = "Palvin Wang";
    // employee1.Company = "Ubisoft Winnipeg";
    // employee1.Position = "Game Developer";
    // employee1.Age = 25;
    

    Employee employee2 = Employee("Micheal Scott", "Dunder Miffilin", "Branch Manager", 35);;
    // employee2.Name = "Micheal Scott";
    // employee2.Company = "Dunder Miffilin";
    // employee1.Position = "Branch Manager";
    // employee2.Age = 35;
    
    employee1.AskForPromotion();
    employee2.AskForPromotion();
}