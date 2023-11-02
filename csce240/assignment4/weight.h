#ifndef WEIGHT_H
#define WEIGHT_H

#include <string>
#include <iostream>

class Weight {
private:
    double value;
    std::string units;

    // Private helper function to validate the unit
    bool isValidUnit(const std::string& unit) const;

public:
    // Constructor with default arguments
    Weight(double val, const std::string& unit);

    // Accessor functions
    double GetValue() const;
    std::string GetUnits() const;

    // Mutator functions
    void SetValue(double val);
    void SetUnits(const std::string& unit);

    // Convert the weight to the specified units
    void ConvertUnits(const std::string& targetUnit);

    friend std::ostream& operator<<(std::ostream& os, const Weight& weight);
};

#endif
