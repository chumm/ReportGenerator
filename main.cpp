#include <iostream>
#include "wordList.h"
void SayHello();
const int int_count = 10;

int main()
{
    SayHello();
    std::cin.get();
    return 0;
}

void SayHello()
{
    for(int i = 0;i < int_count;++i)
    {
        std::cout << "Hello";
    }
}
