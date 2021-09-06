#include<iostream>
using namespace std;

class complex
{
private:
double real_part;
double img_part;
public:
complex(){ };
 
complex(double r, double i)
{
real_part = r; img_part = i;
};
char *toString();
void set_comp_No(double r, double i);
complex add(complex);
complex subtract(complex);
complex multiply(complex);
};

char * complex::toString()
{
char *c = new char[100];
if (img_part >= 0)
sprintf(c, "%ld + %ldi", (long)real_part, (long)img_part);
else
sprintf(c, "%ld %ldi", (long)real_part, (long)img_part);
return c;
}

//Setting the complex number
void complex::set_comp_No(double r, double i)
{
real_part = r; img_part = i;
}

//Addition
complex complex::add(complex x)
{
complex z;
z.real_part = real_part + x.real_part;
z.img_part = img_part + x.img_part;
return z;
}

//Subtraction
complex complex::subtract(complex x)
{
complex z;
z.real_part = real_part - x.real_part;
z.img_part = img_part - x.img_part;
return z;
}

int main()
{
//Pass the arguments
double r1,r2,i1,i2;
cout << "Enter first real part,first imaginary part:";
cin >> r1>>i1;
cout<<"Enter second real part and second imaginary part:";
cin>>r2>>i2;
complex c1(r1,i1), c2;
complex a, s, m;
c2.set_comp_No(r2,i2);

a = c1.add(c2);
cout << "Addition of complex numbers: c1 + c2 = " << a.toString() << endl;

s = c1.subtract(c2);
cout << "Subtraction of complex numbers: c1 - c2 = " << s.toString() << endl;

cout << "Complex number 1 : " << c1.toString() << endl;
cout << "Complex number 2 : " << c2.toString() << endl;
return 0;
}