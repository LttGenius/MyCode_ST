#include <iostream>
using namespace std;

struct CandyBar{
    char name[21];
    double weight;
    int calore;
};

int main()
{
    void f(const CandyBar &c);
void f(CandyBar &c,const char *str,const double w,const int ca);
    CandyBar c;
    char n[21];
    double w;
    int ca;
    cout<<"Input name:";
    cin>>n;
    cout<<"Input weight:";
    cin>>w;
    cout<<"Input calore:";
    cin>>ca;
    f(c,n,w,ca);
    f(c);
    return 0;

}

void f(CandyBar &c,const char *str,const double w,const int ca)
{
    int i=0;
    while(*str)
    {
        c.name[i]=*str;
        str++;
        i++;
    }
    c.weight=w;
    c.calore=ca;
}

void f(const CandyBar &c)
{
    cout<<"CandyBar name:"<<c.name<<endl;
    cout<<"CandyBar weight:"<<c.weight<<endl;
    cout<<"CandyBar calore:"<<c.calore<<endl;
}