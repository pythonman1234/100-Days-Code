#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    void introduce()
    {
        cout << "hello" << name << endl;
    }
};

class employee : public Person
{
protected:
    int salary;

public:
    void monthly_Salary()
    {
        cout << "my is" << salary << endl;
    }
};

class manager : public employee
{
public:
    string departement;

    manager(string name, int salary, string departement)
    {
        this->name = name;
        this->salary = salary;
        this->departement = departement;
    };

    void work()
    {
        cout << "hi" << endl;
    }
};

int main()
{
}