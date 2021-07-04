#include <iostream>
#include <conio.h>

using namespace std;

class complex{
       float a,b;
    public:
       void input();
       void show();
       complex operator+(complex);
       complex operator-(complex);
       complex operator*(complex);
};

void complex :: input(){
    cout<<"Enter your number : ";
    cin>>a;
    cin>>b;
}

void complex :: show(){
    if(b>0)
       cout<<a<<"+"<<b<<" i\n";
    else if(b<0)
       cout<<a<<b<<" i\n";
    else 
       cout<<a<<endl;
}

complex complex :: operator+(complex p){
    complex temp;
    temp.a = this -> a + p.a;
    temp.b = this -> b + p.b;
    return temp;
}

complex complex :: operator-(complex p1){
    complex temp;
    temp.a = this -> a - p1.a;
    temp.b = this -> b - p1.b;
    return temp;
}

complex complex :: operator*(complex p2){
    complex temp;
    temp.a = this -> a * p2.a;
    temp.b = this -> b * p2.b;
    return temp;
}

int main(){
    complex x,y,z,m,j;
    x.input();
    y.input();

    z = x + y;
    m = x - y;
    j = x * y;

    cout<<"SUM : ";z.show();
    cout<<"MIN : ";m.show();
    cout<<"* : ";j.show();

    getch();
    return 0;
}