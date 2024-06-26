#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

// serve as a contract, one rule
// abstract class
class AbstractClass {
    // rule: pure virtual function
    // whichever signs this contract that class have to provide
    // implemention for this method.
    virtual void AskForPromotion() = 0;
};

class Employee: AbstractClass {
    // Attributes
    // All of this members are private by default
    // so not writing private also would have worked
private:
    // Encapsulated
    // string Name;
    string Company;
    int Age;
protected:
    string Name; // Can be accessed from sub class now

public:
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name; // Return the value which is encapsulated
    }

    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }

    void setAge(int age) {
        if (age >= 18) Age = age;
    }
    int getAge() {
        return Age;
    }

    void IntroduceYourself() {
        cout << "Name - " << Name << "\n";
        cout << "Company - " << Company << "\n";
        cout << "Age - " << Age << "\n";
    }

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

    // Abstraction
    void AskForPromotion() {
        // how long that person is working
        // how much contributions
        // what kind of relationship they have with their collegues
        // so on...

        if (Age > 30) {
            cout << Name << " got promoted!\n";
        }
        else {
            cout << Name << ", sorry no promotion for you!\n";
        }
    }

    /*virtual function:
    Forces to check if there is implementation of this in my derived classes and yes please execute them first. */
    virtual void Work() {
        cout << Name << " is checking email, task backlog, performing those tasks...\n";
    }
};

// Developer extends Employee
// Developer has all of the properties of Employee
// ***: The base class should be public, it is private by default
class Developer: public Employee {
private:
    string FavProgrammingLanguage;

public:
    void setFavProgrammingLanguage(string favProgrammingLanguage) {
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    string getFavProgrammingLanguage() {
        return FavProgrammingLanguage;
    }

    Developer(string name, string company, int age, string favProgrammingLanguage)
        : Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    void FixBug() {
        // cout << getName() << " fixed bug using " << FavProgrammingLanguage << "\n";
        cout << Name << " fixed bug using " << FavProgrammingLanguage << "\n";
    }

    // Overriding
    void Work() {
        cout << Name << " is writing " << FavProgrammingLanguage << " code!\n";
    }
};

class Teacher: public Employee {
private:
    string Subject;

public:
    void setSubject(string subject) {
        Subject = subject;
    }
    string getSubject() {
        return Subject;
    }

    Teacher(string name, string company, int age, string subject): Employee(name, company, age) {
        Subject = subject;
    }

    void PrepareLesson() {
        cout << getName() << " is preparing a lesson for the subject " << Subject << "\n";
    }

    // Overriding
    void Work() {
        cout << Name << " is teaching " << Subject << "\n";
    }
};

int main() {
    // Employee employee1 = Employee("Sifat", "XYZ Company", 25);
    // employee1.IntroduceYourself();

    // Employee employee2 = Employee("John", "Amazon", 36);
    // employee2.IntroduceYourself();

    // employee1.setAge(15);
    // cout << employee1.getName() << " is " << employee1.getAge() << " years old.";

    // employee1.AskForPromotion();
    // employee2.AskForPromotion();


    Developer d = Developer("Imrul", "XYZ Company", 25, "C++");
    // d.FixBug();
    // d.setName("Hasan");

    // d.AskForPromotion();

    Teacher t = Teacher("Saldina", "Cool School", 35, "English");
    // t.PrepareLesson();
    // t.AskForPromotion();


    // d.Work();
    // t.Work();

    // Employee pointer to a employee object
    // Pointer of a base class can have referance of derived class
    Employee *e1 = &d;
    Employee *e2 = &t;

    e1->Work();
    e2->Work();

    keepLearning
}
