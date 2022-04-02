#include <iostream>
using namespace std;

class Animal
{
    int legs;
    string name;

public:
    void setName(string dogname)
    {
        name = dogname;
    }
    string getName()
    {
        return name;
    }
    void setleg(int noflegs)
    {
        legs = noflegs;
    }
    int getleg()
    {
        return legs;
    }
};

int main()
{
    Animal dog;
    dog.setName("Flyod");
    dog.setleg(4);
    cout << dog.getName() << endl;
    cout << dog.getleg() << endl;

    return 0;
}