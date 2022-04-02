#include <iostream>
using namespace std;

class Animal
{
public:
    int legs;
    string name;
    void print()
    {
        cout << name << " has " << legs << " legs.\n";
    }
};

int main()
{
    Animal dog;
    dog.name = "Floyd";
    dog.legs = 4;
    dog.print();

    return 0;
}