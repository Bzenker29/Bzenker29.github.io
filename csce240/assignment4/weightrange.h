#ifndef WEIGHTRANGE_H
#define WEIGHTRANGE_H

class WeightRange {
private:
    double smallestWeight;
    double largestWeight;

public:
    WeightRange();
    WeightRange(double smallest, double largest);
    WeightRange(const WeightRange& other);

    double getSmallestWeight() const;
    double getLargestWeight() const;
    void setSmallestWeight(double smallest);
    void setLargestWeight(double largest);

    bool InRange(double weight, bool inclusive = true);
    double Width() const;
};

#endif
