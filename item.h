#ifndef ITEM_H
#define ITEM_H

#include <string>
using std::string;
class Item
{
public:
	Item(string addr, string n_name, string n_last_name)
	{
		address = addr;
		name = n_name;
		last_name = n_last_name;
	}
	Item()
	{
		address = "";
		name = "";
		last_name = "";
	}

	void setAddress(int addr)
	{
		address = addr;
	}
	string getAddress()
	{
		return address;
	}

	void setLastName(string n_last_name)
	{
		last_name = n_last_name;
	}
	string getLastName()
	{
		return last_name;
	}

	void setName(string n_name)
	{
		name = n_name;
	}
	string getName()
	{
		return name;
	}

    virtual string printInfo()
    { return "asdasdfqwesxzdqweqwe"; }
protected:
	string address;
	string name;
	string last_name;
};
#endif
