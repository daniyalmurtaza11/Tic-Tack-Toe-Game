#include <iostream>
using namespace std;

int main() {
    cout << "\t\t\tTASK" << endl;
    cout << "\t\tWelcome to the Monks and Monsters River Crossing Game!" << endl;
    cout << "\tTRANSFER ALL THE MONKS AND MONSTERS SAFELY ON THE LEFT SIDE OF RIVER TO WIN SUCCESSFULLY" << endl;
    int monks[3] = {1, 1, 1};
    int monsters[3] = {1, 1, 1};
    int rightMonks = 3, rightMonsters = 3;
    int leftMonks = 0, leftMonsters = 0;
    while (true) {
        int selectedMonks = 0, selectedMonsters = 0;
        cout << "Monks on right side = " << rightMonks << endl;
        cout << "Monsters on right side = " << rightMonsters << endl;
        cout << "Monks on left side = " << leftMonks << endl;
        cout << "Monsters on left side= " << leftMonsters << endl;
        cout << "How many character of monks do you want to move : ";
        cin >> selectedMonks;
        cout << "How many character of monsters do you want to move : ";
        cin >> selectedMonsters;
        if ((selectedMonks + selectedMonsters < 1 || selectedMonks + selectedMonsters > 2) ||
            (selectedMonks > rightMonks || selectedMonsters > rightMonsters)) {
            cout << "Only two characters can jump in the boat at one time";
            continue;  
        }
        rightMonks -= selectedMonks;
        rightMonsters -= selectedMonsters;
        leftMonks += selectedMonks;
        leftMonsters += selectedMonsters;
        if ((leftMonks < leftMonsters && leftMonks > 0) || (rightMonks < rightMonsters && rightMonks > 0)) {
            cout << "\n\t\tMonks are eaten by the Monsters! Game Over!" << endl;
            break;
        }
        if (leftMonks == 3 && leftMonsters == 3) {
            cout << "\n\t\tCongratulations! You have won the game!" << endl;
            break;
        }
    }
    cout << "Game End." << endl;
    return 0;
}





















