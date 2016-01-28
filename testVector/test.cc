#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    vector<int> vt;
    cout << vt.size() << endl;
    vector<int> vt_1 = vector<int>();
    cout << vt_1.size() << endl;
    vt.push_back(1);
    vt_1.push_back(1);

    cout << vt[0] << endl;
    cout << vt_1[0] << endl;
    return 0;
}
