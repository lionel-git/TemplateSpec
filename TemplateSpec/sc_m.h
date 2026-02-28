#pragma once

#include <iostream>
#include <format>
#include <type_traits>

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

// Forward declarations for template specialization
struct TotoA;
struct TotoB;

struct Toto
{
    template <typename T> static MyType getType()
    {
        static_assert(false, "Missing specialization");
        std::cout << "Error: No specialization for this type" << std::endl;
        return MyType::TypeError;
    }

   template <> static MyType getType<TotoA>()
    {
        return MyType::TypeA;
    }
   template <> static MyType getType<TotoB>()
   {
       return MyType::TypeB;
   }

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
    std::string s = std::format("TotoB");
};

struct TotoNoSpec : public TotoB
{

};
