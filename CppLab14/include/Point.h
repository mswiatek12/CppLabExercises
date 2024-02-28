#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <string>

class Point {
private:
    int _id;
    std::string name;
    double x, y;

public:
    // Constructors
    Point();
    Point(std::string s, double a, double b);
    Point(const Point& other);
    Point(Point &&other);
    ~Point();

    // Named Constructors
    static Point setPoint(double a, double b);
    static Point setContrary(double a, double b);

    // Member functions
    void fullPrint() const;
    void changeName(std::string a);
    Point newMoved(std::string s, double offsetx, double offsety);

    static int number;
};

#endif