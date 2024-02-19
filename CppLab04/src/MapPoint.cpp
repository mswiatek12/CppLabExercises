#include "MapPoint.h"

MapPoint::MapPoint(): longitude(0), latitude(0) {}

MapPoint::MapPoint(double longitude, double latitude): longitude(longitude), latitude(latitude) {}

void MapPoint::print()const {
    std::cout << "Point: (" << this->longitude << ", " << this->latitude << ")" << std::endl;
}

void MapPoint::set_coordinates(double longitude, double latitude) {
    this->longitude=longitude;
    this->latitude=latitude;
}

double MapPoint::distanceVal(const MapPoint name)const {
    double x = (this->longitude - name.longitude);
    double y = (this->latitude - name.latitude);
    x *= x;
    y *= y;
    return sqrt(x+y);
}

double MapPoint::distanceVal(MapPoint *name)const {
    double x = (this->longitude - name->longitude);
    double y = (this->latitude - name->latitude);
    x *= x;
    y *= y;
    return sqrt(x+y);
}
