#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <string>

//Classe ferindo o Princípio de Aberto/Fechado

class Calculator {
public:
    double calculateArea(const std::string  shape, double value) {
        if (shape == "square") {
            return value * value;
        } else if (shape == "circle") {
            return 3.14 * value * value;
        } else {
            return 0;
        }
    }
};
//corecao 
class Shape {
public:
    virtual double calculateArea() const = 0;
};

class Square : public Shape {
private:
    double side;
public:
    Square(double s) : side(s) {}
    double calculateArea() const override {
        return side * side;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double calculateArea() const override {
        return M_PI * radius * radius;
    }
};
int main(){

    return 0;
}