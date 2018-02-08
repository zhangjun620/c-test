#include <iostream>
#include <functional>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,6,7,8},b[8] = {8};
    int *x = find(a,a+8,4);
    if(x == a+8) cout <<"not found 4";
    else cout << "found 4" << endl;
    copy(a, a+8,b);
    reverse(a,a+8);
    int *p = find(a,a+8,4);
    if(x == a+8) cout << "not found 4";
    else cout << "found 4"<< endl;
    copy(b,b+8,ostream_iterator<int>(cout," "));
    cout << endl;
    copy(a,a+8,ostream_iterator<int>(cout," "));
    
}