#include <iostream>
using namespace std;

class object{
private:
    int val;
public:
    object():val(0){
        cout << "default constructor for object 1  " << endl;
    };
    object(int i):val(i){
        cout << "Constructor for object 2   " << endl;
    };
    ~object(){
        cout << "destructor for object 3   " << val << endl;
    };
};

class container{
private:
    object one;
    object two;
    int data;
public:
    container():data(0){
        cout << "default constructor for container 4   " << endl;
    };
    container(int i,int j,int k);
    ~container(){
        cout << "desturctor for container 5   " << data << endl;
    }
};
container::container(int i,int j,int k): two(i),one(j){
        data = k;
        cout << "constructor for container 6   " << data << endl;
    };

int main(){
    container obj,anObj(5,6,10);
}