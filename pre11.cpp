//Class TO Basic Conversion
#include <iostream>
using namespace std;
class experience
{
 int year ;
float exp ,month;
public:
 experience()
 {
 exp=0;
 }
 void getdata()
 {
 cout<<"ENTER THE EMP EXPERIENCE YEAR:";
 cin>>year;
 cout<<"ENTER THE MONTH :";
 cin>>month ;
 exp = year + ( month / 12);
 }
 operator float() const {
 return exp;
 }
};
int main()
{
 experience obj;
 obj.getdata();
 float totalexp = (obj);
 cout<<"YOUR TOTAL EXPERIENCE IS "<<totalexp;
 return 0;
}
