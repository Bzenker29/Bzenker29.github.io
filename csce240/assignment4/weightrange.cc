//Coded by Bradley Zenker

#include "weightrange.h"
#include <iostream>

WeightRange::WeightRange() : smallest(0, "pounds"), largest(0, "pounds") {}

WeightRange::WeightRange(const Weight& small, const Weight& large) {
    // Convert the 'small' and 'large' weights to a common unit (pounds).
  Weight convertedSmall = small;
  Weight convertedLarge = large;
  convertedSmall.ConvertUnits("pounds");
  convertedLarge.ConvertUnits("pounds");

    // Display the converted weights for debugging or informational purposes.
  std::cout << "Converted Small: " << convertedSmall << std::endl;
  std::cout << "Converted Large: " << convertedLarge << std::endl;

    // Determine which weight is smaller and assign it to the 'smallest' member variable.
    // Assign the larger weight to the 'largest' member variable.
  if (convertedSmall.GetValue() <= convertedLarge.GetValue()) {
    smallest = convertedSmall;
    largest = convertedLarge;
  } else {
    smallest = convertedLarge;
    largest = convertedSmall;
  }

    // Display the assigned 'smallest' and 'largest' weights for debugging or informational purposes.
  std::cout << "Assigned Smallest: " << smallest << std::endl;
  std::cout << "Assigned Largest: " << largest << std::endl;
}


Weight WeightRange::GetSmallest() const { return smallest; }

Weight WeightRange::GetLargest() const { return largest; }

void WeightRange::SetSmallest(const Weight& small) {
  if (small.GetValue() <= largest.GetValue()) {
    smallest = small;
  } else {
    std::cerr << "Invalid smallest weight. It must be less than or equal to the largest weight.\n";
  }
}

void WeightRange::SetLargest(const Weight& large) {
  if (large.GetValue() >= smallest.GetValue()) {
    largest = large;
  } else {
    std::cerr << "Invalid largest weight. It must be greater than or equal to the smallest weight.\n";
  }
}

bool WeightRange::InRange(const Weight& weight, bool inclusive) const {
  double weightValue = weight.GetValue();
  double smallestValue = smallest.GetValue();
  double largestValue = largest.GetValue();

  if (inclusive) {
    return weightValue >= smallestValue && weightValue <= largestValue;
  } else {
    return weightValue > smallestValue && weightValue < largestValue;
  }
}

Weight WeightRange::Width() const {
  double widthValue = largest.GetValue() - smallest.GetValue();
  Weight width(widthValue, largest.GetUnits());
  return width;
}