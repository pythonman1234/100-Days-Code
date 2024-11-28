#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    void work()
    {
        cout << "lecture\n";
    }
};

class Student : public Human
{
    int roll_number;
    int fees;

public:
    Student(string name, int age, int roll_number, int fees)
    {
        this->name = name;
        this->age = age;
        this->roll_number = roll_number;
        this->fees = fees;
    }
};

int main()
{
    Student A1("Name 1", 26, 32, 99);
}