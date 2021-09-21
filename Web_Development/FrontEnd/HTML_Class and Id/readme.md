# HTML Classes and Ids #1277

---

The only difference between Classes and Ids is that “id” is unique in a page and can only apply to at most one element, while “class” selector can apply to multiple elements.

---

## **CLASS SELECTORS**

A Class is a style definition that you create in pretty much the same way as you created a global style , but it isn't necessarily bound to any one tag . Instead , you can apply it anywhere you like . The class selector starts with a dot (.) character.
<br>
The class name is case sensitive

```
.highlight {
    background-color: yellow;
}
```

## **ID SELECTORS**

In addition to classes , you can use IDs to apply styles to your pages Except for the syntax , assigning a style to an ID isn't any different from assigning one to a class , and the usage is also similar. The id selector starts with a hash (#) character.
<br>

```
#highlight {
    background-color: yellow;
}
```

---

Difference Between Class and ID
<br>
--

```
<!DOCTYPE html>
<html>
<head>
<style>
/* Style the element with the id "myHeader" */
#myHeader {
  background-color: yellow;
  color: grey;
  padding: 40px;
  text-align: center;
}

/* Style all elements with the class name "country" */
.country {
  background-color: blue;
  color: white;
  padding: 10px;
}
</style>
</head>
<body>



<!-- An element with a unique id -->
<h1 id="myHeader">COUNTRIES ALL OVER THE WORLD</h1>

<!-- Multiple elements with same class -->
<h2 class="country">India</h2>
<p>New Delhi is the capital of India.</p>

<h2 class="country">England</h2>
<p>London is the capital of England.</p>

<h2 class="country">France</h2>
<p>Paris is the capital of France.</p>

<h2 class="country">Japan</h2>
<p>Tokyo is the capital of Japan.</p>

</body>
</html>


```

The table will be seen something this:
