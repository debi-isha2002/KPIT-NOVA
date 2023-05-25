#include<iostream>
#include"bitmap.h"
using namespace std;

template<typename T>
Stack<T>::Stack()
{
	size=5;
    top=-1;
    arr=new T[5];
}

template<typename T>
Stack<T>::Stack(int s)
{
    size=s;
    top=-1;
    arr=new T[s];
}

template<typename T>
void Stack<T>::push(T data)
{
    top++;
    arr[top]=data;
}
	
template<typename T>
T Stack<T>::pop()
{
    int x= arr[top];
    top--;
    return x;
}

template<typename T>
T Stack<T>::peep()
{
    return arr[top];
}
	
template<typename T>
bool Stack<T>::isfull()
{
    if(top==size-1){
        return true;
    }
    else
    return false;
}
	
template<typename T>
bool Stack<T>::isempty()
{
    if(top==-1){
        return true;
    }
    else
    false;
}
