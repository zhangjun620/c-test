#include <iostream>
using namespace std;

int main(){
    int day;
    cin >> day;
    switch(day){
        case 0: cout << "sunday"<< endl;break;
        case 1: cout << "monday"<< endl;break;
        case 2: cout << "tuesday"<< endl;break;
        case 3: cout << "wendnesday"<< endl;break;
        case 4: cout << "thursday"<< endl;break;
        case 5: cout << "friday"<< endl;break;
        case 6: cout << "saturday"<< endl;break;
        default:
            cout << "it's not a week" << endl;break;
    }
}
