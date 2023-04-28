#include <iostream>
#include <memory>
using namespace std;
class house
{
private:
    int l,b;

    /* data */
public:
    house (int f);
    // house (int x, int y){
    //     l = x;
    //     b = y;
    // }
    int c;
    // void setData(int x, int y){
    //     l = x;
    //     b = y;
    // }
    int area(){
        return l*b;

    }
    void printAREa(){
        int a = area();
        cout<< a;

    }
};
house::house(int f){
    int l = f;
    // int b = g;
}
int main(){
    house h1(5);
    // house h(30, 4);
    // house *h_ptr = new house(3,5);
    // unique_ptr<house> x_ptr (new house(5,7));

    // x_ptr->printAREa();
    // h_ptr->printAREa();
    // delete h_ptr;
    // h.c = 30;
    // cout<<h.c;
    h1.printAREa();
}