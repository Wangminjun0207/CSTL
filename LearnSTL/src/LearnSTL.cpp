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
    std::vector<int> Vector(5,1); // ��ʼ��vector

    std::cout << "vector�������";
    for(std::vector<int>::iterator it=Vector.begin();it!=Vector.end();it++)
    {
        std::cout << std::setw(4) << *it;
    }
    std::cout << std::endl;

    std::cout << "vectorͷ������88" << std::endl;
    Vector.insert(Vector.begin(),88);

    std::cout << "vectorɾ���ڶ���Ԫ��" << std::endl;
    Vector.erase(++Vector.begin());

    std::cout << "vectorβ������99" << std::endl;
    Vector.push_back(99);

    std::cout << "vector����β�����ã�" << Vector.back();
    std::cout << std::endl;

    std::cout << "vectorɾ��β��Ԫ��" << std::endl;
    Vector.pop_back();

    std::cout << "vector�޸�����Ϊ3��Ԫ��Ϊ33" << std::endl;
    Vector.at(3) = 33;

    std::cout << "vector����Ԫ����Ŀ��" << Vector.size() << std::endl;

    std::cout << "vector�������";
    for(std::vector<int>::iterator it=Vector.begin();it!=Vector.end();it++)
    {
        std::cout << std::setw(4) << *it;
    }
    std::cout << std::endl;

    std::cout << "vector���Ԫ��" << std::endl;
    Vector.clear();

    std::cout << "vector����Ԫ����Ŀ��" << Vector.size() << std::endl;

    return 0;
}

int LearnSTL::LearnStack()
{
    std::stack<int> Stack;

    std::cout << "stack��1,2,3,4,5,6ѹջ" << std::endl;
    for(int it=1;it<=6;it++)
    {
        Stack.push(it);
    }

    std::cout << "stack��ջһ��" << std::endl;
    Stack.pop();

    std::cout << "stack��ȡջ��Ԫ�أ�"  << Stack.top() << std::endl;

    std::cout << "stack����ջ��Ԫ����Ŀ��" << Stack.size() << std::endl;

    std::cout << "stack����Ԫ����ջ��";
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

    std::cout << "queue 0,1,2,3,4,5���" << std::endl;
    for(int it=0;it<=5;it++)
    {
        Queue.push(it);
    }

    std::cout << "queue���ص�һ��Ԫ�أ�" << Queue.front() << std::endl;

    std::cout << "queue�������һ��Ԫ�أ�" << Queue.back() << std::endl;

    std::cout << "queueԪ����Ŀ��" << Queue.size() << std::endl;

    std::cout << "queueԪ��ȫ�����ӣ�";
    while(Queue.size())
    {
        std::cout << std::setw(4) << Queue.front();
        Queue.pop(); // ɾ����һ��Ԫ��
    }
    std::cout << std::endl;
    return 0;
}

int LearnSTL::LearnDeque()
{
    std::deque<int> Deque;
    std::cout << "deque 0,1,2,3,4,5 ���" << std::endl;
    for(int it=0;it<=5;it++)
    {
        Deque.push_back(it);
    }

    std::cout << "dequeͷ������-1" << std::endl;
    Deque.push_front(-1);

    std::cout << "dequeβ��ɾ��Ԫ��" << std::endl;
    Deque.pop_back();

    std::cout << "deque���ص�һ��Ԫ�أ�" << Deque.front() << std::endl;

    std::cout << "deque�������һ��Ԫ�أ� " << Deque.back() << std::endl;

    std::cout << "dequeԪ����Ŀ��" << Deque.size() << std::endl;

    std::cout << "dequeԪ��ȫ�����ӣ�";
    while(Deque.size())
    {
        std::cout << std::setw(4) << Deque.front();
        Deque.pop_front(); // ɾ����һ��Ԫ��
    }
    std::cout << std::endl;
    return 0;
}
