#include<iostream>
#include<cstring>
#include"bitmap.h"
using namespace std;

Employee::Employee()
{
	//code here
	empid=0;
	strcpy(name," ");
	basicsalary=0;
}
Employee::Employee(int id, const char *n, double sal)
{
	//code here
	empid=id;
	strcpy(name,n);
	basicsalary=sal;
}

double Employee::GetBasicSalary()
{
	//code here
	return basicsalary;
}

void Employee::Display()
{
	//code here
	cout<<empid;
	cout<<name;
	cout<<basicsalary;	
}


WageEmployee::WageEmployee()
{
	//code here
	hours=0;
	rate=0;
}

WageEmployee::WageEmployee(int id, const char *n, double sal, int h, int r):Employee(id, n, sal)
{
	//code here
	hours=h;
	rate=r;
}

double WageEmployee::CalcNetSalary()
{
	//code here
	return (hours*rate)+GetBasicSalary();
}

bool WageEmployee::IsTaxable()
{
	//code here
	if(CalcNetSalary()>=500000){
  		return true;
	}
	else{
		return false;
	}
}
void WageEmployee::Display()
{
	//code here
	Employee::Display();
	cout<<hours;
	cout<<rate;
}

SalesPerson::SalesPerson()
{
	//code here
	sales=0;
	comm=0;
}
	
SalesPerson::SalesPerson(int id, const char *n, double sal, 
				int h, int r, int s, int c):WageEmployee(id,n,sal,h,r)
{
	//code here
	sales=s;
	comm=c;
}

double SalesPerson::CalcNetSalary()
{
	//code here
	return (sales*comm+( WageEmployee::CalcNetSalary()));
}

bool SalesPerson::IsTaxable()
{
	//code here
	if(CalcNetSalary()>=500000){
       return true;
	}
	else{
		return false;
	}
}
	
void SalesPerson::Display()
{
	//code here
	Employee::Display();
	WageEmployee::Display();
	cout<<sales;
	cout<<comm;
}

































