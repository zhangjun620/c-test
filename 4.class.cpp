#include <iostream>
using namespace std;

class Clock {

public:

     Clock(int newH,int newM,int newS);//构造函数

     void setTime(int newH, int newM, int newS);

     void showTime();

private:

     int hour, minute, second;

};

 

//构造函数的实现：

Clock::Clock(int newH,int newM,int newS): hour(newH),minute(newM),  second(newS) {

     }

//其它函数实现同例4_1

 

int main() {

  Clock c; //自动调用构造函数

  c.showTime();

     return 0;

};
void Clock::setTime(int newH,int newM,int newS){
    hour = newH;
    minute = newM;
    second = newS;
};
void Clock::showTime(){
    cout << hour << ":" << minute << ":" << second <<endl;
};