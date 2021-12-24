#ifndef CDLL_H
#define CDLL_H

#include "node.h"

class CDLL
{
private:
    node * head, *tail;
public:
    CDLL();
    void insert(int);
    void print();
    void deleteByKey(int);
    void deleteAtPosition(int);
};

#endif