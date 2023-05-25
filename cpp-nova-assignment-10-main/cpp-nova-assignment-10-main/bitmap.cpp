#include<iostream>
#include<cstring>
#include<algorithm>
#include"bitmap.h"
using namespace std;

Laptop::Laptop()
{
	//code here
	lid=0;
	strcpy(make," ");
	cost=0.0;
}

Laptop::Laptop(int id, const char *m, double c)
{
	//code here
	lid=id;
	strcpy(make,m);
	cost=c;
}
	
int Laptop::GetLid()
{
	//code here
	return lid;
}

char* Laptop::GetMake()
{
	//code here
	return make;
}


double Laptop::GetCost()
{
	//code here
	return cost;
}

void Laptop::Display()
{
	//code here
	cout<<lid<<endl;
	cout<<make<<endl;
	cout<<cost<<endl;
}

void LaptopStore::InsertLaptop(Laptop l)
{
	//code here
	vect_laptop.insert(vect_laptop.end(),l);
}

bool compare(Laptop l1, Laptop l2)
{
	return l1.GetCost()<l2.GetCost();	
}

void LaptopStore::SortLaptops()
{
	//code here
	sort(vect_laptop.begin(),vect_laptop.end(),[]( Laptop& x,  Laptop& y) {  return x.GetCost() < y.GetCost(); });
}

vector<Laptop> LaptopStore::GetVect_Laptop()
{
	//code here
	return vect_laptop;
}

Laptop LaptopStore::GetMinCostLaptop()
{
	//code here
	return min_element(vect_laptop.begin(), vect_laptop.end(), 
 	[]( Laptop& x,  Laptop& y) {  return x.GetCost() < y.GetCost(); })[0];
}

Laptop LaptopStore::GetMaxCostLaptop()
{
	//code here
	return max_element(vect_laptop.begin(), vect_laptop.end(), 
 	[]( Laptop& x,  Laptop& y) {  return x.GetCost() < y.GetCost(); })[0];
}
	
void LaptopStore::ShowLaptops()
{
	//code here
	for(auto i=vect_laptop.begin();i!=vect_laptop.end();++i){
		i->Display();
	}
}




