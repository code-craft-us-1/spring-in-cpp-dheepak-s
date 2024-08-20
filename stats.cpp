#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<double>& data ) {
    //Implement statistics here
    Stats computedStats;
    if(data.size() == 0) {
        computedStats.average = 0;
        computedStats.min = 0;
        computedStats.max = 0;
    } else {
        double sum = 0;
        computedStats.min = data[0];
        computedStats.max = data[0];
        for(auto i : data) {
            sum += i;
            if(i < computedStats.min) {
                computedStats.min = i;
            }
            if(i > computedStats.max) {
                computedStats.max = i;
            }
        }
        computedStats.average = sum / data.size();
    }
}
