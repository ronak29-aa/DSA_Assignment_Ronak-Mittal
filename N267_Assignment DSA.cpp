#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;             // total time taken so far
        int n = tickets.size();   // total number of people in the line
        // loop through each person in the queue
        for (int i = 0; i < n; i++) {
            // if the person is before or exactly at position k,
            // they will get to buy up to tickets[k] tickets
            if (i <= k)
                time += min(tickets[i], tickets[k]);
            // if the person is after k,
            // they will buy one less because the process stops once k finishes
            else
                time += min(tickets[i], tickets[k] - 1);
        }
        // total time in seconds until person k is done buying all tickets
        return time;
    }
};

int main() {
    Solution sol;
    vector<int> tickets;
    int n, k, value;

    cout << "Enter number of people: ";
    cin >> n;

    cout << "Enter tickets required by each person:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        tickets.push_back(value); // store each person's ticket count
    }

    cout << "Enter position k (0-indexed): ";
    cin >> k;

    // call the function to calculate total time
    int result = sol.timeRequiredToBuy(tickets, k);

    // display the final answer neatly
    cout << "\nTime required for person " << k
         << " to finish buying tickets: "
         << result << " seconds." << endl;

    return 0;
}
