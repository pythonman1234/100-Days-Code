#include <iostream>
using namespace std;

class Engineer
{
public:
    string specialization;

    void work()
    {
        cout << "ai" << specialization << endl;
    }
};

class Youtuber
{
public:
    int subscribers;

    void contentcreator()
    {
        cout << "total" << subscribers << endl;
    }
};

class Codeteacher : public Engineer, public Youtuber
{
public:
    string name;

    Codeteacher(string name, string specialization, int subscribers)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscribers = subscribers;
    }

    void showcase()
    {
        cout << "hi" << name << endl;
        work();
        contentcreator();
    }
};

int main()
{
    Codeteacher A1("name1", "branch", 49000);
    A1.showcase();
}
