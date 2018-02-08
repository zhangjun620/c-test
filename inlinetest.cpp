#include <iostream>
#include <string>

using namespace std;

const double PI = 3.14159265358979;
inline double Cara(double r){
    return PI * r * r;
};
int main(){
    double t = 3.0;
    double are = Cara(t);
    cout << are << endl;
    return 0;
}