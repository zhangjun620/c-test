#include <iostream>
using namespace std;
class Point {
private:
    int x,y;
public:
    Point();
    Point(int ,int);
};
Point ::Point():x(0),y(0){
    cout << "int default" << endl;
};//
//Point::Point(inta,intb){
//    x = a;
//    y = b;
//    cout...
//}下方的函数定义写法也可以这么写
Point ::Point(int a ,int b):x(a),y(b){
    cout << "int " << a << "," << b << endl;
}
//这里是默认构造函数调用没有给参数，自己写好的构造去调用有形参；   参数是对应参数的 所以程序回自己调用适合的
int main(){
    Point A;
    Point B(15,25);
    Point C[2];
    Point D[2] = {
        Point(5,7),Point(8,12)//D本身是defalut 但是里面的Point两个也调用了类 ，so里面两个调用构造函数
    };
}