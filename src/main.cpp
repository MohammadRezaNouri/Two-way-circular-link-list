#include <iostream>
#include <string>

#include "CDLL.h" // Class Doubly Circular Linked List

int main()
{
    std::cout << "Hi\ntest case 1 :\n";
    CDLL list1;

    list1.insert(5);

    list1.deleteByKey(5);
    list1.print();

    list1.insert(6);
    list1.print();

    list1.insert(7);
    list1.insert(7);
    list1.insert(7);
    list1.insert(7);
    list1.insert(7);

    list1.deleteAtPosition(12);

    list1.insert(7);
    list1.insert(8);
    list1.print();

    list1.deleteByKey(8);
    list1.print();

    CDLL list2;
    std::cout << "\ntest case 2 :\n";

    list2.insert(1);
    list2.insert(2);
    list2.insert(3);
    list2.insert(4);
    list2.insert(5);
    list2.insert(6);
    list2.insert(7);
    list2.insert(8);
    list2.print();

    list2.deleteByKey(1);
    list2.print();

    list2.deleteByKey(4);
    list2.print();

    list2.deleteByKey(10);
    list2.print();

    list2.deleteAtPosition(0);
    list2.print();

    list2.deleteAtPosition(2);
    list2.print();

    list2.deleteAtPosition(10);
    list2.print();

    return 0;
}