# HTML Bookmark

- Bookmarks are very useful if a web page is very long.
- Bookmarks helps us to save our time.

### How to create a bookmark in HTML
1) Create the bookmark.
2) Add a link to it.
3) When the link is clicked, the page will scroll down or up to the location with the bookmark.

### Example

1) First, use the `id` attribute to create a bookmark.

```html
<h3 id="line2">Chapter 2</h3>
```

2) Then, add a link to the bookmark ("Jump to Chapter 2"), from within the same page.

```html
<a href="#line2">Jump to Chapter 2</a>
```

3) That's it, you have succesfully added bookmark to your web page.

### Example with Code

```html
<!DOCTYPE html>
<html>
<body>

<!-------------first-bookmark------------------>
<p><a href="#line2">Jump to Chapter 2</a></p>

<!-------------second-bookmark------------------>
<p><a href="#line10">Jump to Chapter 10</a></p>

<h2>Chapter 1</h2>
<p>This chapter explains ba bla bla</p>

<!---------------Bookmarked-1--------------------->
<h2 id="line2">Chapter 2</h2>
<p>This chapter explains ba bla bla</p>

<h2>Chapter 3</h2>
<p>This chapter explains ba bla bla</p>

<h2>Chapter 4</h2> 
<p>This chapter explains ba bla bla</p>

<h2>Chapter 5</h2>
<p>This chapter explains ba bla bla</p>

<h2>Chapter 6</h2>
<p>This chapter explains ba bla bla</p>

<h2>Chapter 7</h2>
<p>This chapter explains ba bla bla</p>

<h2>Chapter 8</h2>
<p>This chapter explains ba bla bla</p>

<h2>Chapter 9</h2>
<p>This chapter explains ba bla bla</p>


<!---------------Bookmarked-2--------------------->
<h2 id="line10">Chapter 10</h2>
<p>This chapter explains ba bla bla</p>

<h2>Chapter 11</h2>
<p>This chapter explains ba bla bla</p>

<h2>Chapter 12</h2>
<p>This chapter explains ba bla bla</p>

<h2>Chapter 13</h2>
<p>This chapter explains ba bla bla</p>

<h2>Chapter 14</h2>
<p>This chapter explains ba bla bla</p>

<h2>Chapter 15</h2>
<p>This chapter explains ba bla bla</p>

<h2>Chapter 16</h2>
<p>This chapter explains ba bla bla</p>

<h2>Chapter 17</h2>
<p>This chapter explains ba bla bla</p>

<h2>Chapter 18</h2>
<p>This chapter explains ba bla bla</p>

<h2>Chapter 19</h2>
<p>This chapter explains ba bla bla</p>

<h2>Chapter 20</h2>
<p>This chapter explains ba bla bla</p>

<h2>Chapter 21</h2>
<p>This chapter explains ba bla bla</p>

<h2>Chapter 22</h2>
<p>This chapter explains ba bla bla</p>

<h2>Chapter 23</h2>
<p>This chapter explains ba bla bla</p>

</body>
</html>

```

## References

* [W3 School](https://www.w3schools.com/default.asp)
