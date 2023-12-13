#include<iostream>
using namespace std;
template<class T>T add(T &V1, T &V2)
{
    T result = V1 + V2;
    return result;
}
int main()
{
    int i = 20;
    int j = 200;
    float m = 20.39;
    float n = 90.29;
    cout<<"Addit of i and j is:"<<add(i,j);
    cout<<"Addit of m and n is:"<<add(m,n);

}