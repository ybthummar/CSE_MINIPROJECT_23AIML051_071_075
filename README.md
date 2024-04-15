**Movie Ticket Booking System Readme**

*Overview:*
This project implements a simple movie ticket booking system in C++. It allows users to reserve movie tickets, cancel reservations, view reserved tickets, and change ticket prices. The system also provides an administrative interface for managing ticket prices and viewing reservation details.

*Features:*
1. *Reservation:* Users can reserve movie tickets by selecting a movie, entering their details, and choosing a seat.
2. *Cancellation:* Users can cancel their reserved tickets by providing the booking ID.
3. *Price Modification:* Administrators can change the price of tickets by entering a password.
4. *View Reserved Tickets:* Administrators can view details of all reserved tickets by entering a password.
5. *User-Friendly Interface:* The system provides a simple menu-driven interface for users to interact with.

*File Structure:*
- *cpp:* Contains the main function to start the booking system.
- *MovieTicketBooking.cpp/h:* Implements the MovieTicketBooking class, which handles all functionalities of the ticket booking system.
- *README.md:* Documentation file providing an overview of the project and instructions for usage.

*Instructions for Usage:*
1. Compile the program using a C++ compiler.
2. Run the executable file.
3. Choose options from the menu to perform actions such as reservation, cancellation, etc.
4. Administrators can enter a password to access additional features like changing ticket prices and viewing reservation details.

*Password:*
The default password to access administrative features is "pass". Administrators can change this password by modifying the source code.

*Note:*
- The project currently supports a maximum of 300 bookings.
- The available movies are hardcoded in the system. To add or remove movies, modify the movie() and cMovie() functions in the MovieTicketBooking class.
- The system assumes a theater with 100 seats. Modify the seat array size accordingly for different theater configurations.

*Contributors:*
-23AIML051-HET PATEL
-23AIML071-YUG THUMMAR
-23AIML075-PRIT VARASADIYA

