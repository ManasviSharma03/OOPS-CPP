//Operator overloading Unary Operator (postfix++)
#include<iostream>
using namespace std;
class demooverload{
    public:
    int count;
    public:
    demooverload():count(50){}
    //Overload ++ when used as postfix 
    void operator++(){
        count++;
    }
    void show(){
        cout<<"counter variable: "<<count<< endl;
    }
};
int main(){
    demooverload ob1;
    ob1++;
    ob1.show();
    return 0;
}
