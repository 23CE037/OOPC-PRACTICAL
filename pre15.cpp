#include<iostream>
#include<iomanip>
using namespace std;

class product{
    protected:
    int id;
    string name;
    string manufacturer;
    float price;
    public:
    product(int Id,string Name,string Manufacturer,float Price){
        id=Id;
        name=Name;
        manufacturer=Manufacturer;
        price=Price;
    }
    virtual void putdata() = 0;
};

class smartwatch:public product{
    protected:
    float dialsize;
    public:
    smartwatch(int Id,string Name,string Manufactorer,float Price,float Dialsize):product(Id,Name,Manufactorer,Price){
        dialsize=Dialsize;
    }
    void putdata(){
        cout<<id<<" : "<<name<<" : "<<manufacturer<<" : "<<price<<" : "<<dialsize<<endl;
    }
};

class bedsheet:public product{
    protected:
    float height;
    float width;
    public:
    bedsheet(int Id,string Name,string Manufactorer,float Price,float Height,float Width):product(Id,Name,Manufactorer,Price){
        height=Height;
        width=Width;
    }
    void putdata(){
        cout<<endl<<id<<" : "<<name<<" : "<<manufacturer<<" : "<<price<<" : "<<width<<" : "<<height<<endl;
    }
};

int main(){
    int n;
    l1:
    cout<<"Enter 1: smart watch menu"<<"Enter 2: bedsheet menu"<<endl<<"Enter your choice : ";
    cin>>n;
    if(n!=1 && n!=2){
        cout<<"Enter valid case."<<endl;
        goto l1;
    }
    int id;
    string name,manufacturer;
    float price,dialsize,width,height;
    switch(n){
        case 1:
            cout<<"Enter watch data : "<<endl<<endl;
            cout<<"Enter product id : ";
            cin>>id;
            cout<<"Enter product name : ";
            fflush(stdin);
            getline(cin,name);
            fflush(stdin);
            cout<<"Enter product manufacturer : ";
            getline(cin,manufacturer);
            fflush(stdin);
            cout<<"Enter product price : ";
            cin>>price;
            cout<<"Enter product dial size : ";
            cin>>dialsize;
            smartwatch *p1;
            p1=new smartwatch(id,name,manufacturer,price,dialsize);
            p1->putdata();
            break;
        case 2:
            cout<<"Enter bedsheet data : "<<endl<<endl;
            cout<<"Enter product id : ";
            cin>>id;
            cout<<"Enter product name : ";
            fflush(stdin);
            getline(cin,name);
            fflush(stdin);
            cout<<"Enter product manufacturer : ";
            getline(cin,manufacturer);
            fflush(stdin);
            cout<<"Enter product price : ";
            cin>>price;
            cout<<"Enter bedsheet width : ";
            cin>>width;
            cout<<"Enter bedsheet height : ";
            cin>>height;
            bedsheet *p2;
            p2=new bedsheet(id,name,manufacturer,price,height,width);
            p2->putdata();
            break;
                }
return 0;
}
