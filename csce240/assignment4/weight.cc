#include "weight.h"

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <value> <units>" << std::endl;
        return 1;
    }

    double value = std::stod(argv[1]);
    std::string units = argv[2];

    Weight w(value, units);

    std::cout << "Weight: " << w << std::endl;

    return 0;
}
