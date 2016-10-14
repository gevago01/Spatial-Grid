# Spatial-Grid
A **spatial-grid** is the simplest method index multidimensional points (including spatial points). This porject implements a three-dimensional uniform spatial grid, which assigns points to individual cells within the grid. Assigning three-dimensional points to a grid is easy and can be done by calculating point modulo size of the grid. As an example consider a grid of size two, which is essentially a 2D array. To assign the points (1,0), (1,1) and (3,2) to the grid we calculate the following modulus (1 mod 2, 0 mod 2) = (1, 0), (1 mod 2, 1 mod 2) = (1, 1) and (3 mod 2, 2 mod 2) = (1, 0). A spatial grid cannot guarantee that points assigned to the same cell will be close to each other. Moreover points that are close to each other may be spread to multiple grid cells. 

## The application does the following:
1. Inserts two 3D points to a grid 
2. It queries the grid using three 3D points - two are found and one is not  

## Requirements: 
1. Assumes cmake and git are properly installed
2. Requires cmake version 3.6 - although it can work with other versions

## Notes: 
1. The project only uses STL Containers (no libraries)
2. The project uses a custom-made class *Point* 

## How to run on Linux
```bash
git clone https://github.com/gevago01/Spatial-Grid
mkdir build
cd build
cmake ..
make
./SpatialGrid sample.txt
