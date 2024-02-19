#ifndef MAPPOINT_H
#define MAPPOINT_H
#include <iostream>
#include <cmath>
#include <string>

class MapPoint {
    private:
        double longitude;
        double latitude;
    public:
        MapPoint();
        //default constructor

        MapPoint(double longitude, double latitude);
        //constructor taking longitude and latitude as parameters. it will initalize class members longitude and latitude with passed values

        void print()const;
        //a method that prints longitude and latitude for standard output

        void set_coordinates(double longitude, double latitude);
        //a method that sets class members longitude and latitude to given parameters

        double distanceVal(const MapPoint name)const;
        //a method that calculates distance between two points. It takes a constant reference to a MapPoint object as a parameter and returns a double value.

        double distanceVal(MapPoint *name)const;
        //a method that calculates distance between two points. It takes a pointer to a MapPoint type object
};

#endif