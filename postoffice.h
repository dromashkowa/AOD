#ifndef POSTOFFICE_H
#define POSTOFFICE_H
#include "itemlist.h"

#include <string>
using std::string;
class PostOffice
{
    public:
        PostOffice(int index, string address)
        {
            this -> index = index;
            this -> address = address;
        }
		void setIndex(int ind)
        {
            index = ind;
        }
        int getIndex()
        {
            return index;
        }

        void setAddress(string addr)
        {
            address = addr;
        }
        string getAffress()
        {
            return address;
        }
		ItemList items;
    private:
		int index;
		string address;
};
#endif
