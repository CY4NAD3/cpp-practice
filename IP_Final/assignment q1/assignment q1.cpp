#include <iostream>
#include <string>
using namespace std;

int main() {
    int player_num = 5;   // Number of players
    int runs[player_num];       // Array to store runs
    int highest_run = 0;        // Variable to store the highest run
    int count = 0;              // Count of players with the highest run
    int sum=0;
    string m = "Man of the Match";

    cout << "Input the runs of 5 players: " << endl;

    // Input the runs for all players
    for (int i = 0; i < player_num; i++) {
        cin >> runs[i];
        if (runs[i] >= highest_run) {
            highest_run = runs[i]; // Update the highest run
        }
    }

    // Count the players who scored the highest run
    for (int i = 0; i < player_num; i++) {
        if (runs[i] == highest_run && highest_run >= 40) {
            count++;
        }
    }

    // Determine the output
    if (count > 0) {
        if (count == 1) {
            cout << count << " player is " << m << " with " << highest_run << " runs." << endl;
        } else {
            cout << count << " players are " << m << " with " << highest_run << " runs." << endl;
        }
    } 
    else {
        cout << "Bowler is the man of the match." << endl;
    }
    for(int i=0; i< player_num; i++){
        sum+=runs[i];
    }
        float avg = sum/player_num;
        cout<<"The average score is: "<<avg;
    return 0;
}
