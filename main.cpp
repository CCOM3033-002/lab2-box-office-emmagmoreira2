//Emma Moreira Irizarry, 801237349, emmagmoreira2
//Colaboraciones: Fernando Berrios y Kaleb Martinez



#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
// Establish what the program does
    cout << "This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater.\n" ;

    cout<< "";

// Declare all variables
    string movie_name;
    double adult_tickets;
    double child_tickets;
    double price_adult;
    double price_child;
    double Gross;
    double Net;
    double Distributor;

// Initialize the variables
    cout<< "Enter the name of the movie: ";
    getline(cin, movie_name);

    cout<< "Enter the amount of adult tickets sold: ";
    cin>> adult_tickets;

    cout<< "Enter the amount of child tickets sold: ";
    cin>> child_tickets;

    cout<< "";

// Calcualte the number of tickets times the price
    price_adult= 10 * adult_tickets;
    price_child= 6 * child_tickets;

// Finding the gross office profit that is all the tickets summed
    Gross= price_adult + price_child;

// Finding the net office profit, that is the 20% of the Gross
    Net= Gross * 20 / 100;

// Finding the amount paid to the distributors, gross minus the net
    Distributor= Gross - Net;

// line of separation

    cout<< "------------------\n";
    

// Displaying the results 
    cout<< "Movie Name: " << setw(18) << '\"' << movie_name << '\"'<< endl;
    cout<< "Adult Tickets Sold: " << setw(15) << price_adult << endl;
    cout<< "Child Tickets Sold: " << setw(15) << price_child << endl;
    cout<< "Gross Box Office Profit: "<< "$"<< setw(9) << setprecision(2) << fixed <<Gross<< endl;
    cout<< "Net Box Office Profit: " <<  "$"<< setw(9) << setprecision(2) << fixed<< Net<< endl;
    cout<< "Amount Paid to Distributor: " <<  "$"<< setw(9)<< setprecision(2) << fixed<< Distributor<< endl;

    return 0;
    
    
    

}


