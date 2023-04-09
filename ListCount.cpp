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

    cout << "리스트 내 50을 갖고 있는 노드의 수: " << list.count(50) << endl;
    
    list.clear();
 
    return 0;

}