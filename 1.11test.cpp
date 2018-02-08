#include <iostream>
#include <iomanip>
using namespace std;
const double PI = 3.1415926;
int main(){
    cout << PI << endl
         << setprecision(0) << PI << endl
         << setprecision(1) << PI << endl
         << setprecision(2) << PI << endl
         << setprecision(3) << PI << endl
         << setprecision(7) << PI << endl;
    int b = 100;
    cout << b << endl
         << "oct:" << oct << b << endl
         << "hex:" << hex << b << endl
         << "dec:" << dec << b << endl;
    
    cout << b << endl
         << 100 << endl
         << "input b = 100";
    cin >> b;
    cout << b << endl;
    cout << dec <<setiosflags(ios_base::showpos) << b << endl;
    cout << "inoput b = ";
    cin >> b;
    cout << b << endl;
    cout << resetiosflags(ios_base::showpos);
    cout << b << endl;

}