#include "LearnSTL.h"

LearnSTL::LearnSTL()
{
    //ctor
}

LearnSTL::~LearnSTL()
{
    //dtor
}

int LearnSTL::LearnVector()
{
    std::vector<int> Vector(5,1); // 初始化vector

    std::cout << "vector输出内容";
    for(std::vector<int>::iterator it=Vector.begin();it!=Vector.end();it++)
    {
        std::cout << std::setw(4) << *it;
    }
    std::cout << std::endl;

    std::cout << "vector头部插入88" << std::endl;
    Vector.insert(Vector.begin(),88);

    std::cout << "vector删除第二个元素" << std::endl;
    Vector.erase(++Vector.begin());

    std::cout << "vector尾部插入99" << std::endl;
    Vector.push_back(99);

    std::cout << "vector返回尾部引用：" << Vector.back();
    std::cout << std::endl;

    std::cout << "vector删除尾部元素" << std::endl;
    Vector.pop_back();

    std::cout << "vector修改索引为3的元素为33" << std::endl;
    Vector.at(3) = 33;

    std::cout << "vector返回元素数目：" << Vector.size() << std::endl;

    std::cout << "vector输出内容";
    for(std::vector<int>::iterator it=Vector.begin();it!=Vector.end();it++)
    {
        std::cout << std::setw(4) << *it;
    }
    std::cout << std::endl;

    std::cout << "vector清空元素" << std::endl;
    Vector.clear();

    std::cout << "vector返回元素数目：" << Vector.size() << std::endl;

    return 0;
}

int LearnSTL::LearnStack()
{
    std::stack<int> Stack;

    std::cout << "stack将1,2,3,4,5,6压栈" << std::endl;
    for(int it=1;it<=6;it++)
    {
        Stack.push(it);
    }

    std::cout << "stack退栈一次" << std::endl;
    Stack.pop();

    std::cout << "stack获取栈顶元素："  << Stack.top() << std::endl;

    std::cout << "stack返回栈中元素数目：" << Stack.size() << std::endl;

    std::cout << "stack所有元素退栈：";
    while(Stack.size())
    {
        std::cout << std::setw(4) << Stack.top();
        Stack.pop();
    }
    std::cout << std::endl;
    return 0;
}

int LearnSTL::LearnQueue()
{
    std::queue<int> Queue;

    std::cout << "queue 0,1,2,3,4,5入队" << std::endl;
    for(int it=0;it<=5;it++)
    {
        Queue.push(it);
    }

    std::cout << "queue返回第一个元素：" << Queue.front() << std::endl;

    std::cout << "queue返回最后一个元素：" << Queue.back() << std::endl;

    std::cout << "queue元素数目：" << Queue.size() << std::endl;

    std::cout << "queue元素全部出队：";
    while(Queue.size())
    {
        std::cout << std::setw(4) << Queue.front();
        Queue.pop(); // 删除第一个元素
    }
    std::cout << std::endl;
    return 0;
}

int LearnSTL::LearnDeque()
{
    std::deque<int> Deque;
    std::cout << "deque 0,1,2,3,4,5 入队" << std::endl;
    for(int it=0;it<=5;it++)
    {
        Deque.push_back(it);
    }

    std::cout << "deque头部插入-1" << std::endl;
    Deque.push_front(-1);

    std::cout << "deque尾部删除元素" << std::endl;
    Deque.pop_back();

    std::cout << "deque返回第一个元素：" << Deque.front() << std::endl;

    std::cout << "deque返回最后一个元素： " << Deque.back() << std::endl;

    std::cout << "deque元素数目：" << Deque.size() << std::endl;

    std::cout << "deque元素全部出队：";
    while(Deque.size())
    {
        std::cout << std::setw(4) << Deque.front();
        Deque.pop_front(); // 删除第一个元素
    }
    std::cout << std::endl;
    return 0;
}
