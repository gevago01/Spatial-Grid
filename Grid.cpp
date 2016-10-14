//
// Created by giannis on 15/08/16.
//


#include "Grid.h"

//3d grid is static - huge multidimensional arrays cannot be allocated on the stack
std::array<std::array<std::array<std::vector<Point>,GRID_SIZE>,GRID_SIZE>,GRID_SIZE>  Grid::grid;

/**
 * Finds the position of the point in the grid
 * @param point
 */
void Grid::getGridPosition(Point const &point) {

    x=std::fmod(std::abs(point.getCoordinates()[0]),GRID_SIZE);
    y=std::fmod(std::abs(point.getCoordinates()[1]),GRID_SIZE);
    z=std::fmod(std::abs(point.getCoordinates()[2]),GRID_SIZE);
}

/**
 *
 * @param point
 * @return true if point has been found/false otherwise
 */
bool Grid::findPoint(Point const &point) {

    getGridPosition(point);
    std::vector<Point> &cell=Grid::grid[x][y][z];

    for (Point const & p:cell){
        double distance=Point::euclidean_norm(p.getCoordinates(),point.getCoordinates());
        if (distance<DBL_EPSILON){
            return true;
        }

    }

    return false;
}

/**
 *
 * @param point
 */
void Grid::addToGrid(Point const &point) {
    getGridPosition(point);

    std::vector<Point> &cell=Grid::grid[x][y][z];

    cell.push_back(point);

}
/**
 *
 * @param all_points
 * @return
 */
Grid::Grid(std::vector<Point> const &all_points) {

    for (Point const &point:all_points){
        addToGrid(point);
    }
}



