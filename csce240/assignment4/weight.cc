// Coded by Bradley Zenker

#include "weight.h"
#include <stdexcept>

Weight::Weight(double v, const std::string& u) : value(v), units("pounds") {
    // Constructor for Weight, initializes 'value' with 'v' and sets 'units' to "pounds" by default.
    // Then, attempts to set the provided units using SetUnits() method.
  SetUnits(u);

    // Check if the provided 'v' is negative and, if so, display an error message and set 'value' to 0.
  if (v < 0) {
    std::cerr << "Invalid weight value provided. Setting to default 0.\n";
  value = 0;
    }
}

void Weight::SetValue(double v) {
    // Set the 'value' of the weight. Only allow non-negative values.
  if (v >= 0) {
    value = v;
  } else {
        // Display an error message if an invalid value is provided and keep the previous value.
    std::cerr << "Invalid weight value provided. Keeping the previous value.\n";
  }
}

double Weight::GetValue() const {
    // Retrieve and return the current 'value' of the weight.
  return value;
}

void Weight::SetUnits(const std::string& u) {
    // Set the units of the weight, but only allow valid unit names ("ounces," "pounds," "grams," or "kilograms").
  if (u == "ounces" || u == "pounds" || u == "grams" || u == "kilograms") {
    units = u;
  } else {
        // Display an error message if invalid units are provided and keep the previous units.
    std::cerr << "Invalid units provided. Keeping the previous units.\n";
  }
}


std::string Weight::GetUnits() const {
return units;
}

void Weight::ConvertUnits(const std::string& newUnits) {
  if (newUnits == units) return;

  if (units == "ounces") {
    if (newUnits == "pounds") value /= 16.0;
    else if (newUnits == "grams") value *= 28.3495;
    else if (newUnits == "kilograms") value /= 35.274;
  } else if (units == "pounds") {
    if (newUnits == "ounces") value *= 16.0;
    else if (newUnits == "grams") value *= 453.592;
    else if (newUnits == "kilograms") value /= 2.20462;
  } else if (units == "grams") {
    if (newUnits == "ounces") value /= 28.3495;
    else if (newUnits == "pounds") value /= 453.592;
    else if (newUnits == "kilograms") value /= 1000.0;
  } else if (units == "kilograms") {
    if (newUnits == "ounces") value *= 35.274;
    else if (newUnits == "pounds") value *= 2.20462;
    else if (newUnits == "grams") value *= 1000.0;
  }

  units = newUnits;
}


std::ostream& operator<<(std::ostream& out, const Weight& w) {
  out << w.value << " " << w.units;return out;
}