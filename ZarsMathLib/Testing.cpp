#include "Vector3.h"
#include <iostream>
using namespace std;

int main(){

    Vector3 a = {2,2,2};
    cout<<a.x<<endl;
    Vector3 b = a;
    b.x = 5;
    cout<<(a*b).x<<endl;
    return 0;
}