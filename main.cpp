#include <iostream>
#include "Grid.h"

int main() {
    /*create three points*/
    std::vector<double> point1_coordinates={20.8119273751133, -3.5897997256242977, -1.4163173152893527};
    std::vector<double> point2_coordinates={355.40172098272495, 344.28491991626447, 358.9572812208167};
    std::vector<double> point3_coordinates={279.64427352407716, 304.3401047349192, 299.5749463550786};
    Point point1(point1_coordinates);
    Point point2(point2_coordinates);
    Point point3(point3_coordinates);

    //construct a grid with just two points (1 & 2)
    std::vector<Point> all_points;
    all_points.push_back(point1);
    all_points.push_back(point2);

    Grid grid(all_points);

    //add the third point in the vector
    all_points.push_back(point3);

    //query the grid for all three points
    for (Point &p:all_points){
        bool found=grid.findPoint(p);
        if (found){
            std::cout<<"Point"<<p<<" has been found"<<std::endl;
        }
        else{
            std::cout<<"Point"<<p<<" has not been found"<<std::endl;
        }

    }

    return 0;
}