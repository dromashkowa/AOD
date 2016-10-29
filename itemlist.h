#ifndef ITEMLIST_H
#define ITEMLIST_H
#include "item.h"
#include <iostream>

class Node
{
    public:
        Node()
        {
            value = NULL;
            next = NULL;
        }

        Item *value;
        Node *next;
};
class ItemList
{
    public:
    ItemList()
    {
        first = NULL;
        last = NULL;
        length = 0;
    }
    void add(Item *i)
    {
        Node *tmp = new Node();
        tmp -> value = i;
        if (first == NULL)
        {
            first = tmp;
            last = tmp;
        }
        else
        {
           last -> next = tmp;
           last = tmp;
        }
        length++;
    }
    Item* getItem(int n)
    {
		if (n=0) {return first->value;}
        if (n=length-1) {return last->value;}
		if ((n>0)&&(n<length))
        {
            Node* tmp = first;
            for (int i = 0; i < n; i++)
            {
                tmp = tmp -> next;
            }
            return tmp -> value;
        }
        return NULL;
    }
	void deleteItem(int n)
    {
		length--;
        if (n == 0)
        {
            first = first -> next;
        }
        if((length >= n) && (n >0 ))
        {
            Node* d = first;
            for (int i = 0; i < (n - 1); i++)
            {
              d = d -> next;
            }
            d -> next = (d -> next) -> next;

            if (n == length)
            {
                last = d;
            }
        }
    }

	void clr()
    {
        Node* tmp = first;
        Node* q;
        while (tmp != NULL)
        {
            q = tmp;
            tmp = tmp -> next;
            q->value = NULL;
			q->next = NULL;
        }
		length = 0;
        first = NULL;
        last = NULL;
    }

    void printAll()
    {
        Node* tmp = first;
        while (tmp != NULL)
        {
            std::cout << tmp->value->printInfo()<<"\n";
            tmp = tmp->next;
        }
    }

        int length;
    private:
        Node *first;
        Node *last;
};
#endif
