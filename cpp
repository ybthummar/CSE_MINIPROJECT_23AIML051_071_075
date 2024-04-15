#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class MovieTicketBooking
{
private:
    struct MovieDetails
    {
        char name[20];
        char email[50]; // Email ID of the customer
        int seat;       // Seat number
        int id;         // Booking ID
    };

    MovieDetails person[300];   // Array to store booking details
    int count = 0;              // Counter for the number of bookings
    int id2 = 1000;             // Initial booking ID
    int seat[101][101] = {{0}}; // 2D array to represent seats in the theater

public:
    // Function to start the booking system
    void startBookingSystem();

    // Function to change the price of a ticket (admin only)
    int changePrice(int prize);

    // Function to reserve a ticket
    void reservation(int array[], int price, int selection);

    // Function to display menu and get user choice
    int choice1();

    // Function to cancel a ticket
    void cancel(int array[]);

    // Function to print the ticket
    void ticket(int choice, const char name[], int id2, int price, const char showName[]);

};