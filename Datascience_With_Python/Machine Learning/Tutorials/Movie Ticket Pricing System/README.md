# **MOVIE TICKET PRICING SYSTEM**

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

# Implementations:

* Decide the public you are aiming at.

* Mention the type of customer you are aiming.

* Collect historical data from on different price points offered in the past as well as the demand for these points.

* Build a model to predict the different parameters.

* Use an optimization algorithm to discover the optimal price and product features, to maximize the probability of purchasing. This method can also be used for creating product bundles and discounts.

# **APPROACH**

Below is the approach to do the above operations:

## 1. t_movie: This method is used to select the movie name.

    def t_movie():
        global f
        f = f+1
        print("which movie do you want to watch?")
        print("1,movie 1 ")
        print("2,movie 2 ")
        print("3,movie 3")
        print("4,back")
        movie = int(input("choose your movie: "))
        if movie == 4:
      
      center()
      theater()
      return 0
    if f == 1:
      theater()
      
## 2. theater(): This method is used to select the screen.


    def theater():
        print("which screen do you want to watch movie: ")
        print("1,SCREEN 1")
        print("2,SCREEN 2")
        print("3,SCREEN 3")
        a = int(input("choose your screen: "))
        ticket = int(input("number of ticket do you want?: "))
        timing(a)
        
## 3. timing(a): This method is used to select timing for movies.

    
    def timing(a):
        time1 = {
            "1": "10.00-1.00",
            "2": "1.10-4.10",
            "3": "4.20-7.20",
            "4": "7.30-10.30"
        }
        time2 = {
            "1": "10.15-1.15",
            "2": "1.25-4.25",
            "3": "4.35-7.35",
            "4": "7.45-10.45"
        }
        time3 = {
            "1": "10.30-1.30",
            "2": "1.40-4.40",
            "3": "4.50-7.50",
            "4": "8.00-10.45"
        }
        if a == 1:
            print("choose your time:")
            print(time1)
            t = input("select your time:")
            x = time1[t]
            print("successfull!, enjoy movie at "+x)
        elif a == 2:
            print("choose your time:")
            print(time2)
            t = input("select your time:")
            x = time2[t]
            print("successfull!, enjoy movie at "+x)
        elif a == 3:
            print("choose your time:")
            print(time3)
            t = input("select your time:")
            x = time3[t]
            print("successfull!, enjoy movie at "+x)
        return 0
        
## 4. movie(theater): This method is used to select movies accordingly to the theater.

    def movie(theater):
        if theater == 1:
            t_movie()
        elif theater == 2:
            t_movie()
        elif theater == 3:
            t_movie()
        elif theater == 4:
            city()
        else:
            print("wrong choice")
            
## 5. center(): This method is used to select the theater.

    def center():
        print("which theater do you wish to see movie? ")
        print("1,Inox")
        print("2,Icon")
        print("3,pvp")
        print("4,back")
        a = int(input("choose your option: "))
        movie(a)
        return 0
        
## 6. city(): This method is used to select the city.


        def city():
            print("hi welcome to movie ticket booking: ")
            print("where you want to watch movie?:")
            print("1,city 1")
            print("2,city 2 ")
            print("3,city 3 ")
            place = int(input("choose your option: "))
            if place == 1:
              center()
            elif place == 2:
              center()
            elif place == 3:
              center()
            else:
              print("wrong choice")



# **ADVANTAGES:**

* The biggest advantage of online ticket booking is that it is very convenient to book tickets online as one can book tickets from the comfort of home.

* Another benefit of online ticket booking is that one gets discounts from various online websites. 

* Another advantage is that one can book tickets from anywhere in the world and one does not need to be physically present.

# **DISADVANTAGES:**

* The biggest disadvantage of online booking is that one needs to have internet connection for booking tickets online.

* Another problem with online booking is that chances of errors are high.

* In case of a developed world where the majority of the population is tech savvy online ticket booking is not an issue but when it comes to developing nations of regions like Asia and Africa where not many people have that much technical knowledge to do online ticket booking.

# **CONCLUSION:**

* Dynamic pricing has a huge impact on sales and profits earned by companies.

* It can increase the profit from 10 to 20 per cent and also can increase the sales up to 200 per cent. 

* This is why most of the leading companies and apps, be it BookMyShow or Flipkart or Walmart use dynamic pricing.

