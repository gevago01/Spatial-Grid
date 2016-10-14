//
// Created by giannis on 15/04/16.
//

#ifndef THESIS_POINT_H
#define THESIS_POINT_H

#include <vector>
#include <sstream>
#include <cmath>
#include <cassert>

class Point {

    //friend function that prints the object
    friend std::ostream &operator<<(std::ostream &, const Point &);


private:
    /*holds coordinates for a number of dimensions
     its size is the number of dimensions*/
    std::vector<double> coordinates;

    /*point id */
    int point_id;
    static int id_generator;

public:
    Point(std::vector<double> records);

    Point() : /*cluster_id(0), num_of_dimensions(0), */ point_id(id_generator) {
        ++id_generator;
    };


    const std::vector<double> &getCoordinates() const {
        return coordinates;
    }

    static double euclidean_norm(const std::vector<double> &point1, const std::vector<double> &point2);

    /**
     * Define the copy constructor - compiler synthesized
     */
    Point(const Point &originalPoint) = default;

    /**
     * Copy assignment operator - compiler synthesized
     */
    Point &operator=(const Point &right) = default;

    /**
     * Move assignment operator - compiler synthesized
     */
    Point &operator=(Point &&point) = default;

    /**
     * Move constructor - compiler synthesized
     */
    Point(Point &&point) noexcept = default;
};

#endif //THESIS_POINT_H
