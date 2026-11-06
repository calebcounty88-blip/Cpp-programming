#include <iostream>
using namespace std;

int main() {
    const int DAYS = 7;
    double revenue[DAYS];
    string dayNames[] = {"Sunday", "Monday", "Tuesday", "Wednesday",
                         "Thursday", "Friday", "Saturday"};

    cout << "===== Weekly Revenue Tracker =====" << endl;

    for (int i = 0; i < DAYS; i++) 
	{
        cout << "Enter revenue for " << dayNames[i] << ": ";
        cin >> revenue[i];
    }

    double totalWeekly = 0.0;
    for (int i = 0; i < DAYS; i++) 
	{
        totalWeekly += revenue[i];
    }
    double averageDaily = totalWeekly / DAYS;
    
    cout << "\n--- Revenue Summary ---" << endl;
    cout << "Total Weekly Revenue: $" << totalWeekly << endl;
    cout << "Average Daily Revenue: $" << averageDaily << endl;

    return 0;
}