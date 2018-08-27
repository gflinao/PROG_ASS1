// Log-inn
/* Genrev F Linao Assignment no.2 
This a program of a log book were you can write all the necessary data needed for the log
*/
#include <iostream> //PreprocessorDirectives #.
#include <string>

using namespace std;

int main()

{
    
    string tryagain="new";
    while (tryagain=="new")
    
    {
    cout << "Welcome to the LOG." << endl;
    
    char name[256];
    
    char address[256];
    
    char date[256];
    
    char time[256];
    
    char phone[256];
    
    char email[256];
    
    cout << "Enter Name: ";
    cin . getline(name,256);
    
    cout << "Enter Address: ";
    cin . getline(address,256);
    
    cout << "Enter Date: ";
    cin . getline(date,256);
    
    cout << "Enter Time: ";
    cin . getline(time,256);
    
    cout << "Enter Phone No.: ";
    cin . getline(phone,256);
    
    cout << "Enter Email: ";
    cin . getline(email,256);
    
    
    cout << "\nYour Name is: \n" << name;
    
    cout << "\nYour Address is: \n" << address;
    
    cout << "\nDate of arrival is: \n" << date;
    
    cout << "\nTime of arrival is: \n" << time;
    
    cout << "\nYour contact no. is: \n" << phone;
    
    cout << "\nYour Email is: \n" << email;
      
    cout << "\nWelcome to the LOG. For logging is just type new.\n";
        
    getline(cin,tryagain);
   
   }     
    return 0; 
}