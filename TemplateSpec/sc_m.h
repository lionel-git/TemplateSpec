#pragma once

#include <iostream>


enum class MyType
{
    TypeA,
    TypeB,
    TypeError
};

std::string toString(MyType type)
{
    switch (type)
    {
        case MyType::TypeA: return "TypeA";
        case MyType::TypeB: return "TypeB";
        case MyType::TypeError: return "TypeError";
        default: return "Unknown";
    }
}

struct Toto
{
    void doSomethingToto()
    {
        std::cout << "doSomething() called from Toto" << std::endl;
    }
};


struct TotoA : public Toto
{

};

struct TotoB : public TotoA
{
};

struct TotoNoSpec : public TotoB
{

};

template <typename T>
inline MyType getType()
{
    static_assert(false, "Missing specialization");
    std::cout << "Error: No specialization for this type" << std::endl;
    return MyType::TypeError;
}
template <> inline MyType getType<TotoA>() { return MyType::TypeA; }
template <> inline MyType getType<TotoB>() { return MyType::TypeB; }
