#include <iostream>
#include <string>
using namespace std;

// Abstract class serving as a contract
class AbstractClass {
public:
    virtual void AskForPromotion() = 0;  // Pure virtual function
};

// Employee class inheriting from AbstractClass
class Employee : public AbstractClass {
private:
    string Company;
    int Age;

protected:
    string Name;

public:
    // Constructor
    Employee(const string& name, const string& company, int age)
        : Name(name), Company(company), Age(age) {}

    // Setters and Getters
    void setName(const string& name) {
        Name = name;
    }

    const string& getName() const {
        return Name;
    }

    void setCompany(const string& company) {
        Company = company;
    }

    const string& getCompany() const {
        return Company;
    }

    void setAge(int age) {
        if (age >= 18) Age = age;
    }

    int getAge() const {
        return Age;
    }

    // Method to introduce the employee
    void IntroduceYourself() const {
        cout << "Name - " << Name << "\n";
        cout << "Company - " << Company << "\n";
        cout << "Age - " << Age << "\n";
    }

    // Method to ask for promotion
    void AskForPromotion() override {
        if (Age > 30) {
            cout << Name << " got promoted!\n";
        } else {
            cout << Name << ", sorry no promotion for you!\n";
        }
    }

    // Virtual method to be overridden by derived classes
    virtual void Work() {
        cout << Name << " is checking email, task backlog, performing those tasks...\n";
    }
};

// Developer class inheriting from Employee
class Developer : public Employee {
private:
    string FavProgrammingLanguage;

public:
    // Constructor
    Developer(const string& name, const string& company, int age, const string& favProgrammingLanguage)
        : Employee(name, company, age), FavProgrammingLanguage(favProgrammingLanguage) {}

    // Setters and Getters
    void setFavProgrammingLanguage(const string& favProgrammingLanguage) {
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    const string& getFavProgrammingLanguage() const {
        return FavProgrammingLanguage;
    }

    // Method to fix a bug
    void FixBug() const {
        cout << getName() << " fixed bug using " << FavProgrammingLanguage << "\n";
    }

    // Overriding the Work method
    void Work() override {
        cout << getName() << " is writing " << FavProgrammingLanguage << " code!\n";
    }
};

// Teacher class inheriting from Employee
class Teacher : public Employee {
private:
    string Subject;

public:
    // Constructor
    Teacher(const string& name, const string& company, int age, const string& subject)
        : Employee(name, company, age), Subject(subject) {}

    // Setters and Getters
    void setSubject(const string& subject) {
        Subject = subject;
    }

    const string& getSubject() const {
        return Subject;
    }

    // Method to prepare a lesson
    void PrepareLesson() const {
        cout << getName() << " is preparing a lesson for the subject " << Subject << "\n";
    }

    // Overriding the Work method
    void Work() override {
        cout << getName() << " is teaching " << Subject << "\n";
    }
};

int main() {
    Developer d("Imrul", "XYZ Company", 25, "C++");
    Teacher t("Saldina", "Cool School", 35, "English");

    // Employee pointers to derived class objects
    Employee* e1 = &d;
    Employee* e2 = &t;

    e1->Work();
    e2->Work();

    return 0;
}
