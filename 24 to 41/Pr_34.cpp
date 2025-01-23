#include <iostream>
using namespace std;

float circleArea(float rad)
{
    float area = 3.14 * rad * rad;
    return area;
}

int main()
{
    float radius;
    cout << "Enter radius of circle : ";
    cin >> radius;

    float area = circleArea(radius);
    cout << "Area of the circle is :" << area << endl;

    return 0;
}