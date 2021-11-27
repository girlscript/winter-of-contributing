## PUZZLES:

### 1. You are standing in front of two doors. One door is the “right” door, and the other is the “wrong” door. There are two guards, one standing by each door. One of the guards always tells the truth, and the other guard always tells a lie, however, you have no knowledge of which guard lies or which guard tells the truth. You can only ask one question to each guard to find the “right” door. What is the question you should ask?
- “You should ask ‘if I ask the other guard which door is the “right” one, what would he say?’ Because each guard’s answer will inevitably point to the “wrong” door, you can then choose the opposite door.”

### 2. Three ants are located in the corners of an equilateral triangle. Each ant moves in a random direction along the edges of the triangle. What is the probability that none of the ants will collide along the triangle?
- “There is a 50% chance of the ants never meeting and a 50% that at least two will collide. So, the ants will all need to move in either a clockwise or counter-clockwise direction, which then splits your first 50% chance of the ants not colliding down to a 25% chance, because half of 50 is 25.”

### 3. There are 100 doors in a single row that are all closed. You make 100 passes by each door, starting at the first door each time. On the first time you pass, you visit every door, and if it is closed, you open it, and if it is open, you close it. On your second pass by, you only visit every other door, starting from the second door in line so that you are skip-counting the doors by two. The third pass you go to every third door, the fourth pass every fourth door, and so on until you have only passed by the hundredth door. During your last pass by, which of the doors are left open and which ones are closed?
- You can figure out that for any given door, say door #38, you will visit it for every divisor it has. so  has 1 & 38, 2 & 19. so on pass 1 i will open the door, pass 2 i will close it, pass 19 open, pass 38 close. For every pair of divisors the door will just end up back in its initial state. so you might think that every door will end up closed? well what about door #9. 9 has the divisors 1 & 9, 3 & 3. but 3 is repeated because 9 is a perfect square, so you will only visit door #9, on pass 1, 3, and 9… leaving it open at the end. only perfect square doors will be open at the end.

### 4. Four people need to cross a rickety bridge at night. Unfortunately, they have only one torch and the bridge is too dangerous to cross without one. The bridge is only strong enough to support two people at a time. Not all people take the same time to cross the bridge. Times for each person: 1 min, 2 mins, 7 mins and 10 mins. What is the shortest time needed for all four of them to cross the bridge?
- It is 17 mins.
1 and 2 go first, then 1 comes back. Then 7 and 10 go and 2 comes back. Then 1 and 2 go again, it makes a total of 17 minutes.

### 5. A man has two ropes of varying thickness (Those two ropes are not identical, they aren’t the same density nor the same length nor the same width). Each rope burns in 60 minutes. He actually wants to measure 45 mins. How can he measure 45 mins using only these two ropes.. He can’t cut the one rope in half because the ropes are non-homogeneous and he can’t be sure how long it will burn.
- He will burn one of the rope at both the ends and the second rope at one end. After half an hour, the first one burns completely and at this point of time, he will burn the other end of the second rope so now it will take 15 mins more to completely burn. so total time is 30+15 i.e. 45mins.

### 6. You are blindfolded and 10 coins are place in front of you on table. You are allowed to touch the coins, but can’t tell which way up they are by feel. You are told that there are 5 coins head up, and 5 coins tails up but not which ones are which. How do you make two piles of coins each with the same number of heads up? You can flip the coins any number of times.
- Make 2 piles with equal number of coins. Now, flip all the coins in one of the pile.

How this will work? lets take an example.

So initially there are 5 heads, so suppose you divide it in 2 piles.

Case:

P1 : H H T T T 

P2 : H H H T T

Now when P1 will be flipped
P1 : T T H H H

P1(Heads) = P2(Heads)

Another case:

P1 : H T T T T 

P2 : H H H H T

Now when P1 will be flipped
P1 : H H H H T

P1(Heads) = P2(Heads)

### 7. A bad king has a cellar of 1000 bottles of delightful and very expensive wine. A neighboring queen plots to kill the bad king and sends a servant to poison the wine. Fortunately (or say unfortunately) the bad king’s guards catch the servant after he has only poisoned one bottle. Alas, the guards don’t know which bottle but know that the poison is so strong that even if diluted 100,000 times it would still kill the king. Furthermore, it takes one month to have an effect. The bad king decides he will get some of the prisoners in his vast dungeons to drink the wine. Being a clever bad king he knows he needs to murder no more than 10 prisoners – believing he can fob off such a low death rate – and will still be able to drink the rest of the wine (999 bottles) at his anniversary party in 5 weeks time. Explain what is in mind of the king, how will he be able to do so ?
- Number the bottles 1 to 1000 and write the number in binary format.

bottle 1 = 0000000001 (10 digit binary)

bottle 2 = 0000000010

bottle 500 = 0111110100

bottle 1000 = 1111101000

Now take 10 prisoners and number them 1 to 10, now let prisoner 1 take a sip from every bottle that has a 1 in its least significant bit. Let prisoner 10 take a sip from every bottle with a 1 in its most significant bit. etc.

prisoner = 10 9 8 7 6 5 4 3 2 1

bottle 924 = 1 1 1 0 0 1 1 1 0 0

For instance, bottle no. 924 would be sipped by 10,9,8,5,4 and 3. That way if bottle no. 924 was the poisoned one, only those prisoners would die.
After four weeks, line the prisoners up in their bit order and read each living prisoner as a 0 bit and each dead prisoner as a 1 bit. The number that you get is the bottle of wine that was poisoned.
1000 is less than 1024 (2^10). If there were 1024 or more bottles of wine it would take more than 10 prisoners.


### 8. You have 3 jars that are all mislabeled. One jar contains Apple, another contains Oranges and the third jar contains a mixture of both Apple and Oranges.. You are allowed to pick as many fruits as you want from each jar to fix the labels on the jars. What is the minimum number of fruits that you have to pick and from which jars to correctly label them?
- Let’s take a scenario. Suppose you pick from jar labelled as Apple and Oranges and you got Apple from it. That means that jar should be Apple as it is incorrectly labelled. So it has to be Apple jar.
Now the jar labelled Oranges has to be Mixed as it cannot be the Oranges jar as they are wrongly labelled and the jar labelled Apple has to be Oranges.

Similar scenario applies if it’s a Oranges taken out from the jar labelled as Apple and Oranges. So you need to pick just one fruit from the jar labelled as Apple and Oranges to correctly label the jars.

### 9. You have two jars, 50 red marbles and 50 blue marbles. You need to place all the marbles into the jars such that when you blindly pick one marble out of one jar, you maximize the chances that it will be red. When picking, you’ll first randomly pick a jar, and then randomly pick a marble out of that jar. You can arrange the marbles however you like, but each marble must be in a jar.
- Say we put all the red marbles into JAR A and all the blue ones into JAR B. then our chances for picking a red one are:

1/2 chance we pick JAR A * 50/50 chance we pick a red marble
1/2 chance we pick JAR B * 0/50 chance we pick a red marble

You would try different combinations, such as 25 of each colored marble in a jar or putting all red marbles in one jar and all the blue in the other. You would still end up with a chance of 50%.

What if you put a single red marble in one jar and the rest of the marbles in the other jar? This way, you are guaranteed at least a 50% chance of getting a red marble (since one marble picked at random, doesn’t leave any room for choice). Now that you have 49 red marbles left in the other jar, you have a nearly even chance of picking a red marble (49 out of 99).

So the maximum probability will be :
jar A : (1/2)*1 = 1/2 (selecting the jar A = 1/2, red marble from jar A = 1/1)
jar B : (1/2)*(49/99) = 0 (selecting the jar B = 1/2, red marble from jar B = 49/99)
Total probability = 74/99 (~3/4)

### 10. You’ve got someone working for you for seven days and a gold bar to pay him. The gold bar is segmented into seven connected pieces. You must give them a piece of gold at the end of every day. What and where are the fewest number of cuts to the bar of gold that will allow you to pay him 1/7th each day?
- Break the bar at two places so that you have one single piece, a group of 2 and a group of 4 pieces.

Day 1: Give him the single piece

Day 2: The main point here is that on 2nd day you take back the one gold bar which you gave on Day 1 and give him group of 2 unbroken bars. So you again have one single bar

Day 3: He gives back the single bar which he got in retrun on day 2 from the worker

Day 4: Take 3 coins in return and give the set of 4 unbroken bar. Now he has one single and 2 connected bars.

Day5: Similar to Day 1

Day6: Take away single bar and give 2 unbroken bar

Day7: Give the single bar

### 11. You have 10 bags full of coins. In each bag are infinite coins. But one bag is full of forgeries, and you can’t remember which one. But you do know that a genuine coins weigh 1 gram, but forgeries weigh 1.1 grams. You have to identify that bag in minimum readings. You are provided with a digital weighing machine.
- Take 1 coin from the first bag, 2 coins from the second bag, 3 coins from the third bag and so on. Eventually, we’ll get 55 (1+2+3…+9+10) coins. Now, weigh all the 55 coins together. Depending on the resulting weighing machine reading, you can find which bag has the forged coins such that if the reading ends with 0.4 then it is the 4th bag, if it ends with 0.7 then it is the 7th bag and so on.

### 12. There are 100 prisoners all sentenced to death. One night before the execution, the warden gives them a chance to live if they all work on a strategy together. The execution scenario is as follows- On the day of execution, all the prisoners will be made to stand in a straight line such that one prisoner stands just behind another and so on. All prisoners will be wearing a hat either of Blue colour or Red. The prisoners don’t know what colour of hat they are wearing. The prisoner who is standing at the last can see all the prisoners in front of him (and what colour of hat they are wearing). A prisoner can see all the hats in front of him. The prisoner who is standing in the front of the line cannot see anything.. The executioner will ask each prisoner what colour of hat they are wearing one by one, starting from the last in the line. The prisoner can only speak “Red” or “Blue”. He cannot say anything else. If he gets it right, he lives otherwise he is shot instantly. All the prisoners standing in front of him can hear the answers and gunshots.. Assuming that the prisoners are intelligent and would stick to the plan, what strategy would the prisoners make over the night to minimize the number of deaths?
- The strategy is that the last person will say ‘red’ if the number of red hats in front of him are odd and ‘blue’ if the number of red hats in front of him are even. Now, the 99th guy will see the if the red hats in front of him are odd or even. If it is odd then obviously the hat above him is blue, else it is red. From now on, it’s pretty intuitive

### 13. You are in a dark room where a table is kept. There are 50 coins placed on the table, out of which 10 coins are showing tails and 40 coins are showing heads. The task is to divide this set of 50 coins into 2 groups (not necessarily same size) such that both groups have same number of coins showing the tails.
- Divide the group into two groups of 40 coins and 10 coins. Flip all coins of the group with 10 coins.

### 14. You have two sand timers, which can show 4 minutes and 7 minutes respectively. Use both the sand timers(at a time or one after other or any other combination) and measure a time of 9 minutes.
- Start the 7 minute sand timer and the 4 minute sand timer.
- Once the 4 minute sand timer ends turn it upside down instantly.
- Once the 7 minute sand timer ends turn it upside down instantly.
- After the 4 minute sand timer ends turn the 7 minute sand timer upside down(it has now minute of sand in it)
So effectively 8 + 1 = 9.

### 15. There is a bus with 100 labeled seats (labeled from 1 to 100). There are 100 persons standing in a queue. Persons are also labelled from 1 to 100. People board on the bus in sequence from 1 to n. The rule is, if person ‘i’ boards the bus, he checks if seat ‘i’ is empty. If it is empty, he sits there, else he randomly picks an empty seat and sit there. Given that 1st person picks seat randomly, find the probability that 100th person sits on his place i.e. 100th seat.
- The final answer is the probability that the last person ends in up in his proper seat is exactly 1/2

The reasoning goes as follows:

First, observe that the fate of the last person is determined the moment either the first or the last seat is selected! This is because the last person will either get the first seat or the last seat. Any other seat will necessarily be taken by the time the last guy gets to ‘choose’.

Since at each choice step, the first or last is equally probable to be taken, the last person will get either the first or last with equal probability: 1/2.

### 16. N persons are standing in a circle. They are labelled from 1 to N in clockwise order. Every one of them is holding a gun and can shoot a person on his left. Starting from person 1, they starts shooting in order e.g for N=100, person 1 shoots person 2, then person 3 shoots person 4, then person 5 shoots person 6……..then person 99 shoots person 100, then person 1 shoots person 3, then person 5 shoots person 7……and it continues till all are dead except one. What’s the index of that last person ?
- Write 100 in binary, which is 1100100 and take the complement which is 11011 and it is 27. Subtract the complement from the original number. So 100 – 27 = 73.

Try it out for 50 people. 50 = 110010 in binary.

Complement is 1101 = 13. Therefore, 50 – 13 = 37.

For the number in form 2^n, it will be the first person. Let’s take an example:

64 = 1000000

Complement = 111111 = 63.

64-63 = 1.

You can apply this for any ’n’.

### 17. There is a room with a door (closed) and three light bulbs. Outside the room, there are three switches, connected to the bulbs. You may manipulate the switches as you wish, but once you open the door you can’t change them. Identify each switch with its bulb. All bulbs are in working condition.
- Let the bulbs be X, Y, and Z 
Turn on switch X for 5 to 10 minutes. Turn it off and turn on switch Y. Open the door and touch the light bulb. 
1. the light is on from the bulb, it is Y 

Now we will check other two off bulbs  

2. the bulb which is hot, it is X   
 
3. the bulb which is cold, it is Z 

### 18. There are 25 horses among which you need to find out the fastest 3 horses. You can conduct race among at most 5 to find out their relative speed. At no point you can find out the actual speed of the horse in a race. Find out the minimum no. of races which are required to get the top 3 horses.
- Make group of 5 horses and run 5 races. Suppose five groups are a,b,c,d,e and next alphabet is its individual rank in tis group(of 5 horses).for eg. d3 means horse in group d and has rank 3rd in his group. [ 5 RACES DONE ] 

a1 b1 c1 d1 e1 

a2 b2 c2 d2 e2 

a3 b3 c3 d3 e3 

a4 b4 c4 d4 e4 

a5 b5 c5 d5 e5 


Now make a race of (a1,b1,c1,d1,e1).[RACE 6 DONE] suppose result is a1>b1>c1>d1>e1 

which implies a1 must be FIRST. 

b1 and c1 MAY BE(but not must be) 2nd and 3rd. 

FOR II position, horse will be either b1 or a2 

(we have to find top 3 horse therefore we choose horses b1,b2,a2,a3,c1 do racing among them [RACE 7 DONE]. 

The only possibilities are : 

c1 may be third 

b1 may be second or third 

b2 may be third 

a2 may be second or third 

a3 may be third 

The final result will give ANSWER. suppose result is a2>a3>b1>c1>b2 

then answer is a1,a2,a3,b1,c1. 

HENCE ANSWER is 7 RACES 


Please note that the 7 races work for the case also when all top 3 horses are same group or any top two horses are in same group. The group which has top 3 horses would always have winner in 6th race. In 7th race, we consider 2nd and 3rd horses of the group whose horse is overall winner. We also consider 2nd horse of the group whose horse came 2nd in 6th race. 

### 19. There are 1000 wine bottles. One of the bottles contains poisoned wine. A rat dies after one hour of drinking the poisoned wine. How many minimum rats are needed to figure out which bottle contains poison in hour.
- We need to figure out in hour. We need 10 rats to figure out the poisoned bottle. The result is based on binary number system. We get 10 using ⌈ Log21000 ⌉.
- The idea is to number bottles from 1 to 1000 and write their corresponding binary numbers on the bottle. Each rat is assigned a position in the binary numbers written on bottles. Let us take an example. Rat 1 represents first bit in every bottle, rat 2 represents second bit and so on. If rat numbers 2, 4 and 6 die, then bottle number 42 (Binary 0000101010) is poisoned. 

### 20. You have 15 Rs with you. You go to a shop and shopkeeper tells you price as 1 Rs per chocolate. He also tells you that you can get a chocolate in return of 3 wrappers. How many maximum chocolates you can eat?
- Answer: 22

Buy and eat 15 chocolates

Return 15 wrappers and get 5 more chocolates.

Return 3 wrappers, get 1 chocolate and eat it (keep 2 wrappers)

Now we have 3 wrappers. Return 3 and get 1 more chocolate.


So total chocolates = 15 + 5 + 1 + 1

### References:
https://www.interviewbit.com/

https://analyticsindiamag.com/

https://www.analyticsvidhya.com/

https://www.indeed.com/

https://www.geeksforgeeks.org/
