#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){

    char id[8];
    char name[20];
    int sem,i,j,credit=9;
    int g1=0,g2=0,g3=0,g4=0,g5=0,g6=0;
    float sgpa;
    int th[3];
    int pr[3];

    cout<<"enter student id";
    cin>>id;
    cout<<"enter student name";
    cin>>name;
    cout<<"enter sem";
    cin>>sem;
    for(i=0;i<3;i++){

    cout<<"enter com,be and pc theory mark";
    cin>>th[i];
    }
    for(i=0;i<3;i++){

    cout<<"enter com,be and pc prectical mark";
    cin>>pr[i];
    }
    cout<<endl;
    cout<<"---------------------------"<<endl;
    cout<<endl;
    cout<<"Student ID      : "<<id<<endl;
    cout<<"Student Name    : "<<name<<endl;
    cout<<"Student Semester: "<<sem<<endl;
    cout<<setw(38)<<"Theory"<<setw(15)<<"Practical"<<endl;
    cout<<"compputer programming"<<endl;


    for(i=0;i<1;i++){

        if(th[i]>=80){
            cout<<setw(36)<<"AA"<<endl;
            g1=10;
        }
        else if(th[i]>=73){
            cout<<setw(36)<<"AB"<<endl;
            g1=9;
        }
        else if(th[i]>=66){
            cout<<setw(36)<<"BB"<<endl;
            g1=8;
        }
        else if(th[i]>=60){
            cout<<setw(36)<<"BC"<<endl;
            g1=7;
        }
        else if(th[i]>=55){
            cout<<setw(36)<<"CC"<<endl;
            g1=6;
        }
        else if(th[i]>=50){
            cout<<setw(36)<<"CD"<<endl;
            g1=5;
        }
        else if(th[i]>=45){
            cout<<setw(36)<<"DD"<<endl;
            g1=4;
        }
        else{
            cout<<setw(36)<<"FF"<<endl;
            g1=0;
        }
        for(j=0;j<1;j++){

        if(pr[i]>=80){
            cout<<setw(50)<<"AA"<<endl;
            g2=10;
        }
        else if(pr[i]>=73){
            cout<<setw(50)<<"AB"<<endl;
            g2=9;
        }
        else if(pr[i]>=66){
            cout<<setw(50)<<"BB"<<endl;
            g2=8;
        }
        else if(pr[i]>=60){
            cout<<setw(50)<<"BC"<<endl;
            g2=7;
        }
        else if(pr[i]>=55){
            cout<<setw(50)<<"CC"<<endl;
            g2=6;
        }
        else if(pr[i]>=50){
            cout<<setw(50)<<"CD"<<endl;
            g2=5;
        }
        else if(pr[i]>=45){
            cout<<setw(50)<<"DD"<<endl;
            g2=4;
        }
        else{
            cout<<setw(50)<<"FF"<<endl;
            g2=0;
        }
        }
        }
        cout<<"basic or electronics"<<endl;
        for(i=1;i<2;i++){

        if(th[i]>=80){
            cout<<setw(36)<<"AA"<<endl;
            g3=10;
        }
        else if(th[i]>=73){
            cout<<setw(36)<<"AB"<<endl;
            g3=9;
        }
        else if(th[i]>=66){
            cout<<setw(36)<<"BB"<<endl;
            g3=8;
        }
        else if(th[i]>=60){
            cout<<setw(36)<<"BC"<<endl;
            g3=7;
        }
        else if(th[i]>=55){
            cout<<setw(36)<<"CC"<<endl;
            g3=6;
        }
        else if(th[i]>=50){
            cout<<setw(36)<<"CD"<<endl;
            g3=5;
        }
        else if(th[i]>=45){
            cout<<setw(36)<<"DD"<<endl;
            g3=4;
        }
        else{
            cout<<setw(36)<<"FF"<<endl;
            g3=0;
        }
        for(j=0;j<1;j++){

        if(pr[i]>=80){
            cout<<setw(50)<<"AA"<<endl;
            g4=10;
        }
        else if(pr[i]>=73){
            cout<<setw(50)<<"AB"<<endl;
            g4=9;
        }
        else if(pr[i]>=66){
            cout<<setw(50)<<"BB"<<endl;
            g4=8;
        }
        else if(pr[i]>=60){
            cout<<setw(50)<<"BC"<<endl;
            g4=7;
        }
        else if(pr[i]>=55){
            cout<<setw(50)<<"CC"<<endl;
            g4=6;
        }
        else if(pr[i]>=50){
            cout<<setw(50)<<"CD"<<endl;
            g4=5;
        }
        else if(pr[i]>=45){
            cout<<setw(50)<<"DD"<<endl;
            g4=4;
        }
        else{
            cout<<setw(50)<<"FF"<<endl;
            g4=0;
        }
        }
        }
        cout<<"professional communication"<<endl;
         for(i=2;i<3;i++){

        if(th[i]>=80){
            cout<<setw(36)<<"AA"<<endl;
            g5=10;
        }
        else if(th[i]>=73){
            cout<<setw(36)<<"AB"<<endl;
            g5=9;
        }
        else if(th[i]>=66){
            cout<<setw(36)<<"BB"<<endl;
            g5=8;
        }
        else if(th[i]>=60){
            cout<<setw(36)<<"BC"<<endl;
            g5=7;
        }
        else if(th[i]>=55){
            cout<<setw(36)<<"CC"<<endl;
            g5=6;
        }
        else if(th[i]>=50){
            cout<<setw(36)<<"CD"<<endl;
            g5=5;
        }
        else if(th[i]>=45){
            cout<<setw(36)<<"DD"<<endl;
            g5=4;
        }
        else{
            cout<<setw(36)<<"FF"<<endl;
            g5=0;
        }
        for(j=0;j<1;j++){

        if(pr[i]>=80){
            cout<<setw(50)<<"AA"<<endl;
            g6=10;
        }
        else if(pr[i]>=73){
            cout<<setw(50)<<"AB"<<endl;
            g6=9;
        }
        else if(pr[i]>=66){
            cout<<setw(50)<<"BB"<<endl;
            g6=8;
        }
        else if(pr[i]>=60){
            cout<<setw(50)<<"BC"<<endl;
            g6=7;
        }
        else if(pr[i]>=55){
            cout<<setw(50)<<"CC"<<endl;
            g6=6;
        }
        else if(pr[i]>=50){
            cout<<setw(50)<<"CD"<<endl;
            g6=5;
        }
        else if(pr[i]>=45){
            cout<<setw(50)<<"DD"<<endl;
            g6=4;
        }
        else{
            cout<<setw(50)<<"FF"<<endl;
            g6=0;
        }
        }
        }
        sgpa=((g1+g2+g3+g4+g5+g6)/6);
        cout<<"sgpa is ="<<sgpa;
        return 0;
}
