#include <iostream>
using namespace std;

template <class DT>
void mySwap (DT& x, DT& y) {
    DT temp;
    
    temp = x;
    x = y;
    y = temp;
}

template  <class DT>
class Point {
public:
    DT* _x;
    DT* _y;
    Point();
    void display();
    Point<DT> getAPoint();
    ~Point();
};

template<class DT>
Point<DT>::~Point<DT>() {
    delete _x;
    _x = NULL;
    delete _y;
    _y = NULL;
}

template<class DT>
Point<DT>::Point() {
    _x = NULL;
    _y = NULL;
};
template <class DT>
Point<DT> Point<DT>::getAPoint() {
    Point<DT>* P = new Point<DT>();
    return *P;
}

template<class DT>
void Point<DT>::display() {
    cout << "(" << _x << ", " << _y << ")" << endl;
};

Point<int>* p1 = new Point<int>();
Point<double>* p2 = new Point<double>();

int main() {
    int k = 10;
    int j = 20;
    
    char a = 'A';
    char b = 'B';
    
    mySwap<int>(j,k);
    mySwap<char>(a,b);
    
    cout << j << " " << k << endl;
    cout << a << " " << b << endl;
    
    (*p1)._x = new int(10);
    (*p1)._y = new int(20);
    (*p1).display();
    
    return 0;
}
