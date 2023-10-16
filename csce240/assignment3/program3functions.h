//Copyright George Bujoreanu 2023

#ifndef PROGRAM3FUNCTIONS_H
#define PROGRAM3FUNCTIONS_H

int CountAboveAv(const double arr[][10], int numRows);

void SortByCol(double arr[][10], int numRows, int colNum, bool ascending);

void SortByRow(double arr[][10], int numRows, int colNum, bool ascending);

double MedianInCol(double arr[][10], int numRows, int colNum);

int ModeInCol(double arr[][10], int numRows, int colNum, double modes[2]);

#endif // PROGRAM3FUNCTIONS_H

