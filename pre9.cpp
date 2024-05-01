#include <iostream>
using namespace std;
class cmtomm;
class mmtocm {
private:
 float mm;
public:
 void geta() {
 cout << "ENTER THE NUMBER YOU WOULD LIKE TO CONVERT :";
 cin >> mm;
 }
 float transfermm() {
 return mm;
 }
 mmtocm() {
 mm = 0;
 }
 mmtocm(cmtomm &n);
 void putdata() {
 cout << "THE CONVERSION IN MM IS :" << mm << endl;
 }
};
class cmtomm {
private:
 float cm;
public:
 void getdata() {
 cout << "ENTER THE NUMBER YOU WOULD LIKE TO CONVERT :";
 cin >> cm;
 }
 cmtomm() {
 cm = 0;
 }
 float transfercm() {
 return cm;
 }
 cmtomm(mmtocm &n);
 void putcm() {
 cout << "THE CONVERSION IN CM IS :" << cm << endl;
 }
};
mmtocm::mmtocm(cmtomm &n) {
 mm = n.transfercm() * 10;
}
cmtomm::cmtomm(mmtocm &n) {
 cm= n.transfermm() / 10;
}
int main() {
 int x;
 cout << "PRESS-1 : MILLIMETER TO CENTIMETER CONVERSION" << endl;
 cout << "PRESS-2 : CENTIMETER TO MILLIMETER CONVERSION" << endl;
 cout << "YOU PRESSED :";
 cin >> x;
switch (x) {
 case 1: {
 mmtocm obj1;
 obj1.geta();
 cmtomm obj2(obj1);
 obj2.putcm();
 break;
 }
 case 2: {
 cmtomm obj3;
 obj3.getdata();
 mmtocm obj4(obj3);
 obj4.putdata();
 break;
 }
 }
 return 0;
}
