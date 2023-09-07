#include <iostream>
#include <string>

using namespace std;

int main(){

    //Initialize the variables
    string userInput = "";
    string fastestTime = "60:00";
    int totalTime = 0;
    int validTimes = 0;

    while (true) {
        cin >> userInput;

        if (userInput == "Q" || userInput == "Q") {
            break;
            //Ends code once q or Q is entered
        }
    }

    //Makes sure the inputs are the right format, mm:ss

    if (userInput.size() == 4 && userInput[1] == ':') {
        userInput = '0' + userInput;
    }

    if (userInput.size() == 4 && userInput[2] == ':') {
        userInput = userInput + '0';
    }

    if (userInput.size() != 5 && userInput[2] != ':' && userInput[0] < '0' && userInput[0] > '5' 
        && userInput[1] < '0' && userInput[1] > '9' && userInput[3] < '0' && userInput[3] > '5' 
        && userInput[4] < '0' && userInput[4] > '9') {

            cout << "The input " << validTimes + 1 << " did not match the expected format." << endl;
            cout << " The fastest and total running times are from the first " << validTimes << " valid times input." << endl;
            goto OUTPUT;
        }

    //Updates fastest time if needed
    if (userInput < fastestTime) {
        fastestTime = userInput;
    }

    //Equations for total time
    int mins = (userInput[0] - '0') * 10 + (userInput[1] - '0');
    int secs = (userInput[3] - '0') * 10 + (userInput[4] - '0');     

    totalTime = totalTime + (mins * 60 + secs);
    validTimes++;

    cout << validTimes << " valid time" << (validTimes != 1 ? "s" : "") << " read." << endl;

    OUTPUT:    

    cout << "The fastest mile time is " << fastestTime << endl;
    
    int hours = totalTime / 3600;
    int minutes = (totalTime % 3600) / 60;
    int seconds = totalTime % 60;


    if (hours) {
        cout << "Total run time is " << hours << ".";
    }
    else {
        cout << "Total run time is " << "."; 
    }
    cout << (minutes < 10 ? "0" : "") < minutes << ":" << (seconds < 10 ? "0" : "") << seconds << endl;

    return 0;
}
      