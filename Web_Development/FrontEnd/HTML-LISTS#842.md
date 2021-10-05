# HTML Lists

We need lists everywhere in our lives. Be it shopping list, a to-do list or many some other lists that we need to follow. Similarily, a web page might need a bunch of lists. For example - it can be the list of all links in nav bar or it can be the list of all the data to filled inside a table, etc. Follow along to know what are HTML lists and how they are implemented.

HTML consists mainly of two types on the basis of the order of elements it holds.

1. Ordered lists
2. Unordered lists

## Ordered List

It contains elements that are stored in an order or sequence. For example - a list of numbers:

1. One
2. Two
3. Three

![Ordered List Preview](https://user-images.githubusercontent.com/71889838/134956168-fe411a6a-bdd5-4f2e-9952-bd1f7c64ebda.png)
  
Here the elements are evenly arranged in a definite fashion and are not random.

## Unordered List

Such lists are unorganised and are places randomly. Take the same example of list of numbers:

- Four
- Nine
- Hundered
- Sixty Four

![Unordered List Preview](https://user-images.githubusercontent.com/71889838/134956431-957eca2f-f396-40f6-abd3-2a123a7f5a6e.png)

Here these numbers are not organised. first is four, second is nine and so on. There is no definite sequence is followed here.

### How to create lists in HTML?

The above mentioned lists can be created in HTML as given below:

Using the `<ul>` and` <ol> `tags. These tags are to initiated before forming a list in HTML. After that to add elements `<li>` is used.

As the tag name suggests `<ul>` and `<ol>` are unordered list and ordered list respectively. And `<li>` is the list element. In HTML, ordered lists have bullet marks as numbers and unordered lists have small shapes like circles or squares.

### Other tags related to Lists

There are few more tags used in HTML lists:

1. `<dl>` - it is list where you can add descriptions to elements added in the list
2. `<dt>` - this tag is used to add the elements to the description list
3. `<dd>` - this tag is used to add the description of the elements in the description list

For example:

![Definition List Preview](https://user-images.githubusercontent.com/71889838/135022483-8847321a-8848-4502-9126-7e8d2eecf420.png)

### Examples

```html
<!DOCTYPE html>
<html>
  <head>
    <title>Lists</title>
  </head>
  <body>
    <p>Unordered List</p>
    <ul>
      <li>Apple</li>
      <li>Custard</li>
      <li>Pie</li>
      <li>Melon</li>
      <li>Bike</li>
    </ul>
    <p>Ordered List</p>
    <ol>
      <li>Maths</li>
      <li>Physics</li>
      <li>Chemistry</li>
      <li>Soft Skills</li>
      <li>Computer Science</li>
    </ol>
    <dl>
      <p>Description List (with descriptions added)</p>
      <dt>Shruti</dt>
      <dd>- school captain</dd>
      <dt>Abhisekh</dt>
      <dd>- sports captain</dd>
      <dt>Sam</dt>
      <dd>- chess player</dd>
      <dt>Amanda</dt>
      <dd>- senior secretary</dd>
      <dt>Amrita</dt>
      <dd>- club incharge</dd>
    </dl>
  </body>
</html>
```

### Preview

Here's how it will look like when viewed in any web browser:

![Full HTML Preview](https://user-images.githubusercontent.com/71889838/135022540-fa9d8f39-f756-4ec8-ba0d-bd2b8f1497fd.png)

