//
// Created by 93539 on 2023/6/8.
//

#ifndef STACK_QUEUE_106_QUEUE_H
#define STACK_QUEUE_106_QUEUE_H

#include <vector>
#include <list>

namespace wyp {
    template<class T, class Container = std::list<T>>
    class queue {
    public:
        void push(const T &x) {
            _con.push_back(x);
        }

        void pop() {
            _con.pop_front();
        }

        const T &front() {
            return _con.front();
        }

        const T &back() {
            return _con.back();
        }

        bool empty() {
            return _con.empty();
        }

    private:
        Container _con;
    };

} // wyp

#endif //STACK_QUEUE_106_QUEUE_H
