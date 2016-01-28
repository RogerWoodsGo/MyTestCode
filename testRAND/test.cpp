#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
using namespace std;
int main(){
   srand(time(NULL));
   cout << RAND_MAX << endl; 
   int total =  366137000;
   while(1){
   unsigned int rnum  = 0 + (unsigned)(double(total) * rand() / (RAND_MAX + 1.0));
   cout << total << "," << rnum <<", " << double(rnum)/total << endl; 
   sleep(1);
}
   return 0;
}
