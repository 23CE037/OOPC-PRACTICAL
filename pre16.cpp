#include<iostream>
#include<string.h>
#include<iomanip>
#include<fstream>
#include <cstring>
#include <string>
using namespace std;

string chararrayToString(char* a, int size){
    int i;
    string s = "";
    for (i = 0; i < size; i++) {
        s = s + a[i];
    }
    return s;
}

int main(){
    ifstream f;
    string s;
    f.open("cardata.txt",ios::in);
    class car{
        char name[30];
        char fuel[30];
        float price;
        float mileage;
        char transmission[10];
        float tankCapacity;
        int seat;
        char airbags[5];
        public:
        void getdata(ifstream &f){
            string s;
            getline(f,s,',');
            for(int i=0;i<s.size();i++){
                name[i]=s[i];
            }
            name[s.size()]='\0';
            getline(f,s,',');
            for(int i=0;i<s.size();i++){
                fuel[i]=s[i];
            }
            fuel[s.size()]='\0';
            getline(f,s,',');
            price=stof(s);
            getline(f,s,',');
            mileage=stof(s);
            getline(f,s,',');
            for(int i=0;i<s.size();i++){
                transmission[i]=s[i];
            }
            transmission[s.size()]='\0';
            getline(f,s,',');
            tankCapacity=stof(s);
            getline(f,s,',');
            seat=stoi(s);
            getline(f,s,';');
            for(int i=0;i<s.size();i++){
                airbags[i]=s[i];
            }
            airbags[s.size()]='\0';
        }
        void putdata(){
            cout<<setw(10)<<left<<name<<setw(10)<<left<<fuel<<setw(10)<<left<<price<<setw(10)<<left<<mileage<<setw(15)<<left<<transmission<<setw(14)<<left<<tankCapacity<<setw(10)<<left<<seat<<setw(10)<<left<<airbags<<endl;
        }
        char* putname(){
            char* _name=name;
            return _name;
        }
        char* putfuel(){
            char* _fuel=fuel;
            return _fuel;
        }
        float putprice(){
            return price;
        }
    };
    int n=7;
    car c[n];
    for(int i=0;i<n;i++){
        c[i].getdata(f);
    }
    l:
    cout<<endl;
    cout<<"WELCOME TO TATA MOTORS"<<endl<<"GET THE CAR DETAILS AS PER YOUR PREFERENCE"<<endl;
    cout<<"(1)Model Name (2)Fuel Type (3)Price Range"<<endl;
    int opinion;
    cout<<"ENTER YOUR OPINION : ";
    l1:
    cin>>opinion;
    if(opinion!=1 && opinion!=2 && opinion!=3){
        cout<<"Sorry Enter valid Number Provided to you : ";
        goto l1;
    }
    cout<<"----------------------------------"<<endl;
    if(opinion==1){
         for(int i=0;i<n;i++){
                cout<<"("<<i+1<<")"<<c[i].putname()<<"   ";
        }
            cout<<endl<<"CHOOSE YOUR CAR TO GET DETAILS : ";
            l2:
            int opinion1;
            cin>>opinion1;
            if(opinion1<1 || opinion1>n){
                cout<<"Enter valid car number : ";
                goto l2;
            }
            int index=--opinion1;
            cout<<setw(10)<<left<<"Model"<<setw(10)<<left<<"Fuel"<<setw(10)<<left<<"Price"<<setw(10)<<left<<"Mileage"<<setw(15)<<left<<"Transmission"<<setw(14)<<left<<"TankCapacity"<<setw(10)<<left<<"Seating"<<setw(10)<<left<<"Airbags"<<endl;
            cout<<setw(20)<<" "<<setw(10)<<left<<"(Lakhs)"<<setw(10)<<left<<"(km/L)"<<setw(15)<<left<<" "<<setw(14)<<left<<"(Liters)"<<setw(10)<<left<<"Capacity"<<endl;
            c[index].putdata();
    }
    else if(opinion==2){
        cout<<"TATA MOTORS ARE AVAILABLE WITH FUEL OPTIONS "<<endl;
            cout<<"(1)Petrol (2)Diesel (3)CNG (4)Electric"<<endl;
            cout<<"ENTER YOUR FUEL PREFERENCE : ";
            l3:
            int opinion2;
            cin>>opinion2;
            if(opinion2>4 || opinion2<1){
                cout<<"Enter Valid fuel number : ";
                goto l3;
            }
            char fuel1[30];
            if(opinion2==1) strcpy(fuel1,"petrol");
            else if(opinion2==2) strcpy(fuel1,"diesel");
            else if(opinion2==3) strcpy(fuel1,"cng");
            else if(opinion2==4) strcpy(fuel1,"electric");
            cout<<setw(10)<<left<<"Model"<<setw(10)<<left<<"Fuel"<<setw(10)<<left<<"Price"<<setw(10)<<left<<"Mileage"<<setw(15)<<left<<"Transmission"<<setw(14)<<left<<"TankCapacity"<<setw(10)<<left<<"Seating"<<setw(10)<<left<<"Airbags"<<endl;
            cout<<setw(20)<<" "<<setw(10)<<left<<"(Lakhs)"<<setw(10)<<left<<"(km/L)"<<setw(15)<<left<<" "<<setw(14)<<left<<"(Liters)"<<setw(10)<<left<<"Capacity"<<endl;
            for(int i=0;i<n;i++){
                if(stricmp(c[i].putfuel(), fuel1)==0){
                    c[i].putdata();
                }
            }
    }
    else if(opinion==3){
        cout<<"ENTER YOUR MAXIMUM AFFORDABLE RANGE IN LAKHS : ";
        int lakhs;
        cin>>lakhs;
        cout<<setw(10)<<left<<"Model"<<setw(10)<<left<<"Fuel"<<setw(10)<<left<<"Price"<<setw(10)<<left<<"Mileage"<<setw(15)<<left<<"Transmission"<<setw(14)<<left<<"TankCapacity"<<setw(10)<<left<<"Seating"<<setw(10)<<left<<"Airbags"<<endl;
        cout<<setw(20)<<" "<<setw(10)<<left<<"(Lakhs)"<<setw(10)<<left<<"(km/L)"<<setw(15)<<left<<" "<<setw(14)<<left<<"(Liters)"<<setw(10)<<left<<"Capacity"<<endl;
        for(int i=0;i<n;i++){
            if(c[i].putprice()<lakhs){
                c[i].putdata();
            }
        }
    }
    char isExit;
    cout<<"Enter Y if u want Details again : ";
    cin>>isExit;
    if(isExit=='Y' || isExit=='y') goto l;
    return 0;
}
