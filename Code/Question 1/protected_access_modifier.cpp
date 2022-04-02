#include <iostream>
using namespace std;

class Animal
{
public:
    int legs;
    string type;
    void print()
    {
        cout << type << " has " << legs << " legs.\n";
    }

protected:
    string name;
};

class Pet : public Animal
{
public:
    void print()
    {
        name = "Floyd";
        cout << name << " is a " << type << endl;
        cout << type << " has " << legs << " legs.\n";
    }
};

int main()
{
    Pet dog;
    dog.type = "dog";
    dog.legs = 4;
    dog.print();

    return 0;
}