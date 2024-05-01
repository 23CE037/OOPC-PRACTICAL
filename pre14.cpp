#include<iostream>
#include<iomanip>
using namespace std;

class literature{
    int id;
    string title;
    protected:
    void getdata(){
        cout<<"Enter ID : ";
        cin>>id;
        cout<<"Enter Title : ";
        fflush(stdin);
        getline(cin,title);
        fflush(stdin);
    }
    void putdata(){
        cout<<setw(10)<<left<<id<<setw(40)<<left<<title;
    }
};

class e_literature:public virtual literature{
    string doi;
    protected:
    void getdata(){
        cout<<"Enter DOI : ";
        cin>>doi;
    }
    void putdata(){
        cout<<doi<<endl;
    }
};

class hb_literature:public virtual literature{
    int copies;
    protected:
    void getdata(){
        cout<<"Enter stock copies : ";
        cin>>copies;
    }
    void putdata(){
        cout<<copies<<"copies"<<endl;
    }
};

class book:public e_literature,public hb_literature{
    char sign;
    int isbn;
    public:
    void getdata(){
        literature::getdata();
        cout<<"Enter ISBN : ";
        cin>>isbn;
        l1:
        cout<<"Enter (e)e literature or (h)hard bound literature : ";
        cin>>sign;
        if(sign=='e' || sign=='E'){
            e_literature::getdata();
        }
        else if(sign=='h' || sign=='H'){
            hb_literature::getdata();
        }
        else{
            cout<<"Enter valid character."<<endl;
            goto l1;
        }
    }
    void putdata(){
        literature::putdata();
        cout<<setw(10)<<left<<isbn;
        if(sign=='e' || sign=='E'){
            e_literature::putdata();
        }
        else{
            hb_literature::putdata();
        }
    }
};

class magazine:public e_literature,public hb_literature{
    char sign;
    int issn;
    public:
    void getdata(){
        literature::getdata();
        cout<<"Enter ISSN : ";
        cin>>issn;
        l1:
        cout<<"Enter (e)e literature or (h)hard bound literature : ";
        cin>>sign;
        if(sign=='e' || sign=='E'){
            e_literature::getdata();
        }
        else if(sign=='h' || sign=='H'){
            hb_literature::getdata();
        }
        else{
            cout<<"Enter valid character."<<endl;
            goto l1;
        }
    }
    void putdata(){
        literature::putdata();
        cout<<setw(10)<<left<<issn;
        if(sign=='e' || sign=='E'){
            e_literature::putdata();
        }
        else{
            hb_literature::putdata();
        }
    }
};

int main(){
    int n;
    book b[10];
    magazine m[10];
    int b_count=0,m_count=0;
    l1:
    cout<<"Enter 1 : Add book data"<<endl<<"Enter 2 : Add magazine data"<<endl<<"Enter 3 : List all books"<<endl<<"Enter 4 : List all magazines"<<endl;
    cin>>n;
    if(n!=1 && n!=2  && n!=3 && n!=4){
        cout<<"Enter valid number."<<endl;
        goto l1;
    }
    switch(n){
        case 1:
            b[b_count++].getdata();
            break;
        case 2:
            m[m_count++].getdata();
            break;
        case 3:
            if(b_count==0){
                cout<<"Data not found."<<endl<<endl;
                goto l1;
            }
            cout<<"List of All books..."<<endl<<endl;
            for(int i=0;i<b_count;i++){
                b[i].putdata();
            }
            break;
        case 4:
            if(m_count==0){
                cout<<"Data not found."<<endl<<endl;
                goto l1;
            }
            cout<<"List of All magazines..."<<endl<<endl;
            for(int i=0;i<m_count;i++){
                m[i].putdata();
            }
            break;
    }
    char c;
    cout<<"Enter 'Y' if you want another response : ";
    cin>>c;
    if(c=='y' || c=='Y') goto l1;
return 0;
}
