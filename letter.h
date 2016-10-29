#ifndef LETTER_H
#define LETTER_H
#include "item.h"

#include <sstream>
#include <string>
using std::string;
using std::stringstream;
class Letter : public Item {
    public:
        Letter(string addr, string n_name, string n_last_name, int nsheets, bool iexpress)
		:Item(addr, n_name, n_last_name)
        {
			sheet_count = nsheets;
			is_express=iexpress;
        }

        void setSheetCount(int nsheets)
        {
            sheet_count = nsheets;
        }
        int getSheetCount()
        {
            return sheet_count;
        }

		void setExpressFlag()
        {
            is_express = true;
        }
		void resetExpressFlag()
        {
            is_express = false;
        }
        bool getExpressFlag()
        {
            return is_express;
        }

        string printInfo()
        {
            stringstream res;
            res << "Destination Adress= " << address << "\nLast name= " << last_name << "\nName= " << name << "\nSheet count= " << sheet_count << "\n";
			if(is_express)
			{ res << "Express delivery"; }else {res << "Not express delivery" ;}

            return res.str();
        }

    private:
        int sheet_count;
		bool is_express;

};
#endif
