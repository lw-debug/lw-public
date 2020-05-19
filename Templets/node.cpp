#include <iostream>
using namespace std;
struct Node
{
    int num;
    Node *next = NULL;
    void add(int a);
};
void Node::add(int a)
{

    if (next == NULL)
    {
        num = a;
    }
    else
    {
        Node nextnode;
        next = &nextnode;
        nextnode.num = a;
        nextnode.next=NULL;
    }
}
int main()
{
    Node nd;
    nd.add(10);
    cout << nd.num;
    nd.add(1);
    cout << nd.num;
    nd.add(21);
    cout << nd.num;
    return 0;
}
