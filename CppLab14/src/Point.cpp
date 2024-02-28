#include <Point.h>

int Point::number = 0;

Point::Point(): name(""), x(0), y(0), _id(++number) { }

Point::Point(std::string s, double a, double b): _id(++number), name(s), x(a), y(b){ }

Point::Point(const Point& other): _id(++number), name(other.name), x(other.x), y(other.y) {}

void Point::fullPrint() const {
    std::cout << _id << ". ";
    if((x!=0) && (name == "")) {
        std::cout << "Punkt X ";
    } else {
        std::cout << name << " ";
    }
    std::cout << "(" << x << "," << y << ")" << std::endl;
}

Point Point::setPoint(double a, double b){
    Point o;
    o.x = a;
    o.y = b;
    return o;
}
    
Point Point::setContrary(double a, double b){
    return Point("",-a,-b);
}

void Point::changeName(std::string a){
    this->name = a;
}

Point Point::newMoved(std::string s, double offsetx, double offsety){
    Point o;
    o._id = number;
    o.x = this->x + offsetx;
    o.y = this->y + offsety;
    o.name = s;
    return o;
}

Point::Point(Point &&other){
    _id = ++number;
    this->name = other.name;
    this->x = other.x;
    this->y = other.y;
    other.x = 0;
    other.name = " ";
    other.y = 0;
}

Point::~Point() {}
