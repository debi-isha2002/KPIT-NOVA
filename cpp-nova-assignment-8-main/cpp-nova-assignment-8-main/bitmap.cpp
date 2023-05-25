#include<iostream>
#include"bitmap.h"
using namespace std;

template<typename T>
Queue<T>::Queue()
{
    size=5;
    front=rear=-1;
    arr=new T[5];
}

template<typename T>
Queue<T>::Queue(int s)
{
    size=s;
    front=rear=-1;
    arr=new T[s];
}

template<typename T>
void Queue<T>::insert(T data)
{
    if(!isfull()){
        if(front==-1){
            front=0;
        }
        arr[++rear]=data;
    }
}
	
template<typename T>
T Queue<T>::remove()
{
    if(!isempty()){
        if(front==rear){
        int k=arr[front];
        front=rear=-1;
        return k;
    }
    return arr[front++];
    }
    return -1;
}

	
template<typename T>
bool Queue<T>::isfull()
{
	if(front==0&&rear==size-1)
        return true;
    else
        return false;
}
	
template<typename T>
bool Queue<T>::isempty()
{
	if(front==-1&&rear==-1)
        return true;
    else
        return false;
}
