#include <iostream>
using namespace std;
template <class T>
class Stack
{
public:
    Stack();
    ~Stack();
    void push(T t);
    void printT();
    T pop();
    bool isEmpty();

private:
    T *m_pT;
    int m_maxSize;
    int m_size;
};
template <class T>
Stack<T>::Stack()
{
    this->m_maxSize = 100;
    this->m_size = 0;
    m_pT = new T[this->m_maxSize];
}
template <class T>
Stack<T>::~Stack()
{

    delete[] m_pT;
}

template <class T>
void Stack<T>::push(T t)
{
    if (m_size < m_maxSize - 1)
    {
        // m_pT[m_size]=t;
        m_pT[m_size]=t;//注意不能用自增,可能是因为不知道偏移多少
        
        m_size++;
    }
    else
    {
        cout << "overflow" << endl;
    }
}
template <class T>
T Stack<T>::pop()
{
    T t = *m_pT;
    return t;
}
template <class T>
void Stack<T>::printT()
{
    for (int i = 0; i < m_size; i++)
    {
        cout << m_pT[i] << endl;
    }
}

int main()

{

    cout << __TIME__ << endl;
    Stack<int> mystack;
    mystack.push(1);
    // cout << mystack.pop() << endl;
    mystack.push(2);
    // cout << mystack.pop() << endl;
    mystack.push(3);
    // cout << mystack.pop() << endl;
    mystack.push(4);
    mystack.printT();
    // cout << mystack.pop() << endl;
    return 0;
}