#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main(){
    double a[] = {1.1,2.2,3.3,4.4};
    sort(a,a+4);
    copy(a,a+4,ostream_iterator<double>(cout," "));
    cout<< endl;
    sort(a,a+4,greater<double>());
    copy(a,a+4,ostream_iterator<double>(cout," "));
    cout << endl;
    double *x = find(a,a+4,4.4);
    if(x == a+4)  cout << "not found the value is 4.4";
    else cout << "you zhi wei 4.4";
    cout<< endl;
    x = find(a,a+4,8);
    if(x == a+4) cout << "not found 8";
    else cout << "youzhiwei "<< *x <<"de yuansu";
    cout << endl;
    
}