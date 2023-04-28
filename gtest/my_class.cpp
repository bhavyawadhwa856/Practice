#include "my_class.h"

MyClass::MyClass(std::string _id):id(_id){}
std::string MyClass::GetId() {return id;}


int MyClass::add(int a, int b) {
    return a + b;
}