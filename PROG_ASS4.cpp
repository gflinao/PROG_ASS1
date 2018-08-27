#include <iostream>
using namespace std;

int main() {
    
    int a = 15, b = 10, c = 3;
    int L = 9, W = 4, H = 3;
    
    
    float A = (a-c-c);
    float B = (b-c-c);
    float C = (c);
    double V = (L*W*H);

    cout << " \nProblem Solving 101\n" << endl;
    
    cout << " 1.)Mary wants to make a box. She starts with a piece of cardboard whose length is 15 centimeters and width is 10 centimeters. Then she cuts 4 congruent squares with sides of 3 centimeters at four corners and folded at the broken lines to make the box. What is the volume of the box?\n" << endl;
    
    cout << " First solve for the length and the width of the box to find the volume. " << endl;
    
    //Where:
    cout << " The length of the box is: ";
    cin >> A;
    
    cout << " The width of the box is: ";
    cin >> B;
    
    cout << " The height of the box is: " << C << endl;
    
    cout << "The Volume of the box is ?: ";
    cin >> V;
    if (V != 108) {
    cout << " Incorrect " << endl;
    }
    if (V == 108) {
    cout << " Correct " << endl;
}
    cout << "Final answer is: 108 cm^3" << endl;

    return 0;
}