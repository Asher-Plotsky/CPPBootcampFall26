#include "Circle.h"

Circle::Circle(double radius) : radius_(radius) {
    // TODO: initialize radius_ from the parameter using a member
    // initializer list. Rewrite the line above to read:
    //   Circle::Circle(double radius) : radius_(radius) {
}

double Circle::area() const {
    // TODO: return pi * radius_ * radius_
    return 3.14 * radius_ * radius_;
}

std::string Circle::name() const {
    // TODO: return "Circle"
    return "Circle";
}
