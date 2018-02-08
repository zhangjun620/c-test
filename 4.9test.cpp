#include <iostream>
using namespace std;

class Point{
private:
    int X,Y;
public:
    Point(int a = 0,int b = 0):X(a),Y(b){
        cout << "initializing" << endl;
    };
    Point(const Point&p);
    int GetX(){
        return X;
    };
    int GetY(){
        return Y;
    };
    void Show(){
        cout << "X = " << X << "Y = " << Y << endl;
    };
    ~Point(){
        cout << "delete..." << X << "," << Y << endl; 
    }

};
Point::Point(const Point &p){
    X = p.X;
    Y = p.Y;
    cout << " Copy Initializing" << endl;
};
void display(Point p){
    p.Show();
};
void disp(Point&p){
    p.Show();
};
Point fun(){
    Point A(101,102);
    return A;
};
int main(){
    Point A(42,35);  //初始化 A

    Point B(A); // A初始化B 调用复制构造函数  第一种调用复制构造函数方法 ： 一个类对象去初始化另一个类的对象
    Point C(58,94);
    cout << "called display(B)" << endl;

    display(B);  // 第二种 形参为类的对象 实参形参结合时 
    cout << "Next.." << endl;
    cout << "call disp(B)" << endl;
    disp(B);
    cout << "call C = fun()" << endl;

    C = fun(); // 函数的返回值为类的对象
    cout << "called disp(C)" << endl;
    disp(C);
    cout << "out " << endl; 
};
