#ifndef ELEVATOR_H
#define ELEVATOR_H

// Imports
#include <thread>

// Had this from another project, works well here
#include "MPSCQueue/MPSCQueue.h"

// Direction enum
enum class Direction : uint8_t {
    UP = 0,
    IDLE = 1,
    DOWN = 2
};

// Main Elevator Class
class Elevator {
    private:
        // Track what floor the elevator is currently on
        // The user should not be able to access this
        int currFloor;

        // Highest floor available
        int maxFloor;
    
    public:
        // Consructor
        // Take a parameter for max floor available
        // Default the parameter to 100
        Elevator(int inpMaxFloor = 100) {
            // Initialize currFloor to Floor 1
            currFloor = 1;

            // Save the maxFloor parameter
            maxFloor = inpMaxFloor;
        }
};

#endif