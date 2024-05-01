//********Staic Memory Allocation***********
/*constructor • Special member function of the class
• Name of function is same as class name
• Do not have return type, not even void
• The contractor is called automatically when new object of class is created
• it is mainly used for data member initialization
• Types (1) default constructor (2) parameter constructor (3) copy constructor

default constructor:• Do not have any parameter
                    • Set data members to some default value

copy constructor:• Take one object of that class as parameter
• Copy the values of all data members from the object received as parameters
• Class which has copy constructor, it must has default contructor
*/
#include<iostream>
using namespace std;
int i=0;
class circleArea
{

        int radius;

    public:
        circleArea()//********Default constructor
        {
            radius=1;
            i++;
        }
        circleArea(int y)//*****Parameteris Constructor
        {
            radius=y;
            i++;
        }
        circleArea(circleArea &A)//********Copy Constructor:copy the data from other object
        {
            radius=A.radius;
            i++;
        }
        ~circleArea()
        {
            i--;
            cout<<"One Object Is Deleted "<<endl;
            cout<<"Total Active Object Are :"<<i<<endl;
        }
        void display()//Make a function to display output
        {
            cout<<"Cirle With Radius "<<radius<<"has area"<<3.14*radius*radius<<endl;
        }
};

 int main()
{
    class circleArea p;//***Creating a object 
    class circleArea u(20);
    class circleArea v(u);

    p.display();
    u.display();
    v.display();


return 0;
}