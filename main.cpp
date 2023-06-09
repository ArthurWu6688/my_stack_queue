#include <iostream>
#include "stack.h"
#include "queue.h"

void test_stack() {
    wyp::stack<int> ST;
    ST.push(1);
    ST.push(2);
    ST.push(3);
    ST.push(4);
    ST.push(5);

    while (!ST.empty()) {
        std::cout << ST.top() << std::endl;
        ST.pop();
    }
}

void test_queue(){
    wyp::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while(!q.empty()){
        std::cout << q.front() << std::endl;
        q.pop();
    }
}

int main() {
    test_queue();

    return 0;
}
