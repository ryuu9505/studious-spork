#include <iostream>
#include <queue>

int main()
{
    std::queue<int> q;
    q.push(1);
    q.push(3);
    q.push(5);
    q.push(7);
    
    while(!q.empty())
    {
        std::cout << q.front() << ' ';
        q.pop();
    }

    return 0;
}