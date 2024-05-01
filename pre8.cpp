#include <iostream>
using namespace std;
class Employee
{
 string n, Q;
 float e;
 static float avge;
 long long no;
public:
 int id;

 public:
 void getempdata()
 {
 cout << "Enter Name : ";
 cin >> n;
 cout << "Enter Employee Id : ";
 cin >> id;
 cin.ignore();
 cout << "Enter your Qualification : ";
 cin >> Q;
 cin.ignore();
 cout << "Enter Your Experience : ";
 cin >> e;
 cout << "Enter your Contact No. : ";
 cin >> no;
 }
 void putempydata()
 {
 cout << "\n---------------------------------------\n";
 cout << " Name \t\t\t : " << n << "\n";
 cout << " Qualification \t\t : " << Q << "\n";
 cout << " Experience \t\t : " << e << "\n";
 cout << " Contact No. \t\t : " << no << "\n";
 }
 static void avgexp()
 {
 avge += avge;
 }
};
class TeachingEmp : virtual public Employee
{
 string Designation, Specialization, Payscale;
public:
 void Getempdata()
 {
 cout << "Enter Designation : ";
 cin >> Designation;
 cout << "Enter your Specialization : ";
 cin >> Specialization;
 cin.ignore();
 cout << "Enter your Pay Scale : ";
 cin >> Payscale;
 cin.ignore();
 }
 void Putempydata()
 {
 cout << " Designation \t\t : " << Designation << "\n";
 cout << " Specialization \t : " << Specialization << "\n";
 cout << " Pay Scale \t\t : " << Payscale << "\n";
 }
};
class NonTeachingEmployee : virtual public Employee
{
 long long salary;
public:
 void getntempdata()
 {
 cout << "Enter your Salary : ";
 cin >> salary;
 }
 void putntempdata()
 {
 cout << "Salary : " << salary << "\n";
 cout << "\n---------------------------------------\n";
 }
};
int main()
{
 int x, eid, z, c;
 cout << "Enter the no. of Entry of Employee : ";
 cin >> x;
 Employee e[x];
 TeachingEmp te[x];
 NonTeachingEmployee nte[x];
 for (int i = 0; i < x; i++)
 {
 e[i].getempdata();
 te[i].Getempdata();
 nte[i].getntempdata();
 }
L:
c=0;
 cout << "Enter an Employee ID ";
 cin >> eid;
 for (int i = 0; i < x; i++)
 {
 if (eid == e[i].id)
{
 e[i].putempydata();
 te[i].Putempydata();
 nte[i].putntempdata();
 c++;
 }
 }
 if( c==0 )
 {
 cout << "\n*\n";
 cout << " \n ERROR : ENTERED EMPOYEE ID DOES NOT EXIST. \n";
 cout << "\n*\n";
 }
 cout << "Enter 7 to get Another Employee details : ";
 cin >> z;
 if (z == 7)
 {
 goto L;
 }
 return 0;
}
