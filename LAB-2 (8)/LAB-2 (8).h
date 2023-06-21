#pragma once
#include "LAB-2 (8).cpp"
#include <iostream>

template <typename STK>
class Stack
{
private:
    STK* stack;
    int size = 0;
    int i = 0;
public:
    Stack(int s)
    {
        if (s < 1)
        {
            throw bad_alloc();
        }
        size = s;
        STK* stack = new STK[size];

    }
    ~Stack()
    {
        delete[] stack;
    }
    int get_size()
    {
        return size;
    }
    bool is_empty()
    {
        if (i == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    STK push(const STK& elem)
    {
        if (size == i)
        {
            throw overflow_error("Stack is full");
        }
        return stack[i++] = elem;
    }
    STK top()
    {
        if (is_empty())
        {
            throw logic_error("Stack is empty");
        }
        return stack[i - 1];
    }
    STK pop()
    {
        if (is_empty())
        {
            throw out_of_range("Stack is empty");
        }
        return stack[--i];
    }
};

