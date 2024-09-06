//Emma Moreira Irizarry
//801237349
//Colaboraciones: Fernando y Kaleb 



#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
    // Establecer que hace el programa
    cout << "This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater.\n" ;

    // Declarar variables
    string movie_name;
    double adult_tickets;
    double child_tickets;
    double price_adult;
    double price_child;
    double Gross;
    double Net;
    double Distributor;

// Inicializar variables
    cout<< "Enter the name of the movie: ";
    getline(cin, movie_name);

    cout<< "Enter the amount of adult tickets sold: ";
    cin>> adult_tickets;

    cout<< "Enter the amount of child tickets sold: ";
    cin>> child_tickets;

// Calcular los precios de los tickets
    price_adult= 10 * adult_tickets;
    price_child= 6 * child_tickets;

// 
    Gross= price_adult + price_child;

    Net= Gross * 20 / 100;

    Distributor= Gross - Net;

    cout<< "------------------\n";
    cout<< setprecision (6);

    cout<< "Movie Name: " << setw(18) << '\"' << movie_name << '\"'<< endl;
    cout<< "Adult Tickets Sold: " << setw(15) << price_adult << endl;
    cout<< "Child Tickets Sold: " << setw(15) << price_child << endl;
    cout<< "Gross Box Office Profit: "<< setw(8) << setprecision(2) << fixed<< "$ " <<Gross<< endl;
    cout<< "Net Box Office Profit: " << setw(10) << setprecision(2) << fixed<< "$ " << Net<< endl;
    cout<< "Amount Paid to Distributor: " << setw(5)<< setprecision(2) << fixed<< "$ " << Distributor<< endl;

    return 0;
    
    
    

}


