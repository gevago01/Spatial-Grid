//
// Created by giannis on 15/04/16.
//

#include "Point.h"

using std::vector;
using std::ostream;

int Point::id_generator = 0;

/**
 * gets records of this form:
 * 2.58119273751133 -3.0897997256242977
 */
Point::Point(vector<double> records) : point_id(id_generator) {
    coordinates = records;
    ++id_generator;
}

ostream &operator<<(ostream &ostream1, const Point &point) {
    ostream1 << "pid:" << point.point_id << " => ";
    for (double dim:point.coordinates) {
        ostream1 << dim << ",";
    }

    return ostream1;
}

double Point::euclidean_norm(vector<double> const &point1, vector<double> const &point2) {
    double sum = 0;

    assert(point1.size() == point2.size());

    for (unsigned long i = 0; i < point1.size(); ++i) {
        sum += std::pow((point1.at(i) - point2.at(i)), 2);
    }

    return std::sqrt(sum);
}
