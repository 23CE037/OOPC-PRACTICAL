#include<iostream>
#include<string>
using namespace std;

struct employee {
    int id;
    char Name[20];
    char qualification[100];
    float expirance;
    long long int contect_num;

    void getdata()
    {
        cin>>id;
        cin>>Name;
        cin>>qualification;
        cin>>expirance>>contect_num;
    }
    void putdata()
    {
        cout<<id<<endl<<Name<<endl<<qualification<<endl<<expirance<<endl<<contect_num<<endl;
    }

}e1;
int main(){
    char ch;
    cout<<"enter data like (id,name,qualification,expirance,contect_num) in sequence"<<endl;

   e1.getdata();
   e1.putdata();
   cout<<endl<<"enter employee ID     :";
   cout<<e1.id;
   cout<<endl<<"---------------------------------";
   cout<<endl<<"enter employee name   :";
   cout<<e1.Name;
   cout<<endl<<"qualification         :";
   cout<<e1.qualification;
   cout<<endl<<"expirance             :";
   cout<<e1.expirance;
   cout<<endl<<"contect numder        :";
   cout<<e1.contect_num;
   cout<<endl<<"---------------------------------";
   label:
   cout<<endl<<"enter 'Y' for another employee detail or 'N' for exit"<<endl;
   cin>>ch;

   if(ch=='y'||ch=='Y')
   {
       cout<<endl<<"enter employee ID";
       cin>>e1.id;
       cout<<endl<<"**********************************"<<endl;

        if(e1.id>99 && e1.id<=999){

        cout<<"enter data like (id,name,qualification,expirance,contect_num) in sequence"<<endl;
        e1.getdata();

   }
   else{
    cout<<endl<<"ENTERED EMPLOYEE ID DOSE NOT EXIST";
    cout<<endl<<"**********************************"<<endl;

    return 0;
   }
    }
   else if(ch=='n'||ch=='N'){
        cout<<endl<<"exit";
        return 0;
   }

   goto label;

    return 0;


}
