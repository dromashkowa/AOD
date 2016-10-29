#include <iostream>
#include "item.h"
#include "letter.h"
#include "parcel.h"
#include "postoffice.h"
#include "itemlist.h"

#include <string>

using std::string;
using std::cout;
using std::cin;

int main()
{
	int index; string address;
	cout << "Post office";
	cout << "Index: "; cin >> index;
	cout << "Address:"; cin >> address;
	PostOffice post_office(index, address);

	Item *tmp;
    string name;
    string last_name;
	float weight;
	int nsheets;
	bool isexpress;
	string inptmp;

	int itemcount;
	cout << "Count = "; cin >> itemcount;
	if (itemcount<=0){return 0;}
    for (int i = 0; i < 3; i++)
    {
		cout << "Is it letter[l] or parcel[p]?"; cin >> inptmp;
		cout << "Address = "; cin >> address;
		cout << "Name = ";    cin >> name;
		cout << "Last name = ";  cin >> last_name;

		if((inptmp=="l")||(inptmp=="letter"))
		{
			cout << "Sheet count = "; cin >> nsheets;
			cout << "Is it express or not? [y/n] "; cin >> inptmp;
			if (inptmp=="y")
			{	isexpress=true;		}
			else
			{	isexpress=false;	}
			tmp = new Letter(address, name, last_name, nsheets, isexpress);
		}else
		if((inptmp=="p")||(inptmp=="parcel"))
		{
			cout << "Weight = "; cin >> weight;
			tmp = new Parcel(address, name, last_name, weight);
		}
		else continue;
		post_office.items.add(tmp);
	}
    cout<<"\n\n\n";
    post_office.items.printAll();
    return 0;
}
