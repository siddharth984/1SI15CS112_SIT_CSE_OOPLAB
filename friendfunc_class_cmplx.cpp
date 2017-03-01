#include<iostream>
#include<iomanip>
using namespace std;

class Complex
{
	private:
		int iReal;
		int iImag;
	public:
		void getData(void);
		friend void addComplex(Complex,Complex);
		friend void subtractComplex(Complex,Complex);
};

void Complex::getData(void)
{
	cout<<"\nEnter real and imaginary parts of complex number"<<endl;
	cin>>iReal>>iImag;
}

void addComplex(Complex a,Complex b)
{	Complex sum;
	sum.iReal=a.iReal+b.iReal;
	sum.iImag=a.iImag+b.iImag;
	
	cout<<"\nSum is "<<sum.iReal<<"+i"<<sum.iImag<<endl;
}

void subtractComplex(Complex a,Complex b)
{
	Complex subb;
	subb.iReal=a.iReal-b.iReal;
	subb.iImag=a.iImag-b.iImag;
int main()
{
	Complex c1,c2;
	c1.getData();
	c2.getData();
	addComplex(c1,c2);
	subtractComplex(c1,c2);
	cin.get();
	return 0;
}
