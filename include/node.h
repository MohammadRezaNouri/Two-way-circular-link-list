#ifndef NODE_H
#define NODE_H

class node
{
private:
    int data;
    node *next, *prev;

public:
    node(int);
};

#endif