#include "rectangle.h"

void Rectangle::setWidth(double newWidth) {
    width = newWidth;
}

void Rectangle::setHeight(double newHeight) {
    height = newHeight;
}

double Rectangle::getArea(){
    return width * height;
}
double Rectangle::getCircum(){
    return width * height * 2;
}

Rectangle::Rectangle() {}
