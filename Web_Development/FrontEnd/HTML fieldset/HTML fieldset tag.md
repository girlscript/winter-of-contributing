# HTML fieldset Tag
This tag is used in form tag when we need to group related items in a form basically this tag makes border around all the related items of the form. This makes the form easier to understand.
### HTML legend Tag
This tag is used to mention captions in the form which makes form easy to understand.
### Syntax
```html
<form >
  <fieldset>
    <legend>Caption</legend>
    <label>Name</label>
    <input type="name">
  </fieldset>
</form>

```

### Example for fieldset tag

<img width="1439" alt="Screenshot 2021-11-23 at 10 06 57 PM" src="https://user-images.githubusercontent.com/84950175/143065720-6b561790-20ad-470a-8c85-ae574d662e15.png">

**Code**
```html
<!DOCTYPE html>
<html>
<body>
<h1>GWOC</h1>
<form >
 <fieldset>
  <legend>Information About 1 Contributor</legend>
    <label >FULL NAME: </label>
    <input type="text" ><br><br>
    <label >ROLE: </label>
    <input type="text" ><br><br>
    <label >PR'S MERGED: </label>
    <input type="number" ><br><br>
  <legend>Information About 2 Contributor</legend>
    <label >FULL NAME: </label>
    <input type="text" ><br><br>
    <label >ROLE: </label>
    <input type="text" ><br><br>
    <label >PR'S MERGED: </label>
    <input type="number" ><br><br>
 </fieldset>
</form>
</body>
</html>
```
### Refrences
* [W3Schools](https://www.w3schools.com/tags/tag_fieldset.asp#)
* [MDN Web Docs](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/fieldset)
