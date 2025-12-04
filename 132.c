#include <stdio.h>
int main() {
    enum TrafficLight { RED, YELLOW, GREEN };
    enum TrafficLight signal = YELLOW;
    if (signal == RED) {
        printf("Stop\n");
    } 
    else if (signal == YELLOW) {
        printf("Wait\n");
    } 
    else if (signal == GREEN) {
        printf("Go\n");
    }

    return 0;
}
