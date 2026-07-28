#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Structure for a business card
struct BusinessCard {
    string companyName;
    string companyAddress;
    string phoneNumber;
    string workingHours;
    string representative;
    double priceQuoted;
};

int main() {
    // Seed random number generator so prices change every run
    srand(time(0));

    // Create 5 different companies
    BusinessCard company1;
    company1.companyName = "Tech Solutions";
    company1.companyAddress = "123 Main Street";
    company1.phoneNumber = "555-1111";
    company1.workingHours = "9 AM - 5 PM";
    company1.representative = "John Smith";
    company1.priceQuoted = rand() % 500 + 100;

    BusinessCard company2;
    company2.companyName = "Digital Designs";
    company2.companyAddress = "456 Oak Avenue";
    company2.phoneNumber = "555-2222";
    company2.workingHours = "8 AM - 6 PM";
    company2.representative = "Sarah Lee";
    company2.priceQuoted = rand() % 500 + 100;

    BusinessCard company3;
    company3.companyName = "Code Masters";
    company3.companyAddress = "789 Pine Road";
    company3.phoneNumber = "555-3333";
    company3.workingHours = "10 AM - 7 PM";
    company3.representative = "Mike Johnson";
    company3.priceQuoted = rand() % 500 + 100;

    BusinessCard company4;
    company4.companyName = "Future Systems";
    company4.companyAddress = "321 Maple Lane";
    company4.phoneNumber = "555-4444";
    company4.workingHours = "9 AM - 4 PM";
    company4.representative = "Emily Davis";
    company4.priceQuoted = rand() % 500 + 100;

    BusinessCard company5;
    company5.companyName = "Innovate Inc.";
    company5.companyAddress = "654 Cedar Street";
    company5.phoneNumber = "555-5555";
    company5.workingHours = "7 AM - 5 PM";
    company5.representative = "David Wilson";
    company5.priceQuoted = rand() % 500 + 100;

    // Store companies in an array
    BusinessCard companies[5] = {
        company1, company2, company3, company4, company5
    };

    // Find the cheapest company
    int cheapestIndex = 0;

    for (int i = 1; i < 5; i++) {
        if (companies[i].priceQuoted < companies[cheapestIndex].priceQuoted) {
            cheapestIndex = i;
        }
    }

    // Display all company prices
    cout << "Company Price Comparison\n";
    cout << "-------------------------\n";

    for (int i = 0; i < 5; i++) {
        cout << companies[i].companyName 
             << " Price: $" 
             << companies[i].priceQuoted 
             << endl;
    }

    // Display best choice
    cout << "\nBest Company Choice:\n";
    cout << "Company: " << companies[cheapestIndex].companyName << endl;
    cout << "Representative: " << companies[cheapestIndex].representative << endl;
    cout << "Phone: " << companies[cheapestIndex].phoneNumber << endl;
    cout << "Address: " << companies[cheapestIndex].companyAddress << endl;
    cout << "Working Hours: " << companies[cheapestIndex].workingHours << endl;
    cout << "Price: $" << companies[cheapestIndex].priceQuoted << endl;

    return 0;
}