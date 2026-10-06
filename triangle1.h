#pragma once
class Triangle {
private:
    double side;    
    double height; 

public:
    Triangle(double side, double height);

    double getArea() const;

    double getSide() const;
    double getHeight() const;

    void setSide(double side);
    void setHeight(double height);
    
    int Square(int a, int h);
};
