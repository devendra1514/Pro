#include <iostream>
using namespace std;

class Car
{
public:
    void changeGear()
    {
        cout << "Car Gear" << endl;
    }
    void accelerator()
    {
        cout << "Car Accelerator" << endl;
    }
    void light()
    {
        cout << "Car Light" << endl;
    }
};
class SportCar : public Car
{
public:
    void accelerator()
    { //function overriding
        cout << "Sport Car Accelerator" << endl;
    }
};

int main()
{
    SportCar s1;
    s1.changeGear();
    s1.accelerator(); //Execute only SportCar function due to function overriding
    s1.light();       //execute Car function becuase light function is not present in SportCar class
    return 0;
}