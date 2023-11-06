// Coded by Bradley Zenker

#ifndef WEIGHT_H
#define WEIGHT_H

#include <iostream>
#include <string>

class Weight {
private:
  double value; 
  std::string units; 
public:
    // Constructor for the Weight class with optional parameters 'v' and 'u.'
    // It initializes 'value' with 'v' and 'units' with 'u' (defaulting to "pounds").
  Weight(double v = 0.0, const std::string& u = "pounds");

    // Set the 'value' of the weight to the provided 'v' if 'v' is non-negative.
  void SetValue(double v);

    // Get and return the current 'value' of the weight.
  double GetValue() const;

    // Set the units of the weight to the provided 'u,' but only if 'u' is a valid unit.
  void SetUnits(const std::string& u);

    // Get and return the current units of the weight.
  std::string GetUnits() const;

    // Convert the units of the weight to the specified 'newUnits.'
  void ConvertUnits(const std::string& newUnits);

    // Allow the '<<' operator to be used to display a Weight object's value and units in an output stream.
  friend std::ostream& operator<<(std::ostream& out, const Weight& w);
};


#endif 
