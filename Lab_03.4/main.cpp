// Lab_03_4.cpp
// < Лосєва Марія >
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 9

#include <iostream>
using namespace std;
int main() {
    double x;  // вхідний аргумент
    double y;  // вхідний параметр
    double R;
cout<<"x=";cin >>x;
cout<<"y=";cin >>y;
    cout<<"R=";cin >> R;
// розгалуження в повній формі
    if ((x>=0 && y>=0 && y<=R && y>=(x-1)*(x-1)&& (y*y <= R*R-x*x)) || (y*y <= R*R-x*x && x<=0&& x>= -R && y<=0 && y>=-R))
        cout<<"yes"<< endl;
    else
        cout << "no" << endl;
cin.get();
return 0; }

