#include <vector>
struct Stats {
        double average;
        double min;
        double max;
    };
namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
    Stats ComputeStatistics(const std::vector<double>& data);
}
