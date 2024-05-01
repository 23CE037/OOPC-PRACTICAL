
#include<iostream>
using namespace std;

class operation
{
    float n,p;
    char x;
    public:
    void getdata()
    {
    cout<<"Enter real no.";
    cin>>n;
    cout<<"Enter imaginary no.";
    cin>>p;

    }
    void  putdata()
    {
        if(p>0)
        {
        cout<<n<<"+"<<p<<"i";
        }
        else
            cout<<n<<p<<"i";

    }


      operation operator+(operation &b)
      {
          operation t;
          t.n=n+b.n;
          t.p=p+b.p;
          return t;
      }
      operation operator-(operation &b)
      {
          operation t;
          t.n=n-b.n;
          t.p=p-b.p;
          return t;
      }
      operation operator*(operation &b)
      {
          operation t;
          t.n=(n*b.n-p*b.p);
          t.p=(n*b.p+p*b.n);
          return t;
      }
      operation operator/(operation &b)
      {
          operation t;
          t.n=((n*b.n)+(p*b.p))/((b.p*b.p)+(b.n*b.n));
          t.p=((p*b.n)-(n*b.p))/((b.p*b.p)+(b.n*b.n));
          return t;
      }
      operation operator!()
      {
          operation t;
          t.n=-n;
          t.p=-p;
          return t;

      }

};
int main()
{char x;
    class operation a,b,z;
    a.getdata();
    b.getdata();
    cout<<"choose operation:";
    cout<<"("<<"+"<<")"<<" addition";
    cout<<"("<<"-"<<")"<<" subtraction";
    cout<<"("<<"*"<<")"<<" multiplication";
    cout<<"("<<"/"<<")"<<" division";
    cout<<"("<<"!"<<")"<<" negation";
    cout<<endl;
    cin>>x;
    switch(x)
    {
    case '+' :
        {
            z=a+b;
        }
        break;
    case '-':
        {
            z=a-b;
        }
        break;
    case '*':
        {

            z=a*b;
        }
        break;
    case '/':
        {
            z=a/b;
        }
        break;
    case '!':
        {
            z=!a;
            z.putdata();
            z=!b;
        }

    }
    cout<<endl;
    z.putdata();

}

