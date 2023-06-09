//
// Created by 93539 on 2023/6/8.
//

#ifndef STACK_QUEUE_106_STACK_H
#define STACK_QUEUE_106_STACK_H

#include <vector>
#include <list>

namespace wyp {
    template<class T, class Container = std::vector<T>>
    class stack {
    public:
        void push(const T &x) {
            _con.push_back(x);
        }

        void pop() {
            _con.pop_back();
        }

        T &top() {
            return _con.back();
        }

        bool empty() {
            return _con.empty();
        }

        size_t size() {
            return _con.size();
        }

    private:
        Container _con;
    };

} // wyp

#endif //STACK_QUEUE_106_STACK_H
