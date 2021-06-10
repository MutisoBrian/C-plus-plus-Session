#include <iostream>
using namespace std;
int main()
{
   int hr_rate= 7500;
	int cost_parts = 12000;
	int hrs;
	
	std::cout<<"Enter hours worked ";
	std :: cin>> hrs;
	
	std :: cout<<"daily average is:"<<(7500*hrs) + 12000<<"Ksh"<<std::endl;
    return 0;
}

