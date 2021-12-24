//Abstraction
#include <iostream>
using std::string;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee {
    private: //Encapsulated properties, Read and Write by Getter and Setter.
        string Company;
        string Position;
        int Age;
    protected:
        string Name;
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

class Developer: public Employee { // child class of Employee, property interited
    public:
        string FavProgrammingLanguage;
        Developer(string name, string company, string position, int age, string favProgrammingLanguage)
            :Employee(name, company, position, age)
        {
            FavProgrammingLanguage = favProgrammingLanguage;
        };
        void FixBug() {
            std::cout<< Name <<" fixed bug using "<< FavProgrammingLanguage << std::endl;
            // std::cout<< getName() <<" fixed bug using "<< FavProgrammingLanguage << std::endl;
            
        }


};

class Teacher: public Employee {
public:
    string Subject;
    void PrepareLesson(){
        std::cout<< Name << " is preparing "<< Subject <<" lesson" <<std::endl;
    }
    Teacher(string name, string company, string position, int age, string subject)
        :Employee(name, company, position, age)
    {
        Subject = subject;
    }
};

int main()
{
    Developer d = Developer("Palvin Wang", "Ubisoft Winnipeg", "Game Developer", 25, "C++");
    d.FixBug();
    d.AskForPromotion();

    Teacher t = Teacher("Jack", "Cool School", "Math Teacher", 35, "History");
    t.AskForPromotion();
}