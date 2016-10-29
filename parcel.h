#ifndef PARCEL_H
#define PARCEL_H
#include "item.h"

#include <sstream>
#include <string>
using std::string;
using std::stringstream;
class Parcel : public Item {
    public:
        Parcel(string addr, string n_name, string n_last_name, float wh)
		:Item(addr, n_name, n_last_name)
        {
			weight = wh;
        }

        void setWeight(float wh)
        {
            weight = wh;
        }
        float getWeight()
        {
            return weight;
        }

        string printInfo()
        {
            stringstream res;
            res << "Destination Adress= " << address << "\nLast name= " << last_name << "\nName= " << name << "\nWeight=" << weight;
            return res.str();
        }

    private:
        float weight;
};
#endif
