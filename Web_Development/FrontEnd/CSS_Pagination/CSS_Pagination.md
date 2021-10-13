# CSS Pagination

CSS Pagination is a very useful technique of indexing different pages of the website in the home page or at the footer section of all pages.

If any website has many pages, then pagination comes into picture which helps us to navigate through different pages of any website.

![css pagination](https://imgur.com/9R7Avqe.jpg)

## Program for Simple Pagination:

```html
<!DOCTYPE html>
<html>
<head>
<style>
/* adding css to the pagination class */
.pagination {
  display: inline-block;
}
/* adding css to the links */
.pagination a {
  color: black;
  float: left;
  text-decoration: none;
}
</style>
</head>
<body>

<h2>Simple Pagination</h2>

<div class="pagination">
    <!-- &laquo stands for "<<" -->
  <a href="#">&laquo;</a>
  <a href="#">1</a>
  <a href="#">2</a>
  <a href="#">3</a>
  <a href="#">4</a>
  <a href="#">5</a>
  <a href="#">6</a>
  <a href="#">7</a>
  <!-- and &raquo stands for ">>" -->
  <a href="#">&raquo;</a>
</div>

</body>
</html>
```

We can apply different CSS to the pagination to make it look good ,for example : 

* We can add hover effects to each of the links
* We can decorate these links using buttons or adding borders to it .
* and many more styles we can add to them.


## Hoverable Pagination
* Adding hover effect to the pagination
```html
<!DOCTYPE html>
<html>
<head>
<style>
    /* adding css to the pagination class */
.pagination {
  display: inline-block;
}
/* adding style to the links */
.pagination a {
  color: black;
  float: left;
  padding: 8px 16px;
  text-decoration: none;
}
/* adding css to the active link */
.pagination a.active {
  background-color: #4CAF50;
  color: white;
}

.pagination a:hover:not(.active) {background-color: #ddd;}
</style>
</head>
<body>

<h2>Active and Hoverable Pagination</h2>

<div class="pagination">
  <a href="#">&laquo;</a>
  <a href="#">1</a>
  <!-- active link -->
  <a class="active" href="#">2</a>
  <a href="#">3</a>
  <a href="#">4</a>
  <a href="#">5</a>
  <a href="#">6</a>
  <a href="#">7</a>
  <a href="#">&raquo;</a>
</div>

</body>
</html>

```

## Bordered Pagination

* Adding borders to the links
```html
<!DOCTYPE html>
<html>
<head>
<style>
.pagination {
  display: inline-block;
}
/* adding style to the links */
.pagination a {
  color: black;
  float: left;
  padding: 8px 16px;
  text-decoration: none;
  transition: background-color .3s;
  border: 1px solid #ddd;
}
/* adding stule to the active link */
.pagination a.active {
  background-color: #4CAF50;
  color: white;
  border: 1px solid #4CAF50;
}
/* if any link is not active then on Hover its background colour will be grey */
.pagination a:hover:not(.active) {background-color: #ddd;}
</style>
</head>
<body>

<h2>Bordered Pagination</h2>

<div class="pagination">
  <a href="#">&laquo;</a>
  <a href="#">1</a>
  <!-- active link -->
  <a href="#" class="active">2</a>
  <a href="#">3</a>
  <a href="#">4</a>
  <a href="#">5</a>
  <a href="#">6</a>
  <a href="#">7</a>
  <a href="#">&raquo;</a>
</div>

</body>
</html>

```

## Outputs
![output](https://imgur.com/ewsAy7z.jpg)

<hr>

## Breadcrumb pagination
this is a special type of pagination
```html
<!DOCTYPE html>
<html>
<head>
<style>

ul.breadcrumb {
    padding: 8px 16px;
    list-style: none;
    background-color: #eee;
}
ul.breadcrumb li {display: inline;}
ul.breadcrumb li+li:before {
    padding: 8px;
    color: black;
    content: "/\00a0";
}

</style>
</head>
<body>
<h2>Breadcrumbs</h2>
<ul class="breadcrumb">
  <li><a href="#">Home</a></li>
  <li><a href="#">Android</a></li>
  <li><a href="#">Android Basics</a></li>
  <li>UI Design</li>
</ul>
<
</body>
</html>
```
OUTPUT

![breadcrum](https://imgur.com/lSetwk4.jpg)
<hr>

## Sample Styles for Pagination
![sample](https://imgur.com/fqmrl7L.jpg)


