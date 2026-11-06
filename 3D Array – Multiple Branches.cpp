#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    const int BRANCHES = 3;
    const int FLOORS = 5;
    const int ROOMS_PER_FLOOR = 10;
    int chain[BRANCHES][FLOORS][ROOMS_PER_FLOOR]; 

    cout << "===== Hotel Chain – All Branches =====" << endl;
    for (int branch = 0; branch < BRANCHES; branch++) 
	{
        for (int floor = 0; floor < FLOORS; floor++) {
            for (int room = 0; room < ROOMS_PER_FLOOR; room++) {
                chain[branch][floor][room] = rand() % 2;
            }
        }
    }
    int grandTotalOccupied = 0;
    for (int branch = 0; branch < BRANCHES; branch++) {
        int branchTotal = 0;
        for (int floor = 0; floor < FLOORS; floor++) {
            for (int room = 0; room < ROOMS_PER_FLOOR; room++) {
                if (chain[branch][floor][room] == 1) {
                    branchTotal++;
                }
            }
        }
        cout << "Branch " << (branch + 1) << " — Occupied Rooms: " << branchTotal << endl;
        grandTotalOccupied += branchTotal;
    }

    cout << "\nTotal Occupied Rooms Across All Branches: "
         << grandTotalOccupied << endl;

    return 0;
}