#include <iostream>

#include "CDLL.h"

CDLL::CDLL()
{
    head = tail = nullptr; // link list is empty
}

void CDLL::insert(int d)
{
    node *temp = new node(d);
    if (head == nullptr && head == tail && tail == nullptr) // link list is empty
    {
        head = tail = temp;
        head->next = tail->next = temp;
        head->prev = tail->prev = temp;
    }
    else
    {
        node *curr = head;
        while (curr->text != head) // find end element in link list
            curr = curr->next;
        curr->next = temp;
        temp->prev = curr;
        temp.next = head;
        head->prev = temp;
        tail = temp;
    }
}

void CDLL::print()
{
}

void CDLL::deleteByKey(int d)
{
}

void CDLL::deleteAtPosition(int d)
{
}