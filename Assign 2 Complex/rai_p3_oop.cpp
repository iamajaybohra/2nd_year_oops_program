#include<iostream>
using namespace std;
class comp
{
    int real;
    int imag;
public:
    comp()
    {
        real=0;
        imag=0;
    }
    comp(int x,int y)
    {
        real=x;
        imag=y;
    }
    friend istream &operator>>(istream&input,comp&c);
    friend ostream &operator<<(ostream&output,comp&c);
    friend comp operator+(comp&c1,comp&c2);
    friend comp operator-(comp&c1,comp&c2);
    comp operator*(comp&c2)
    {
        comp c3;
        c3.real=real*c2.real;
        c3.imag=imag*c2.imag;
        return c3;
    }
    comp operator/(comp&c2)
    {
        comp c3;
        c3.real=real/c2.real;
        c3.imag=imag/c2.imag;
        return c3;
    }
};
istream &operator>>(istream&input,comp&c)
{
    cout<<"PLz Enter the Real and imaginary part of complex Number\n";
    input>>c.real;
    input>>c.imag;
    return input;
}
ostream &operator<<(ostream&output,comp&c)
{
    output<<"The Complex no is\n";
    output<<c.real<<"+ "<<"i"<<c.imag<<"\n";
    return output;
}
comp operator+(comp&c1,comp&c2)
{
    comp c3;
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    return c3;
}
comp operator-(comp&c1,comp&c2)
{
    comp c3;
    c3.real=c1.real-c2.real;
    c3.imag=c1.imag-c2.imag;
    return c3;
}
int main()
{
    int x,y,ch;
    cout<<"PLzz Enter the Values of real and imaginary part\nOtherwise it Will set to its default value\n";
    cin>>x>>y;
    comp c1(x,y);
    comp c2,c3;
    cout<<c1;
    cout<<"Enter Details of second complex Number\n";
    cin>>c2;
    cout<<c2;
    do
    {
        cout<<"\t::::::::Menu:::::::::\n";
        cout<<"1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.exit\n";
        cin>>ch;
        switch(ch)
        {
        case 1: c3=c1+c2;
                cout<<c3;
                break;
        case 2: c3=c1-c2;
                cout<<c3;
                break;
        case 3: c3=c1*c2;
                cout<<c3;
                break;
        case 4: c3=c1/c2;
                cout<<c3;
                break;
        case 5: cout<<"THank You!!\n";
                break;
        default:cout<<"Wrong Choice\n";
                break;

        }
    }while(ch!=5);

}

