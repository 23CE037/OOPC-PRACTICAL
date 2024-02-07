#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char student_id[8];
    char student_name[15];
    int semester;
    int cp1,cp2,be1,be2,pc1,pc2;
    int g1,g2,g3,g4,g5,g6;
    int grade,sum=0;
    float sgpa;
    cout<<"Student ID      : ";
    cin>>student_id;
    cout<<"Student Name    : ";
    cin>>student_name;
    cout<<"Student Semester: ";
    cin>>semester;
    cout<<"Computer Programming Theory Mark          :";
    cin>>cp1;
    cout<<"Computer Programming Practical Mark       :";
    cin>>cp2;
    cout<<"Basics of Electronics Theory Mark         :";
    cin>>be1;
    cout<<"Basics of Electronics Practical Mark      :";
    cin>>be2;
    cout<<"Professional Communication Theory Mark    :";
    cin>>pc1;
    cout<<"Professional Communication Practical Mark :";
    cin>>pc2;
    cout<<endl;
    cout<<"---------------------------"<<endl;
    cout<<endl;
    cout<<"Student ID      : "<<student_id<<endl;
    cout<<"Student Name    : "<<student_name<<endl;
    cout<<"Student Semester: "<<semester<<endl;
    cout<<setw(38)<<"Theory"<<setw(15)<<"Practical"<<endl;
    cout<<"Computer Programming";
    if(cp1>=80)
    {
        cout<<setw(15)<<"AA";
        g1=50;
    }
    else if(cp1>=73&&cp1<80)
    {
        cout<<setw(15)<<"AB";
        g1=45;
    }
    else if(cp1>=66&&cp1<73)
    {
        cout<<setw(15)<<"BB";
        g1=40;
    }
    else if(cp1>=60&&cp1<66)
    {
        cout<<setw(15)<<"BC";
        g1=35;
    }
    else if(cp1>=55&&cp1<60)
    {
        cout<<setw(15)<<"CC";
        g1=30;
    }
    else if(cp1>=50&&cp1<55)
    {
        cout<<setw(15)<<"CD";
        g1=25;
    }
    else if(cp1>=45&&cp1<50)
    {
        cout<<setw(15)<<"DD";
        g1=20;
    }
    else
    {
        cout<<setw(15)<<"FF";
        g1=0;
    }

    if(cp2>=80)
    {
        cout<<setw(15)<<"AA";
        g2=50;
    }
    else if(cp2>=73&&cp2<80)
    {
        cout<<setw(15)<<"AB";
        g2=45;
    }
    else if(cp2>=66&&cp2<73)
    {
        cout<<setw(15)<<"BB";
        g2=40;
    }
    else if(cp2>=60&&cp2<66)
    {
        cout<<setw(15)<<"BC";
        g2=35;
    }
    else if(cp2>=55&&cp2<60)
    {
        cout<<setw(15)<<"CC";
        g2=30;
    }
    else if(cp2>=50&&cp2<55)
    {
        cout<<setw(15)<<"CD";
        g2=25;
    }
    else if(cp2>=45&&cp2<50)
    {
        cout<<setw(15)<<"DD";
        g2=20;
    }
    else
    {
        cout<<setw(15)<<"FF";
        g2=0;
    }
    cout<<endl;

    cout<<"Basics of Electronics";
    if(be1>=80)
    {
        cout<<setw(14)<<"AA";
        g3=40;
    }
    else if(be1>=73&&be1<80)
    {
        cout<<setw(14)<<"AB";
        g3=36;
    }
    else if(be1>=66&&be1<73)
    {
        cout<<setw(14)<<"BB";
        g3=32;
    }
    else if(be1>=60&&be1<66)
    {
        cout<<setw(14)<<"BC";
        g3=28;
    }
    else if(be1>=55&&be1<60)
    {
        cout<<setw(14)<<"CC";
        g3=24;
    }
    else if(be1>=50&&be1<55)
    {
        cout<<setw(14)<<"CD";
        g3=20;
    }
    else if(be1>=45&&be1<50)
    {
        cout<<setw(14)<<"DD";
        g3=16;
    }
    else
    {
        cout<<setw(14)<<"FF";
        g3=0;
    }

        if(be2>=80)
        {
        cout<<setw(15)<<"AA";
        g4=40;
        }
    else if(be2>=73&&be2<80)
    {
        cout<<setw(15)<<"AB";
        g4=36;
    }
    else if(be2>=66&&be2<73)
    {
        cout<<setw(15)<<"BB";
        g4=32;
    }
    else if(be2>=60&&be2<66)
    {
        cout<<setw(15)<<"BC";
        g4=28;
    }
    else if(be2>=55&&be2<60)
    {
        cout<<setw(15)<<"CC";
        g4=24;
    }
    else if(be2>=50&&be2<55)
    {
        cout<<setw(15)<<"CD";
        g4=20;
    }
    else if(be2>=45&&be2<50)
    {
        cout<<setw(15)<<"DD";
        g4=16;
    }
    else
    {
        cout<<setw(15)<<"FF";
        g4=0;
    }
    cout<<endl;

    cout<<"Professional Communication";
    if(pc1>=80)
    {
        cout<<setw(9)<<"AA";
        g5=10;
    }
    else if(pc1>=73&&pc1<80)
    {
        cout<<setw(9)<<"AB";
        g5=9;
    }
    else if(pc1>=66&&pc1<73)
    {
        cout<<setw(9)<<"BB";
        g5=8;
    }
    else if(pc1>=60&&pc1<66)
    {
        cout<<setw(9)<<"BC";
        g5=7;
    }
    else if(pc1>=55&&pc1<60)
    {
        cout<<setw(9)<<"CC";
        g5=6;
    }
    else if(pc1>=50&&pc1<55)
    {
        cout<<setw(9)<<"CD";
        g5=5;
    }
    else if(pc1>=45&&pc1<50)
    {
        cout<<setw(9)<<"DD";
        g5=4;
    }
    else
    {
        cout<<setw(9)<<"FF";
        g5=0;
    }

        if(pc2>=80)
        {
        cout<<setw(15)<<"AA";
        g6=10;
        }
    else if(pc2>=73&&pc2<80)
    {
        cout<<setw(15)<<"AB";
        g6=9;
    }
    else if(pc2>=66&&pc2<73)
    {
        cout<<setw(15)<<"BB";
        g6=8;
    }
    else if(pc2>=60&&pc2<66)
    {
        cout<<setw(15)<<"BC";
        g6=7;
    }
    else if(pc2>=55&&pc2<60)
    {
        cout<<setw(15)<<"CC";
        g6=6;
    }
    else if(pc2>=50&&pc2<55)
    {
        cout<<setw(15)<<"CD";
        g6=5;
    }
    else if(pc2>=45&&pc2<50)
    {
        cout<<setw(15)<<"DD";
        g6=4;
    }
    else
    {
        cout<<setw(15)<<"FF";
        g6=0;
    }
    cout<<endl;
    grade=g1+g2+g3+g4+g5+g6;
    sum=sum+grade;
    sgpa=(sum/10)/2;
    cout<<fixed<<setprecision(2)<<sgpa<<endl;
    cout<<endl;
    cout<<"23CE037 "<<"ADITYA_GOHEL";
}
