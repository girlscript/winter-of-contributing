## HTML LIST AND TYPES OF LIST

**Question:** What is List in HTML?

**Answer:** A number of items or information noted in order form or in bullet points is called "List". 

**Question:** Types of List?

**Answer:** There are three types of list; ordered list, unordered list and description list.

## Ordered List

In ordered list orders matter. An ordered list starts with the `<ol>` tag. Each list item starts with the `<li>` tag and end with `</li>`. After all items added in list then we close ordered list with `</ol>`.

### Syntax:
```html
<!DOCTYPE html>
<html>
<head>
<title>Html Ordered List</title>
</head>
<body>
<h1>Fruits</h1>
<ol>
<li>Apple</li>
<li>Mango</li>
<li>Strawberry</li>
</ol>
</body>
</html>
```
### Output:
![Ordered List](https://images.samimunir2002.repl.co/OrderedList.png)

## Unordered List

In unordered list order doesn't matter. An unordered list starts with the `<ul>` tag. Each list item starts with the `<li>` tag and end with `</li>`. After all items added in list then we close ordered list with `</ul>`.

### Syntax:
```html
<!DOCTYPE html>
<html>
<head>
<title>Html Unordered List</title>
</head>
<body>
<h1>Stationery Items</h1>
<ul>
<li>2 pencils</li>
<li>1 register</li>
<li>5 pens</li>
</ul>
</body>
</html>
```
### Output:
![Unordered List](https://images.samimunir2002.repl.co/UnorderedList.png)

## Description List

Description List display elements or data in definition form. A description list starts with `<dl>` tag. Then `<dt>` tag comes which defines data term. Ater defining data term, we describe data description using `<dd>` tag. Ater all the data terms and data description added we close description list with `</dl>`.

### Syntax:
```html
<!DOCTYPE html>
<html>
<head>
<title>Html Description List</title>
</head>
<body>
<h1>Benefit of Fruits</h1>
<dl>  
<dt>Apple:</dt>  
<dd>It can support a Healthy Immune System.</dd>  
<dt>Banana:</dt>  
<dd>It may improve Digestive Health.</dd>  
<dt>Apricot:</dt>  
<dd>It may protect your liver.</dd>  
</dl>  
</body>
</html>
```
### Output:
![Description List](https://images.samimunir2002.repl.co/DescriptionList.png)
