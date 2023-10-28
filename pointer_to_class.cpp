#include<iostream>
using namespace std;
class Userinfo{
    public:
    char name[20];
    int id;
    int age;
};
int main()
{
    class Userinfo u1 = {"Mauli",777,19};
    Userinfo *ptr;
    ptr = &u1;
    cout<<"User Name= "<<ptr->name<<endl;
    cout<<"User id= "<<ptr->id<<endl;
    cout<<"User Age= "<<ptr->age<<endl;
    return 0;
}