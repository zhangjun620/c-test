#include <iostream>
using namespace std;

int main(){
    int year;
    cout << "enter the years:";
    cin >> year;
    if((year % 4 == 0 && year % 100 != 0)|| year % 400 == 0) 
        cout << 1 << endl;
    else cout << 0 << endl;
}