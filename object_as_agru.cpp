//object as argument
#include<iostream>
using namespace std;

class example
{
public:
    int a;

    // This function takes an object as an argument
    void add(example E)
    {
        a = a + E.a;
    }
};

int main()
{
    // Create objects
    example E1, E2;

    // Values are initialized for both objects
    E1.a = 50;
    E2.a = 100;

    cout << "Initial values\n";
    cout << "Value of object 1: " << E1.a << "\nValue of object 2: " << E2.a << "\n\n";

    // Passing object as an argument to the add() function
    E2.add(E1);

    // Changed values after passing an object as an argument
    cout << "New Values\n";
    cout << "Value of object 1: " << E1.a << "\nValue of object 2: " << E2.a << "\n\n";

    return 0;
}





