#include <iostream>
using namespace std;
class Base{
private:
    double x,y;
    const double p;
public:
    Base(double m,double n,double d):p(d){
        x = m;
        y = n;
    };
    void Show();
    void Show();
};

void Base::Show(){
    cout << x << ',' << y << "p = " << p << endl; 
}

void Base::Show(){
    cout << x << "," << y << "cont p = " << p << endl;
}

int main(){
    Base a(8.2,3.4,3.124);
    const Base b(24.5,2.2,2.242);
    b.Show();//const对象调用非const 成员函数就直接报错了
    a.Show(); 
}