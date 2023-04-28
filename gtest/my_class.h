#ifndef MY_CLASS_H
#define MY_CLASS_H
#include <string>

class MyClass {
    std::string id;

public:
    MyClass(std::string _id);
    int add(int a, int b);
    std::string GetId();

};

#endif // MY_CLASS_H
