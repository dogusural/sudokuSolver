#include <iostream>
#include "sudoku.hpp"
using namespace std;

int SUDOKU[BOARDWIDTH][BOARDWIDTH] =   {{8, 0, 0, 0, 0, 2, 1, 0, 0}, 
                                        {0, 4, 9, 8, 0, 0, 6, 0, 0}, 
                                        {0, 0, 0, 0, 7, 0, 0, 0, 2}, 
                                        {0, 3, 7, 0, 5, 0, 0, 1, 0}, 
                                        {0, 0, 0, 0, 0, 0, 0, 0, 0}, 
                                        {0, 9, 0, 0, 2, 0, 7, 8, 0}, 
                                        {4, 0, 0, 0, 6, 0, 0, 0, 0}, 
                                        {0, 0, 3, 0, 0, 4, 9, 2, 0}, 
                                        {0, 0, 5, 2, 0, 0, 0, 0, 6}}; 


int main()
{

Sudoku s(SUDOKU);
s.playSudoku();



    return 0;
}