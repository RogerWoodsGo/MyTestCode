#include <iostream>
#include "oc.h"

extern void c_func();
using namespace std;
class A{
    public:
        void func(){
            c_func(); 
        };
};


int main(){
    A a;
    a.func();
}
