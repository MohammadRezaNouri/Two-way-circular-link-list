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
        while (curr->next != head) // find end element in link list
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
    if (head == nullptr && head == tail && tail == nullptr)
    {
        std::cout << "[ ]" << endl;
        return;
    }
    node *curr = head;
    std::cout << "[ ";
    while (curr->next != head)
    {
        std::cout << curr->data << ' ';
        curr = curr->next;
    }
    std::cout << curr->data << " ]" << endl;
}

void CDLL::deleteByKey(int d)
{
    if (head == nullptr && head == tail && tail == nullptr) // link list is empty
    {
        std::cout << "Not found!" << endl;
        return;
    }
    node *curr = head;
    int i = 0;
    while (curr->next != head)
    {
        i++;
        if (curr->data == d)
        {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            std::cout << "Find and deleted" << endl;
            if (i == 1)
            {
                head = curr->next;
                tail = head->prev;
            }
            return;
        }
        curr = curr->next;
    }
    if (i == 0)
    {
        if (head->data == d) // deleted head
        {
            head = tail = nullptr;
            std::cout << "Find and deleted" << endl;
            return;
        }
    }
    else if (curr->data == d)
    {
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
        std::cout << "Find and deleted" << endl;
        return;
    }
    std::cout << d << "Not found!" << endl;
}

void CDLL::deleteAtPosition(int d)
{
    if (head == nullptr && head == tail && tail == nullptr) // link list is empty
    {
        std::cout << "Not found!" << endl;
        return;
    }
    node *curr = head;
    int i = 0;
    while (curr->next != head)
    {
        if (i == d)
        {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            std::cout << "Position element deleted" << endl;
            if (i == 0)
            {
                head = curr->next;
                tail = head->prev;
            }
            return;
        }
        curr = curr->next;
        i++;
    }
    if (i == 0)
    {
        if (i == d) // deleted head
        {
            head = tail = nullptr;
            std::cout << "Position element deleted" << endl;
            return;
        }
    }
    else if (i == d) // delete end node
    {
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
        std::cout << "Position element deleted" << endl;
        return;
    }
    std::cout << d << "Position element not found!" << endl;
}