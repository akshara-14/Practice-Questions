#include <iostream>
using namespace std;

class Rectangle
{

private:
    float length, breadth;

public:
    void initialize(float l, float b);
    void disparea();
};
void Rectangle ::initialize(float l, float b)
{

    length = l;
    breadth = b;
}
void Rectangle ::disparea()
{

    float area = length * breadth;
    cout << "\n\t The area of the rectangle is: " << area;
}
int main()
{
    Rectangle a1, a2;
    cout << "\n First rectangle-->\n";
    a1.initialize(10.2, 6.3); 
    a1.disparea();
    cout << "\n\n Second rectangle-->\n";
    a2.initialize(11.2, 8.2); 
    a2.disparea();

    return 0;
}