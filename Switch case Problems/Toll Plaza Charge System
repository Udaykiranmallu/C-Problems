#include <stdio.h>

int main() {
    int vehicleType, trips;
    int amount = 0;

    // Input
    scanf("%d", &vehicleType);
    scanf("%d", &trips);

    switch(vehicleType) {
        case 1:  // Car
            if (trips == 1) {
                amount = 100;
            } else if (trips >= 2 && trips <= 10) {
                amount = 800;   // Monthly pass
            } else {
                amount = 800;   // More than 10 trips, still monthly pass
            }
            break;

        case 2:  // Truck
            amount = trips * 240;  // ₹240 per trip
            break;

        default:
            printf("Invalid vehicle type\n");
            return 0;
    }

    printf("₹%d\n", amount);

    return 0;
}
