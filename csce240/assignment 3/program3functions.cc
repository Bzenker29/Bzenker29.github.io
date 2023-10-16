//Copyright Bradley Zenker 2023

#include "program3functions.h"
#include "checkArraysMatch.h"
#include <iostream>
#include <iomanip>
#include <cmath>

int CountAboveAv(const double arr[][10], int numRows) {
  double sum = 0;
  int count = 0;

  for (int i = 0; i < numRows; ++i) {
    for (int j = 0; j < 10; ++j) {
      sum += arr[i][j];
    }
  }
  double average = sum / (numRows * 10);

  for (int i = 0; i < numRows; ++i) {
    for (int j = 0; j < 10; ++j) {
      if (arr[i][j] > average) {
        count++;
      }
    }
  }
  return count;
}

void SortByCol(double arr[][10], int numRows, int colNum, bool ascending = true) {

  for (int i = 0; i < numRows - 1; i++) {

    for (int j = 0; j < numRows - i - 1; j++) {

        if ((ascending && arr[j][colNum] > arr[j + 1][colNum]) ||
        (!ascending && arr[j][colNum] < arr[j + 1][colNum])) {

          for (int k = 0; k < 10; k++) {

            double temp = arr[j][k];
            arr[j][k] = arr[j + 1][k];
            arr[j + 1][k] = temp;
          }
        }
    }
  }
}

void SortByRow(double arr[][10], int numRows, int rowToSortBy, bool ascending) {

  for (int i = 0; i < 10 - 1; ++i) {

    for (int j = 0; j < 10 - i - 1; ++j) {

      if (ascending) {

        if (arr[rowToSortBy][j] > arr[rowToSortBy][j + 1]) {

          for (int k = 0; k < numRows; ++k) {

            double temp = arr[k][j];
            arr[k][j] = arr[k][j + 1];
            arr[k][j + 1] = temp;
          }
        }
      } 
      else {

        if (arr[rowToSortBy][j] < arr[rowToSortBy][j + 1]) {

          for (int k = 0; k < numRows; ++k) {

            double temp = arr[k][j];
            arr[k][j] = arr[k][j + 1];
            arr[k][j + 1] = temp;
          }
        }
      }
    }
  }
}

double MedianInCol(double arr[][10], int numRows, int col) {

  double colValues[numRows];
  for (int i = 0; i < numRows; ++i) {

    colValues[i] = arr[i][col];
  }

  for (int i = 0; i < numRows - 1; ++i) {

    for (int j = 0; j < numRows - i - 1; ++j) {

      if (colValues[j] > colValues[j + 1]) {

        double temp = colValues[j];
        colValues[j] = colValues[j + 1];
        colValues[j + 1] = temp;
      }
    }
  }

  if (numRows % 2 == 1) {
    return colValues[numRows / 2];
  }
  else {
    return (colValues[(numRows - 1) / 2] + colValues[numRows / 2]) / 2.0;
  }
}

int ModeInCol(double arr[][10], int numRows, int col, double modes[2]) {

  int maxCount = 0;
  int modeCount = 0;
  double firstMode = 0.0;
  double secondMode = 0.0;

  for (int i = 0; i < numRows; ++i) {

    int currentCount = 1;

    for (int j = i + 1; j < numRows; ++j) {

      if (arr[i][col] == arr[j][col]) {

        currentCount++;
      }
    }

    if (currentCount > maxCount) {

      maxCount = currentCount;
      firstMode = arr[i][col];
      secondMode = 0.0;
      modeCount = 1;
    } 

    else if (currentCount == maxCount) {

      if (modeCount == 1 && arr[i][col] != firstMode) {

        secondMode = arr[i][col];
        modeCount++;
      } 
      else if (arr[i][col] != firstMode && arr[i][col] != secondMode) {

        return 0;  
      }
    }
  }

  if (modeCount == 0) {

    return 0; 
  }

  modes[0] = firstMode;
  if (modeCount == 2) {

    modes[1] = secondMode;
  }
  
  return modeCount;
}

