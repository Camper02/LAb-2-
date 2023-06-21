#pragma once

#include <iostream>
#include <vector>
#include <valarray>

using namespace std;

enum class Color
{
    black,
    white,
    pink
};


class Shape
{
private:
    double x, y;
    Color c;

public:
    Shape(double i_x, double i_y, Color i_c) : x(i_x), y(i_y), c(i_c) {}
    virtual double square() = 0;
};


class Triangle : public Shape
{
private:
    double s1, s2, s3;

public:
    Triangle(double x, double y, Color color, double i_1, double i_2, double i_3) : Shape(x, y, color), s1(i_1), s2(i_2), s3(i_3) {}
    double square()
    {
        double p = (s1 + s2 + s3) / 2;
        return sqrt(p * (p - s1) * (p - s2) * (p - s3));
    }
};


class Rectangle : public Shape
{
private:
    double a, b;

public:
    Rectangle(double i_x, double i_y, Color i_c, double i_a, double i_b) : Shape(i_x, i_y, i_c), a(i_a), b(i_b) {}
    double square()
    {
        return a * b;
    }
};


class Circle : public Shape
{
private:
    double r;
    double pi = 3.14;

public:
    Circle(int i_x, int i_y, Color i_c, double i_r) : Shape(i_x, i_y, i_c), r(i_r) {}
    double square()
    {
        return pi * pow(r, 2);
    }
};
