#ifndef LEARNSTL_H
#define LEARNSTL_H
#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <iomanip>

class LearnSTL
{
    public:
        LearnSTL();
        virtual ~LearnSTL();
        int LearnVector(); // 学习vector的使用
        int LearnStack();  // 学习stack的使用
        int LearnQueue();  // 学习queue的使用
        int LearnDeque();  // 学习deque的使用

    protected:

    private:
};

#endif // LEARNSTL_H
