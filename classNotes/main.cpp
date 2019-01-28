//
//  This class is used to take notes in my data structures class. The code
//  seen here is only meant as a test and will be heavily commented
//
//  classNotes 1/28
//

#include <iostream>
using namespace std;

class Point {
    public:
        double _x;
        double _y;
        int* _jack;
        Point (); //default or empty constructor
        Point (double x, double y); //non default constructor
        ~Point(); //destructor. Why write code in the desctructor
        Point (const Point& anotherOne); //copy constructor
        Point& operator = (const Point& anotherOne);
        void display();
};

Point::Point() {
    _x = 0.0;
    _y = 0.0;
    _jack = new int(0);
}

Point::Point(double x, double y) {
    _x = x;
    _y = y;
}

Point::~Point() {
    cout << "The point (" << _x << ", " << _y << ") was destroyed" << endl;
    
    //THIS DELETE LINE IS VERY IMPORTANT. DEEP DELETE _jack THIS WILL BE ON MIDTERM
    delete _jack;
}

Point::Point (const Point& anotherOne) {
    _x = anotherOne._x;
    _y = anotherOne._y;
    _jack = new int (*(anotherOne._jack));
}

void Point::display() {
    cout << "The point is (" << _x << ", " << _y << ")" << endl;
}

Point& Point::operator = (const Point& anotherOne) {
    _x = anotherOne._x;
    _y = anotherOne._y;
    _jack = new int (*(anotherOne._jack));
    return (*this);
}


int main(int argc, const char * argv[]) {    //Starting in chapter one of textbook!
    Point one;
    
    Point* two = new Point(3.1,4.0); //dynamically defined
    
    Point* three = new Point(*two);
    cout << "Hello World!!!" << endl; //prints Hello World!!!
    one.display();
    (*two).display(); // two->display();
    (*three).display();
    
    Point four = one;
    
    delete three;
    delete two;
    return 0;
}
