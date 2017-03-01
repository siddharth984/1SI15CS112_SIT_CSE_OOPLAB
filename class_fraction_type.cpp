#include<cstdlib>
#include<cmath>
#include<iostream>
using namespace std;

class FRACTION_TYPE
{
	int iDen;
	int iNum;
	public:
	void fnSet_Fraction(int,int);
	void fnShow_Fraction();
	void fnAdd_Fraction(FRACTION_TYPE);
	void fnReduce_Fraction();
};
void FRACTION_TYPE::fnSet_Fraction(int iN,int iD)
{
	iNum=iN;
	iDen=iD;
}

void FRACTION_TYPE::fnShow_Fraction()
{
	cout<<"The fraction is "<<iNum<<"/"<<iDen;
}

void FRACTION_TYPE::fnAdd_Fraction(FRACTION_TYPE f2)
{
	FRACTION_TYPE f3;
	f3.iNum=(iNum*f2.iDen)+(iDen*f2.iNum);
	f3.iDen=(iDen*f2.iDen);
	
	cout<<"\nThe sum is ";
	f3.fnShow_Fraction();
	f3.fnReduce_Fraction();
	
	cout<<"\nThe simplified form is ";
	f3.fnShow_Fraction();
}

int main()
{
	FRACTION_TYPE f1,f2;
	cout<<"\nEnter the first fraction";
	cin>>iN>>iD;
	f1.fnSet_Fraction(iN,iD);
	f1.fnShow_Fraction();
	
	cout<<"\nEnter the second fraction";
	cin>>iN>>iD;
	f2.fnSet_Fraction(iN,iD);
	f2.fnShow_Fraction();
	return 0;
}

void FRACTION_TYPE::fnReduce_Fraction();
{
	int iVal;
	iVal=gcd(iNum,iDen);
	iNum=iNum/iVal;
	iDen=iDen/iVal;
}
int gcd(int m,int n)
{
	if (n==0)
	return m;
	else 
	return(gcd,(n,m%n));
}
