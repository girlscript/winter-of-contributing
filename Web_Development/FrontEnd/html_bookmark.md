# HTML Bookmark

- Bookmarks are very useful if a web page is very long.
- Bookmarks helps us to save our time.

### How to create a bookmark in HTML
1) First create the bookmark.
2) Add a link to it.
3) once the link is clicked the given page will scroll to bookmark location.

### Example

1) Use the `id` attribute to create a bookmark.

```html
<h3 id="line2">Chapter 2</h3>
```

2) Add a link to the bookmark ("Jump to Chapter 2"), from within the same page.

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
<p><a href="#line2">Jump to Chapter no 2</a></p>

<!-------------second-bookmark------------------>
<p><a href="#line10">Jump to Chapter no 10</a></p>

<h2>Chapter no 1</h2>
<p>line 1 </p>

<!---------------Bookmarked-1--------------------->
<h2 id="line2">Chapter no 2</h2>
<p>line 2</p>

<h2>Chapter no 3</h2>
<p> line 3 </p>

<h2>Chapter no 4</h2> 
<p>line 4</p>

<h2>Chapter no 5</h2>
<p>line 5</p>

<h2>Chapter no 6</h2>
<p>line 6</p>

<h2>Chapter no 7</h2>
<p>line 7</p>

<h2>Chapter no 8</h2>
<p>line 8</p>

<h2>Chapter no 9</h2>
<p>line 9</p>


<!---------------Bookmarked-2--------------------->
<h2 id="line10">Chapter no 10</h2>
<p>line 10</p>

<h2>Chapter no 11</h2>
<p>line 11</p>

<h2>Chapter no 12</h2>
<p>line 12</p>

<h2>Chapter no 13</h2>
<p>line 13</p>

<h2>Chapter no 14</h2>
<p>line 14</p>

<h2>Chapter no 15</h2>
<p>line 15</p>

<h2>Chapter no 16</h2>
<p>line 16</p>

<h2>Chapter no 17</h2>
<p>line 17</p>

<h2>Chapter no 18</h2>
<p>line 18</p>

<h2>Chapter no 19</h2>
<p>line 19</p>

<h2>Chapter no 20</h2>
<p>line 20</p>

<h2>Chapter no 21</h2>
<p>line 21</p>

<h2>Chapter no 22</h2>
<p>line 22</p>

<h2>Chapter no 23</h2>
<p>line 23</p>

</body>
</html>

```
### Output video for proper understanding of HTML Bookmark

[Watch the video](https://user-images.githubusercontent.com/78864134/141610461-625c5bb6-f4fe-4886-b90e-dbbb447598bb.mp4)

## References

* [W3 School](https://www.w3schools.com/default.asp)
