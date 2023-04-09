#include "LinkedList.h"


int main(void)
{
    LinkedList list;
    list.insert(0, new Node(10));
    list.insert(0, new Node(20));
    list.insert(1, new Node(30));
    list.insert(list.size(), new Node(40));
    list.insert(2, new Node(50));

    list.display();

    list.sum();

    return 0;

}