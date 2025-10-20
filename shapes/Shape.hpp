#pragma once

enum class Color : unsigned char {
    White,
    Red,
    Blue
};
class Shape {
    Color color = Color::White;

public:
    Shape() {}
    Shape(Color c) : color(c) {}
    Shape(Shape const& sh) : color(sh.color) {}
    virtual ~Shape() {}

    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual void print() const;
};
