# **Movie Ticket Pricing System** 

# **Dynamic Pricing:**

* Dynamic pricing is used to create different prices for different customers, based on their location or other circumstances. 

* This method was first used for American Airlines in the year 1980. They figured out that not all customers are the same, they all have different concerns and different priorities.

* While some customers want tickets at a cheaper price while others want good service. This method is now used in all movie booking systems.

* There are some parameters, depends on which the price varies, like whether the customer wants to book a ticket in the front row or the back, or the customer wants an executive seat or a couple of seats. 

* Not only the seats, but prices also depend on where the movie hall is located and which show timing the customer has chosen.

* The other way is to come up with discounts or to give users with customized offers for a limited period. In other words, dynamic pricing is a prediction problem, where machine learning is the best tool to tackle it.

# Hardware and Software used:

* A suitable OS.

* A desktop or laptop.

* Enough RAM to run the program without any interruption.

* Python 3 or upwards installed on your system.

# System Requirements

* It should be able to list the cities where affiliate cinemas are located.

* Each cinema can have multiple halls and each hall can run one movie show at a time 

* Each Movie will have multiple shows.

* Customers should be able to search movies by their title, language, genre, release date, and city name.

* Once the customer selects a movie, the service should display the cinemas running that movie and its available shows.

* The customer should be able to select a show at a particular cinema and book their tickets.

* The service should show the customer the seating arrangement of the cinema hall. The customer should be able to select multiple seats according to their preference.

* The customer should be able to distinguish between available seats and booked ones.

* The system should send notifications whenever there is a new movie, as well as when a booking is made or canceled.

# Use Case Diagram

We have five main Actors in our system:

* Admin: Responsible for adding new movies and their shows, canceling any movie or show, blocking/unblocking customers, etc.

* FrontDeskOfficer: Can book/cancel tickets.

* Customer: Can view movie schedules, book, and cancel tickets.

* Guest: All guests can search movies but to book seats they have to become a registered member.

* System: Mainly responsible for sending notifications for new movies, bookings, cancellations, etc.

Here are the top use cases of the Movie Ticket Booking System:

* Search movies: To search movies by title, genre, language, release date, and city name.

* Create/Modify/View booking: To book a movie show ticket, cancel it or view details about the show.

* Make payment for booking: To pay for the booking.

* Add a coupon to the payment: To add a discount coupon to the payment.

* Assign Seat: Customers will be shown a seat map to let them select seats for their booking.

* Refund payment: Upon cancellation, customers will be refunded the payment amount as long as the cancellation occurs within the allowed time frame.

![Picture](https://www.freeprojectz.com/sites/default/files/xMovie,P20Ticket,P20Booking,P20System_0.jpeg.pagespeed.ic.O0tiAUNhLV.jpg)

# Class Diagram

Here are the main classes of the Movie Ticket Booking System:

* Account: Admin will be able to add/remove movies and shows, as well as block/unblock accounts. Customers can search for movies and make bookings for shows. FrontDeskOffice can book tickets for movie shows.
* Guest: Guests can search and view movies descriptions. To make a booking for a show they have to become a registered member.
* Cinema: The main part of the organization for which this software has been designed. It has attributes like ‘name’ to distinguish it from other cinemas.
* CinemaHall: Each cinema will have multiple halls containing multiple seats.
* City: Each city can have multiple cinemas.
* Movie: The main entity of the system. Movies have attributes like title, description, language, genre, release date, city name, etc.
* Show: Each movie can have many shows; each show will be played in a cinema hall.
* CinemaHallSeat: Each cinema hall will have many seats.
* ShowSeat: Each ShowSeat will correspond to a movie Show and a CinemaHallSeat. Customers will make a booking against a ShowSeat.
* Booking: A booking is against a movie show and has attributes like a unique booking number, number of seats, and status.
* Payment: Responsible for collecting payments from customers.
* Notification: Will take care of sending notifications to customers.

![Picture](https://online.visual-paradigm.com/repository/images/efb12bec-04ee-4cf4-9640-53acc42e0e43.png)

# Non-functional requirement:
 
1. Security 


2. Reliability  


3. Availability  


4. Maintainability 


5. Portability  


6. Accessibility    


7. Back up 


8. Performance 


9. Accessibility 


10. Supportability  




# Functional requirement:

1. Registration 


2. Login 


3. Search Movie 


4. Seat Viewing 


5. Ticket canceling  


6. Payment 


7. Logout


8. Generate ticket 


9. Add movies  


10. Remove movies 


# Stakeholder requirement:

* The user should be able to view the list of movies which are running near to his location(based on GPS).

* The user should be able to select the seat as per his choice in the hall.

* The user should have different options for payment.
 
* The system shall enable the user to enter the search text on the screen.

* The system shall enable the user to select multiple options on the screen to search.

* The system shall enable the user to navigate between the search results.

* The system shall notify the user when no matching product is found on the search.

* The system shall allow the user to create a profile and set his credential.

* The system shall authenticate user credentials to view the profile.

* The system shall send an order confirmation to the user through email.

# **ADVANTAGES:**

* The biggest advantage of online ticket booking is that it is very convenient to book tickets online as one can book tickets from the comfort of home.

* Another benefit of online ticket booking is that one gets discounts from various online websites. 

* Another advantage is that one can book tickets from anywhere in the world and one does not need to be physically present.

# **DISADVANTAGES:**

* The biggest disadvantage of online booking is that one needs to have internet connection for booking tickets online.

* Another problem with online booking is that chances of errors are high.

* In case of a developed world where the majority of the population is tech savvy online ticket booking is not an issue but when it comes to developing nations of regions like Asia and Africa where not many people have that much technical knowledge to do online ticket booking.


