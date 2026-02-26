#include <iostream>
#include <cmath>   // sqrt için

using namespace std;

int main() {

    // -------------------- Task 1 --------------------
    string name;
    string student_id;

    cout << "What is your name?" << endl;
    cin >> name;
    cout << "Hello " << name << endl;

    cout << "What is your Student ID?" << endl;
    cin >> student_id;
    cout << "Your ID is " << student_id << endl;


    // -------------------- Task 2 --------------------
    int tot_seconds;

    cout << "total seconds:" << endl;
    cin >> tot_seconds;

    int hour = tot_seconds / 3600;
    int kalan_seconds = tot_seconds % 3600;
    int minutes = kalan_seconds / 60;
    int seconds = kalan_seconds % 60;

    cout << tot_seconds << " second is "
         << "Hours: " << hour
         << " Minutes: " << minutes
         << " Seconds: " << seconds << endl;


    // -------------------- Task 3 --------------------
    double x1, y1, x2, y2;

    cout << "Enter x1: ";
    cin >> x1;

    cout << "Enter y1: ";
    cin >> y1;

    cout << "Enter x2: ";
    cin >> x2;

    cout << "Enter y2: ";
    cin >> y2;

    double distance = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

    cout << "uzaklık: " << distance << endl;


    // -------------------- Task 4 --------------------
    cout << "*******\n *****\n  ***\n   *" << endl;

    return 0;
}