#include<iostream>
using namespace std;

class Called{
    public:
        Called(){};
        ~Called(){};
        void call_cplus_func(){
            std::cout << "The C++ function is called" << std::endl;
        }
};

Called caller;

extern "C" void call_cplus_func(){
    caller.call_cplus_func();
}
