<h2>Prerequisites</h2>

* Java Loops
* OOPS
* Optional Usage
* Kindly, take the liberity to google  basic definition of streams before proceeding with this tutorial
* https://www.geeksforgeeks.org/stream-in-java/

<h3> If you are looking to simplify your boring code, yet finish up the task. You are in a right place, what java offers you is a powerful functionality called streams. Streams combined with collections is a match made in heaven. In this tutorial, we will cover functions provided by Stream API</h3>

Let's say you are writing code for sifting all the ready to eat items from a mix of items you bought at a local store. Let's represent each item as an object with three attributes , Item-name and isReadyToEat and Price for each item. The data types used to represent these three properties of each item are String, Boolean and Integer.

Let's say we have following items in our bag,

<h4>Sample Example 1</h4>

| Item Name     |  ReadyToEat   |   Price /-     |
| ------------- |:-------------:| :-------------:|
| Bananas       | True          |   40           |
| Ice cream     | True          |   200          |
| Mason Jar     | False         |   100          |
| Tube Light    | False         |   109          |
| Chocolate     | True          |   60           |

So we can have a class named item, with three attributes/state - name,isReadyToEat,price. In Java syntax we can write like this.

```` 
public class Item
{
     String name;
     Boolean isReadyToEat;
     Integer price;

    ----Constructors-----

    ----Getters And Setters----
}
  
````
And now, Let's assume we have an arrayList say **items**, of Type item with values as we discussed in the sample example 1. Now to filter out all the eatable items and place it in an arraylist named as **eatableItems** , as a java developer you would code something like this.


```` 
List<Item> eatableItems = new ArrayList<Item>();

for(Item item : items)
{
    if(item.isReadyToEat.equals(true))
    {
        eatableItems.add(item);
    }
}
  
````

This approach is called an imperative approach, and could lead to a lot of redundancy , monotony, bugs and issues in a large code base. Now, how to avoid such situations? Java Streams come to our rescue. Instead of writing this monotonous code, we can simply ask streams what we want in our collection. This is called a declarative approach. Streams are very powerful and support methods like

 * Filter
 * Sort
 * All Match
 * Any Match
 * None Match
 * Max
 * Min



<h3 > <mark style="background-color:#A3C3B0;"> Filter </mark> </h3>
So let's go ahead and start with  filter, the first step is to convert items into a stream. This can be done by saying items.stream(), from now you simply need to ask what we want. We want to filter based on a condition which takes in a predicate and returns true or false. So, we do items.stream().filter(item -> item.isReadyToEat.equals(true)). Now that we performed a filter action we need to collect this information to a list. For that we can simply say, items.stream().filter(item -> item.isReadyToEat.equals(true)).collect(Collectors.toList()). Here is a clear picture 

List<Item> eatableItems = items.stream().filter(item -> item.isReadyToEat.equals(true)).collect(Collectors.toList())

If you print the above list output will be

Output:


```` 
Bananas true  40
Ice Cream true 200
Chocolate true 60

````

<h3> <mark style="background-color:#A3C3B0;"> Sort </mark> </h3>

For sorting, we convert the list to a stream and then call sorted which takes in a comparator, within this we can give based on what value we are aiming to sort this collection(our list). And then we perform a terminal operation which is collecting this result to a list.


List<Item> eatableItems =  items.stream().sorted(Comparator.comparing(item->item.name)).collect(Collectors.toList())


Output if you print the above list:

````
Bananas true    40
Chocolate true  60
Ice Cream true  200
Mason Jar false 100
Tube Light false 109

````

<h3> <mark style="background-color:#A3C3B0;"> All Match </mark> </h3>

If you want to know if all the items in the list are eatables, then you can use allMatch(condition) which returns a boolean value.

Boolean allMatch = items.stream().allMatch(item->item.isReadyToEat.equals(true));

Since, we also have items which are not ready to eat (i.e items readyToEat set as false). We will get our output as 

````
False

````

<h3> <mark style="background-color:#A3C3B0;"> Any Match </mark> </h3>


Similarly, anyMatch checks for atleast one match and if it is satisfied, it will return true

Boolean anyMatch = items.stream().anyMatch(item->item.isReadyToEat.equals(true));


Since we have atleast one item which is ready to eat, our result will be 

````
True

````
<h3> <mark style="background-color:#A3C3B0;"> None Match </mark> </h3>

None match checks for the item in the list and if the item is not there it returns true, else it returns false.
For example, we want to know that strawberry is not one of the items in the list, then you provide noneMatch, saying check if there is any item strawberry in the list, because there is no item named strawberry in the list none match will return true as it didn't find any match for strawberry. Incase, you provide bananas it will return false, because there is an item  bananas in the list.


Boolean noMatch = items.stream().noneMatch(item->item.name.equals("strawberry"));

````
True

````

<h3> <mark style="background-color:#A3C3B0;">  Max </mark> </h3>


If you ant to find the item with max price, you can get that with help of Max() function in streams.

Optional<Item> maxPriceItem = items.steam().max(Comparator.comparing(item->item.price));

If you print the item's name it will be


````
Ice Cream

````
Reason being Ice Cream has the maximum price amongst the list of items.

<h3> <mark style="background-color:#A3C3B0;">  Min </mark> </h3>

Similarly, we can also find the item with minimum price,

Optional<Item> maxPriceItem = items.steam().min(Comparator.comparing(item->item.price));

Here, if you print the item's name it will be... , yes you guessed it right 

````
Bananas

````
