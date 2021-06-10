#include <iostream>
using namespace std;
int main()
{
	char uni;
	cout<<"Enter your choice universities \n"<<"U: USIU"<<"\nS: Strathmore"<<"\nH: Havard"<<"\nR: Riara";
	cin>>uni;
	switch (uni)
	{
		case 'U':
			cout<<"USIU";
			break;
			case 'S':
				cout<<"Strathmore";
				break;
				case 'H':
					cout<<"Havard";
					break;
					case 'R':
						cout<<"Riara";
						break;
						default:
							cout<<"Daystar";
		
	}
}
