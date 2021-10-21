# HTML LISTS

<i>**What is a List in HTML?**</i>

A list is a collection of related short pieces of information that 
can be used to display data or other information in a sematic way.

<i>**How many types of lists are there?**</i>

There are 3 different types of lists. They are:-<br>
1)Unordered List<br>
2)Ordered List<br>
3)Description List<br>

## UNORDERED LIST
In an unordered the order of the list doesn't matter. An unordered list will start with the `<ul>` tag.  An item in a list starts with an `<li>` tag and ends with `</li>` tag. Once we are done with listing all the items, we close the ordered list with `</ul>` tag.

```html
<!DOCTYPE html>
<html>
   <head>
      <title>Unordered list</title>
   </head>

<body>

 <h3>Beverages</h3>

 <ul>
   <li>Coffee</li>
   <li>Soft drinks</li>
   <li>Tea</li>
 </ul>  

</body>
</html>
```
### Output:
![Ordered List](https://github.com/Satya-Chandana/HTML_Lists/blob/main/Output_UnorderedList.png)

## ORDERED LIST

In an ordered list the order of the list matters. An ordered list can be either numerical or alphabetical.
An ordered list will start with `<ol>` tag. An item in a list starts with an `<li>` tag and closes with `<li>`.
Once we are done with listing all the items, we close the ordered list with `<ol>` tag.

### Example Format:
```html
<!DOCTYPE html>
<html>
  <head>
      <title>Ordered List</title>
  </head>
  
<body>

<h3>Junk Food List</h3>

<ol>
  <li>Pizza</li>
  <li>Burger</li>
  <li>French fries</li>
</ol>  

</body>
</html>
```
### Output:
![Ordered List](https://github.com/Satya-Chandana/HTML_Lists/blob/main/Output_OrderedList.png)

## Description List

Description List display elements, with description of each element. The `<dl>` tag starts a description list. Next would be `<dt>` tag this defines data term. After the data term, we should use the `<dd>` tag to express the data description. Once we are done with adding and closing `<dt>` and `<dd>` tags we will close the description list with `</dl>` tag.

```html
<!DOCTYPE html>
<html>
   <head>
 	   <title>Description List</title>
   </head>
<body>

<h3>Description List</h3>

<dl>
  <dt>Pizza</dt>
     <dd>- a dish made typically of flattened bread dough spread with a savory mixture usually including cheese and often other toppings and baked</dd>
 
  <dt>Coffee</dt>
     <dd>- a beverage made by percolation, infusion, or decoction from the roasted and ground seeds of a coffee plant</dd>
</dl>

</body>
</html>
```

### Output:
![Ordered List](https://github.com/Satya-Chandana/HTML_Lists/blob/main/Output_DescriptionList.png)
