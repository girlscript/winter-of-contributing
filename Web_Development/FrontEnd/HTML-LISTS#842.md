# HTML LISTS

  

We need lists everywhere in our lives. Be it shopping list, a to-do list or many some other lists that we need
to follow. Similarily, a web page might need a bunch of lists. For example - it can be the list of all links in nav bar
or it can be the list of all the data to filled inside a table etc. Follow along to know what are HTML lists and
how they are implemented.

HTML consists mainly of two types on the basis of the order of elements it holds.

1. Ordered lists

2. Unordered lists

  

### Ordered List

  

It contains elements that are stored in an order or sequence. For example -

a list of numbers

1. One

2. Two

3. Three

  

Here the elements are evenly arranged in a definite fashion and are not random.

  

### Unordered List

  

Such lists are unorganised and are places randomly. Take the same example of list of numbers -

- Four

- Nine

- Hundered

- Sixty Four

  

Here these numbers are not organized. first is four, second is nine and so on. There is no definite sequence is followed here.

  

### HOW TO CREATE LISTS IN HTML ?

  

The above mentioned lists can be created in HTML as given below -

  

Using the` <ul>` and` <ol> `tags. These tags are to initiated before forming a list in HTML. After that to add elements `<li>` is used.

  

As the tag name suggests`<ul>` and `<ol>`are nothing but unordered list and ordered list respectively. And li is the list element. In HTML, ordered lists have bullet marks as numbers and unordered lists have small shapes like circles or squares.

### OTHER TAGS REALTED TO LISTS

  

There are few more tags used in HTML lists -

1. `<dl>` - it is list where you can add descriptions to elements added in the list

2. `<dt>` - this tag is used to add the elements to the description list

3. `<dd>` - this tag is used to add the description of the elements in the description list

  

### EXAMPLES

  

**Create a list**

  

` <HTML>

	<HEAD>LISTS</HEAD>

	<BODY>

	<ul>

	UNORDERED LIST

	<li>APPLE</li>

	<li>CUSTARD</li>

	<li>PIE</li>

	<li>MELON</li>

	<li>BIKE</li>

	</ul>

	  

	<ol>

	ORDERED LIST

	<li>MATHS</li>

	<li>PHYSICS</li>

	<li>CHEMISTRY</li>

	<li>SOFT SKILLS</li>

	<li>COMPUTER SCIENCE</li>

	</ol>

	  

	<dl>

	DESCRIPTION LIST (with descriptions added)

	<dt>SHRUTI</dt>

	<dd>- school captain</dd>

	<dt>ABHISEKH</dt>

	<dd>- sports captain</dd>

	<dt>SAM</dt>

	<dd>- chess player</dd>

	<dt>AMANDA</dt>

	<dd>- senior secretary</dd>

	<dt>AMRITA</dt>

	<dd>- club incharge</dd>

	</dl>

	</BODY>
</HTML> `

### HERE'S HOW IT WILL LOOK LIKE WHEN VEIWED IN ANY WEB BROWSER

LISTS

UNORDERED LIST-   APPLE
-   CUSTARD
-   PIE
-   MELON
-   BIKE

ORDERED LIST1.  MATHS
1.  PHYSICS
2.  CHEMISTRY
3.  SOFT SKILLS
4.  COMPUTER SCIENCE

DESCRIPTION LIST (with descriptions added)

SHRUTI

`- `school captain

ABHISEKH

`-`sports captain

SAM

`-` chess player

AMANDA

`-` senior secretary

AMRITA

`-` club incharge