#ifndef RECTANGLE_H
#define RECTANGLE_H

class  rectangle {
    private:
    double width, length;

    public:
    rectangle(double width, double length) {
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
