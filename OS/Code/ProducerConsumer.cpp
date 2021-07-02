/*
https://youtu.be/rKGq9AlfPR4
*/

#include <bits/stdc++.h>
using namespace std;

std::mutex mu; //common lock for producer and consumer

void producer(int val)
{
    while (val)
    {
    }
}

void consumer()
{
    while (true)
    {
    }
}

int main()
{
    std::thread t1(producer, 100);
    std::thread t2(consumer);

    t1.join();
    t2.join();

    return 0;
}