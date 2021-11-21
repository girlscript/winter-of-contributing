# HTML fieldset Tag
This tag is used in form tag when we need to group related items in a form basically this tag makes border around all the related items of the form. This makes the form easier to understand.
### HTML legend Tag
This tag is used to mention captions in the form
### Syntax
```html
<form action="#">
  <fieldset>
    <legend>Simple fieldset</legend>
    <input type="radio" id="radio">
    <label for="radio">Spirit of radio</label>
  </fieldset>
</form>

```
### Default CSS settings for fieldset Tag
```css
fieldset {
  display: block;
  margin-left: 2px;
  margin-right: 2px;
  padding-top: 0.35em;
  padding-bottom: 0.625em;
  padding-left: 0.75em;
  padding-right: 0.75em;
  border: 2px groove (internal value);
}
```
### Example for fieldset tag
<img width="1439" alt="Screenshot 2021-11-21 at 2 04 59 PM" src="https://user-images.githubusercontent.com/84950175/142755329-c484bd74-530f-4907-93fa-0889f1c0b7d6.png">

**Code**
```html
<!DOCTYPE html>
<html>
<body>
<h1>GWOC</h1>
<form >
 <fieldset>
  <legend>Information About yourself</legend>
    <label for="fname">First name:</label>
    <input type="text" id="fname" name="fname"><br><br>
    <label for="lname">Last name:</label>
    <input type="text" id="lname" name="lname"><br><br>
    <label for="email">Email:</label>
    <input type="email" id="email" name="email"><br><br>
    <label for="birthday">Birthday:</label>
    <input type="date" id="birthday" name="birthday"><br><br>
  <legend>Information About your parents</legend>
    <label for="fname">First name:</label>
    <input type="text" id="fname" name="fname"><br><br>
    <label for="lname">Last name:</label>
    <input type="text" id="lname" name="lname"><br><br>
    <label for="email">Email:</label>
    <input type="email" id="email" name="email"><br><br>
    <label for="birthday">Birthday:</label>
    <input type="date" id="birthday" name="birthday"><br><br>
  <input type="submit" value="Submit">
 </fieldset>
</form>
</body>
</html>
```
### Refrences
* [W3Schools](https://www.w3schools.com/tags/tag_fieldset.asp#)
* [MDN Web Docs](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/fieldset)
