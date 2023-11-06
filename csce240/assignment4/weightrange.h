// Coded by Bradley Zenker

#ifndef WEIGHTRANGE_H
#define WEIGHTRANGE_H

#include "weight.h"

class WeightRange {
  private:
  Weight smallest;
  Weight largest;

public:
    // Default constructor for creating an empty WeightRange.
  WeightRange();

    // Constructor to initialize WeightRange with a small and large Weight.
  WeightRange(const Weight& small, const Weight& large);

    // Get the smallest Weight in the range.
  Weight GetSmallest() const;

    // Get the largest Weight in the range.
  Weight GetLargest() const;

    // Set the smallest Weight in the range.
  void SetSmallest(const Weight& small);

    // Set the largest Weight in the range.
  void SetLargest(const Weight& large);

    // Check if a given Weight is within the range.
    // Optional parameter 'inclusive' specifies whether the endpoints are inclusive by default.
  bool InRange(const Weight& weight, bool inclusive = true) const;

    // Calculate and return the width of the WeightRange.
  Weight Width() const;
};


#endif 
