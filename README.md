//C++ MINIPROJECT PREPARED BY 23AIML051_071_075
#include<iostream>
class MovieTicketBooking
{
private:
    struct MovieDetails
    {
        char name[20];
        unsigned int phone;
        int seat;
        int id;
    };
    MovieDetails person[300];
    int count = 0;
    int id2 = 1000;
    int seat[101][101] = {{0}};

public:
    void startBookingSystem();
    int changePrice(int prize);
    void reservation(int array[], int price, int selection);
    int choice1();
    void cancel(int array[]);
    void ticket(int choice, const char name[], int id2, int price);
    void details();
    int movie();
    int cMovie();
};
int main()
{
    MovieTicketBooking booking;
    booking.startBookingSystem();
    return 0;
}
