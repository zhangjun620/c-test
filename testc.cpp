#include <iostream>   //包含头文件
using namespace std;  //namespace
int result(int,int);
const int k = 2; //声明一个常量 k为2
struct Point{
    int x,y;
};

int main(){
    int z(0),b(50);
    Point a;
    
    cout <<"输入两个int以空格区分：";
    cin >>a. x>>a. y;  //提取两个数值
    z = (a. x+a. y)*k;
    z = result(z,b);
    cout<<"计算结果如下"<< endl;  //<< 插入
    cout<<"(("<<a. x<<" + "<<a. y
    <<") * " << k <<") + "<< b 
    <<" = "<< z 
    << endl;
    return 0;
}

int result(int a,int b){
    return a + b;
}