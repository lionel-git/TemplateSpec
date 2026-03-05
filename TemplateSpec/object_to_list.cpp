#include <iostream>
#include <vector>

class MyObject
{
public:
    void doSomething() 
    {
        std::cout << "doSomething() called from MyObject" << std::endl;
    }
};

template <typename T>
class ObjectToList
{
public:
    size_t size() const { return data_.size(); }
    std::vector<T> data_{};
};


class MyObjectList : public ObjectToList<MyObject>
{


};

void test()
{
    MyObjectList o;
    o.data_.emplace_back();
    o.data_.emplace_back();
    o.data_[0].doSomething();
    std::cout << "Size of list: " << o.size() << std::endl;
}
