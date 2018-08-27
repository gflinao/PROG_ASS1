#include <iostream>

using namespace std;

int main() {
    
    int age = 25;
    int deposit = 5000;
    int a = 5, b = 105, c = 34, d = 68;
    
    
    float A = (age > 21 || deposit > 6000);{
        cout << A << endl;
}
    float B = (age <= 23 || deposit >= 3000);{
        cout << B << endl;
}
    //False >&&>
    float C = (age > 35 && deposit > 4500);{
       cout << C << endl;
}
    float D = (age > 23 && deposit > 3000);{
       cout << D << endl;
}
    //False <&&<
    float E = (age < 21 && deposit < 4000); {
      cout << E << endl;
}
    float F = (a+b+c) > (d*a-b);
    float G = (b+d) <= (d*a++) || (c*a);
    float H = !(a*c) >= (b/a+c) < !(a+d);
    float I = (b-d*a) < !(c*a+b++*!d);
    float J = !(d*!a) || (b*a);
    
    cout << F << endl;
    cout << G << endl;
    cout << H << endl;
    cout << I << endl;
    cout << J << endl;
    
    
    return 0;
}