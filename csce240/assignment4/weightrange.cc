#include <iostream>

class WeightRange {
private:
    double smallestWeight;
    double largestWeight;

public:
    WeightRange() : smallestWeight(0.0), largestWeight(0.0) {}

    WeightRange(double smallest, double largest) {
        if (smallest <= largest) {
            smallestWeight = smallest;
            largestWeight = largest;
        } else {
            std::cerr << "Error: Smallest weight cannot be greater than the largest weight." << std::endl;
            smallestWeight = 0.0; // Set default values
            largestWeight = 0.0;
        }
    }

    double getSmallestWeight() const {
        return smallestWeight;
    }

    double getLargestWeight() const {
        return largestWeight;
    }

    void setSmallestWeight(double smallest) {
        if (smallest <= largestWeight) {
            smallestWeight = smallest;
        } else {
            std::cerr << "Error: Smallest weight cannot be greater than the largest weight." << std::endl;
        }
    }

    void setLargestWeight(double largest) {
        if (largest >= smallestWeight) {
            largestWeight = largest;
        } else {
            std::cerr << "Error: Largest weight cannot be smaller than the smallest weight." << std::endl;
        }
    }

    bool InRange(double weight, bool inclusive = true) {
        if (inclusive) {
            return (weight >= smallestWeight && weight <= largestWeight);
        } else {
            return (weight > smallestWeight && weight < largestWeight);
        }
    }

    double Width() const {
        return largestWeight - smallestWeight;
    }
};

int main() {
    // Create a WeightRange object using the two-parameter constructor
    WeightRange wr(10.0, 20.0);

    // Check if a weight is in the range (inclusive)
    std::cout << "InRange(15.0): " << wr.InRange(15.0) << std::endl; // Should return true

    // Check if a weight is in the range (exclusive)
    std::cout << "InRange(10.0, false): " << wr.InRange(10.0, false) << std::endl; // Should return false

    // Calculate and display the width of the range
    std::cout << "Width of the Range: " << wr.Width() << std::endl;

    return 0;
}
