#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<cstring>
using namespace std;
int count=0;
 float sumexp=0;
class employ
{
    private:
    int id;
    string name ;
    string  qulification;
    float exp;
    long long number;

    public:
    employ(){
           count++;
          }
    void getdata()
    {
        cout<<"enter id:";
        cin>>id;
        cout<<"enter name:";
        fflush(stdin);
        getline(cin,name);
        cout<<"enter qulification:";
        cin>>qulification;
        cout<<"enter expirians:";
        cin>>exp;
        cout<<"enter concat number:";
        cin>>number;
        cout<<"\n\n";
        sumexp=sumexp+exp;

    }
     static void sum()
     {
            cout<<"averge exp :";
            cout<<sumexp/count<<endl;
     }

    int putdata(int x)
    {

            if(id==x)
       {
            cout<<"employ name :"<<name<<endl<<"qulification :"<<qulification<<endl<<"expirians"<<exp  <<endl<<"contac number:"<<number<<endl;

          return 1;
       }
         else
        return 0;

    }
};
int main()
{
    int n,serchid,c,i,choice,m;
    char ch;
    cout<<"enter a number of employ";
    cin>>n;
    class employ e[n],*a;

    for(i=0;i<n;i++)
    {
        e[i].getdata();
    }
    do{

      cout<<"enter 1 to serch id:\n enter 2 to average exp: \n  \n";
      cin>>choice;
      switch(choice)
      {
      case 1:

        cout<<"enter serch id:";
        cin>>serchid;
        for(i=0;i<n;i++)
    {
       c= e[i].putdata(serchid);
        if(c==1)
         break;
    }
    if(i==n)
    cout<<"erorr"<<endl;

    break;
      case 2:
         employ::sum();

    break;
    }
     cout<<"again serch and average exp see enter to (y)= ";
    cin>>ch;
    }
    while(ch=='y');

return 0;
}
