#Movie Ticket Pricing System
Due to the expansion of platforms like Amazon Prime, Netflix, and other streaming platforms, people prefer watching the content according to their convenience. Factors, such as content quality, pricing, marketing, genre availability, etc. have influenced the success of such platforms.

The total cost of making a movie has increased exponentially in the past few years, and only 1 out of ten movies make profits. High movie ticket prices along with stiff competition from such platforms and TV have made it really hard for movies to make money. Most of the cinema halls run empty due to high ticket prices.

However, an advanced movie ticket pricing system may help viewers and movie makers. Ticket prices for popular movies can be higher and the cost can be low for movies that are not popular. You can practice making a project that calculates the prices of tickets based on social signals, supply-demand factors, and the interest of viewers.

##Dynamic Pricing:
Dynamic pricing is when a company or store continuously adjusts its prices throughout the day. The goal of these price changes is two fold: on one hand, companies want to optimize for margins, and on the other they want to increase their chances of sales.

Dynamic pricing is a pricing strategy that applies variable prices instead of fixed prices. Instead of deciding on a set price for a season, retailers can update their prices multiple times per day to capitalize on the ever-changing market.

This method was first used for American Airlines in the year 1980. They figured out that all the customers have different concerns and different priorities. While some customers want tickets at a cheaper price, others want good service. This method is now used in all movie booking systems.

Depending on some parameters price of ticket varies, like whether the customer wants to book a ticket in the front row or the back, or the customer wants an executive seat or a couple of seats. Prices also depend on the location of movie hall and show timing chosen by customer.

The other way is to come up with discounts or to give users with customized offers for a limited period. In other words, dynamic pricing is a prediction problem, where machine learning is the best tool to tackle it.

##Hardware and Software used:
- A suitable OS.

- A desktop or laptop.

- Enough RAM to run the program without any interruption.

- Python 3 or upwards installed on your system.

##System Requirements
- It should be able to list the cities where affiliate cinemas are located.

- Each cinema can have multiple halls and each hall can run one movie show at a time

- Each Movie will have multiple shows.

- Customers should be able to search movies by their title, language, genre, release date, and city name.

- Once the customer selects a movie, the service should display the cinemas running that movie and its available shows.

- The customer should be able to select a show at a particular cinema and book their tickets.

- The service should show the customer the seating arrangement of the cinema hall. The customer should be able to select multiple seats according to their preference.

- The customer should be able to distinguish between available seats and booked ones.

- The system should send notifications whenever there is a new movie, as well as when a booking is made or canceled.

##Use Case Diagram
We have five main Actors in our system:

- Super Admin Entity : Use cases of super admin are Managing Movies, Customers, Bookings, Payments, Seats, Shows, Users, and Full Movie Ticket Booking System Operations.

- System User Entity : Use cases of super admin are Managing Movies, Customers, Bookings, Payments, Seats, Shows.

- Hall Owners Entity : Use cases of Hall Owners are Create Show, Add Audis, Book Tickets, Collect Payments.

- Customer Entity : Use cases of Customers are Search Movies, View More Details, Book Movie, Download Tickets, Make Payments.

Here are the top use cases of the Movie Ticket Booking System:

- Search movies: To search movies by title, genre, language, release date, and city name.

- Create/Modify/View booking: To book a movie show ticket, cancel it or view details about the show.

- Make payment for booking: To pay for the booking.

- Add a coupon to the payment: To add a discount coupon to the payment.

- Assign Seat: Customers will be shown a seat map to let them select seats for their booking.

- Refund payment: Upon cancellation, customers will be refunded the payment amount as long as the cancellation occurs within the allowed time frame.



##Class Diagram
Here are the main classes of the Movie Ticket Booking System:

- Account: Admin will be able to add/remove movies and shows, as well as block/unblock accounts. Customers can search for movies and make bookings for shows. FrontDeskOffice can book tickets for movie shows.
- Guest: Guests can search and view movies descriptions. To make a booking for a show they have to become a registered member.
- Cinema: The main part of the organization for which this software has been designed. It has attributes like ‘name’ to distinguish it from other cinemas.
- CinemaHall: Each cinema will have multiple halls containing multiple seats.
- City: Each city can have multiple cinemas.
- Movie: The main entity of the system. Movies have attributes like title, description, language, genre, release date, city name, etc.
- Show: Each movie can have many shows; each show will be played in a cinema hall.
- CinemaHallSeat: Each cinema hall will have many seats.
- ShowSeat: Each ShowSeat will correspond to a movie Show and a CinemaHallSeat. Customers will make a booking against a ShowSeat.
- Booking: A booking is against a movie show and has attributes like a unique booking number, number of seats, and status.
- Payment: Responsible for collecting payments from customers.
- Notification: Will take care of sending notifications to customers.


##Non Functional Requirements:
- The system would need to be highly concurrent. There will be multiple booking requests for the same seat at any particular point in time. The service should handle this gracefully and fairly.
- The core thing of the service is ticket booking, which means financial transactions. This means that the system should be secure and the database ACID compliant.
##Functional Requirements:
- Our ticket booking service should be able to list different cities where its affiliate cinemas are located.
- Once the user selects the city, the service should display the movies released in that particular city.
- Once the user selects a movie, the service should display the cinemas running that movie and its available showtimes.
- The user should be able to choose a show at a particular cinema and book their tickets.
- The service should be able to show the user the seating arrangement of the cinema hall. The user should be able to select multiple seats according to their preference.
- The user should be able to distinguish available seats from booked ones.
- Users should be able to put a hold on the seats for five minutes before they make a payment to finalize the booking.
- The user should be able to wait if there is a chance that the seats might become available, e.g., when holds by other users expire.
- Waiting customers should be serviced in a fair, first come, first serve manner.
##Stakeholder requirement:
- The user should be able to view the list of movies which are running near to his location(based on GPS).

- The user should be able to select the seat as per his choice in the hall.

- The user should have different options for payment.

- The system shall enable the user to enter the search text on the screen.

- The system shall enable the user to select multiple options on the screen to search.

- The system shall enable the user to navigate between the search results.

- The system shall notify the user when no matching product is found on the search.

- The system shall allow the user to create a profile and set his credential.

- The system shall authenticate user credentials to view the profile.

- The system shall send an order confirmation to the user through email.

##ADVANTAGES:
The biggest advantage of online ticket booking is that it is very convenient to book tickets online as one can book tickets from the comfort of home.

Another benefit of online ticket booking is that one gets discounts from various online websites.

Another advantage is that one can book tickets from anywhere in the world and one does not need to be physically present.

##DISADVANTAGES:
The biggest disadvantage of online booking is that one needs to have internet connection for booking tickets online.

Another problem with online booking is that chances of errors are high.

In case of a developed world where the majority of the population is tech savvy online ticket booking is not an issue but when it comes to developing nations of regions like Asia and Africa where not many people have that much technical knowledge to do online ticket booking.
