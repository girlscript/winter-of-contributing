# Forms

HTML provides a number of elements which can be used together to create forms which the user can fill out and submit to the Web site or application.
The `<form>` HTML element represents a document section containing interactive controls for submitting information.

<br>

## Elements
| Element | Description |
| --- | --- |
| `<button>` | The **`<button>`** element represents a clickable button, used to submit forms or anywhere in a document for accessible, standard button functionality. |
| `<datalist>` | The **`<datalist>`** element contains a set of `option` elements that represent the permissible or recommended options available to choose from within other controls. |
| `<fieldset>` | The **`<fieldset>`** element is used to group several controls as well as labels (`label`) within a web form. |
| `<form>` | The **`<form>`** element represents a document section containing interactive controls for submitting information. |
| `<input>` | The **`<input>`** element is used to create interactive controls for web-based forms in order to accept data from the user; a wide variety of types of input data and control widgets are available, depending on the device and user agent. The `<input>` element is one of the most powerful and complex in all of HTML due to the sheer number of combinations of input types and attributes. |
| `<label>` | The **`<label>`** element represents a caption for an item in a user interface. |
| `<legend>` | The **`<legend>`** element represents a caption for the content of its parent `fieldset`. |
| `<meter>` | The **`<meter>`** element represents either a scalar value within a known range or a fractional value. |
| `<optgroup>` | The **`<optgroup>`** element creates a grouping of options within a `select` element. |
| `<option>` | The **`<option>`** element is used to define an item contained in a `select`, an `optgroup`, or a `datalist` element. As such, `<option>` can represent menu items in popups and other lists of items in an HTML document. |
| `<output>` | The **`<output>`** element is a container element into which a site or app can inject the results of a calculation or the outcome of a user action. |
| `<progress>` | The **`<progress>`** element displays an indicator showing the completion progress of a task, typically displayed as a progress bar. |
| `<select>` | The **`<select>`** element represents a control that provides a menu of options: |
| `<textarea>` | The **`<textarea>`** element represents a multi-line plain-text editing control, useful when you want to allow users to enter a sizeable amount of free-form text, for example a comment on a review or feedback form. |

## Example: 
 ```html
<form action="" method="GET">
  <div>
    <label for="name">Enter your name: </label>
    <input type="text" name="name" id="name" required>
  </div>
  <div>
    <label for="email">Enter your email: </label>
    <input type="email" name="email" id="email" required>
  </div>
  <div>
    <input type="submit" value="Submit">
  </div>
</form>
```

- Output:
![image](https://user-images.githubusercontent.com/72455881/136057531-674976c6-e4d1-4188-9981-e2b951c80e8a.png)

