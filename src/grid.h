#pragma once //ensures header file is only included once in compilation unit
#include <vector>
#include <raylib.h>

class Grid{
    public:
        //make public if going to use in other parts of program
        Grid();
        void Initialize();
        void Print();
        void Draw();
        int grid[20][10];

    private:
        std::vector<Color> GetCellColors();
        int numRows;
        int numCols;
        int cellSize;
        std::vector<Color> colors;
};