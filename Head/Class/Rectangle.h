#ifndef RECTANGLE_H
#define RECTANGLE_H

class  Rectangle {

    //no private needed cuz its already private when its defined before public
    double width, length;

    public:
    Rectangle(double width, double length) {
        this->width = width;
        this->length = length;
    };

    double area() {
        return length * width;
    };

    double perimeter() {
        return 2 * (length + width);
    }

};


#endif
