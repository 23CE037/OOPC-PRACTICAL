#include <iostream>
#include <iomanip>
using namespace std;

void AreaCalculation(int r)
{
    cout << 3.14 * r * r << endl;
}
void AreaCalculation(int l, int b)
{
    cout << l * b << endl;
}
void AreaCalculation(int l, int b, int h)
{
    cout << 2 * ((l * b) + (b * h) + (h * l)) << endl;
}
int main()
{
    float a, b, c;
    cout << "Enter the radius of a circle: ";
    cin >> a;
    cout << "The area of a circle is ";
    AreaCalculation(a);
    a = 0;
    cout << "Enter the height of a rectangle: ";
    cin >> a;
    cout << "Enter the width of a rectangle: ";
    cin >> b;
    cout << "The area of a rectangle is ";
    AreaCalculation(a, b);
    a = 0;
    b = 0;
    cout << "Enter the height of a cuboid: ";
    cin >> a;
    cout << "Enter the width of a cuboid: ";
    cin >> b;
    cout << "Enter the depth of a cuboid: ";
    cin >> c;
    cout << "The area of a cuboid is ";// 150 is volume not surface area i have done for area and it will be 190
    AreaCalculation(a, b, c);
    cout<<endl<<"\t 23CE037 "<<"ADITYA_GOHEL";
    return 0;

}
