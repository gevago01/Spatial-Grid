//
// Created by giannis on 15/08/16.
//

#ifndef THESIS_GRID_H
#define THESIS_GRID_H

#define GRID_SIZE 40

#include <array>
#include "Point.h"
#include <algorithm>
#include <cfloat>
#include <chrono>
#include <unordered_set>
#include <set>
#include <map>


//extern std::array<std::array<std::array<std::vector<Point>,GRID_SIZE>,GRID_SIZE>,GRID_SIZE> grid;

class Grid {

public:
    Grid(std::vector<Point> const &all_points);

    void getGridPosition(Point const &point);
    void addToGrid(Point const &point);
    bool findPoint(Point const &point);

private:
    long x,y,z;
    static std::array<std::array<std::array<std::vector<Point>,GRID_SIZE>,GRID_SIZE>,GRID_SIZE> grid;


};


#endif //THESIS_GRID_H
