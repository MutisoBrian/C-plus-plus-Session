#include <iostream>
using namespace std;
main()
{
	char uni;
	cout<<"Enter any Universities"<<"H: Havard"<<"\nS: Strathmore"<<"\nU: USIU"<<"\nR: Riara";
	cin>>uni;
	switch(uni)
	{
		case 'H':
	cout<<"\nUSIU";
	break;
	 case 'S':
	cout<<"\nStrathmore";
	break;
	 case 'U':
	cout<<"\nUSIU";
	break;
	 case 'R':
	cout<<"\nRiara";
	break;
	default:
		cout<<"Daystar";
	}
	
	
}
