# Attributes
This element includes the global attributes.

1. **`accept`**
  - Comma-separated content types the server accepts.
  > **Note:** 
    **This attribute was removed in HTML5 and should not be used.** Instead, use the `accept` attribute on `<input type=file>` elements.

<br>

2. **`accept-charset`**
  - Space-separated character encodings the server accepts. The browser uses them in the order in which they are listed. 
  - The default value means the same encoding as the page. 
  - In previous versions of HTML, character encodings could also be delimited by commas.

<br>

3. **`autocapitalize`** 
  - A nonstandard attribute used by iOS Safari that controls how textual form elements should be automatically capitalized. 
  - `autocapitalize` attributes on a form elements override it on `<form>`. 
  - Possible values:
    -   `none`: No automatic capitalization.
    -   `sentences` (default): Capitalize the first letter of each sentence.
    -   `words`: Capitalize the first letter of each word.
    -   `characters`: Capitalize all characters --- that is, uppercase.

<br>

4. **`autocomplete`**
- Indicates whether input elements can by default have their values automatically completed by the browser. 
- `autocomplete` attributes on form elements override it on `<form>`. 
- Possible values:
  -   `off`: The browser may not automatically complete entries. (Browsers tend to ignore this for suspected login forms; see The autocomplete attribute and login fields.)
  -   `on`: The browser may automatically complete entries.

<br>

5. **`name`**
  - The name of the form. The value must not be the empty string, and must be unique among the `form` elements in the forms collection that it is in, if any.

<br>

6. **`rel`**
  - Creates a hyperlink or annotation depending on the value
  - **`rel`** attribute for details.

<br><br>

### Attributes for form submission
The following attributes control behavior during form submission.

1. **`action`**
  - The URL that processes the form submission. This value can be overridden by a `formaction` attribute on a `<button>`
  - `<input type="submit">`, or `<input type="image">` element.

<br>

2. **`enctype`**
  - If the value of the `method` attribute is `post`, `enctype` is the MIME type of the form submission. 
  - Possible values:
    -   `application/x-www-form-urlencoded`: The default value.
    -   `multipart/form-data`: Use this if the form contains `<input>` elements with `type=file`.
    -   `text/plain`: Introduced by HTML5 for debugging purposes.
  - This value can be overridden by `formenctype` attributes on `<button>`, `<input type="submit">`, or `<input type="image">` elements.

<br>

3. **`method`**
  - The HTTP method to submit the form with. 
  - Possible (case insensitive) values:
    -   `post`: The POST method; form data sent as the request body.
    -   `get`: The GET method; form data appended to the `action` URL with a `?` separator. Use this method when the form has no side-effects.
    -   `dialog`: When the form is inside a `<dialog>`, closes the dialog on submission.
  - This value is overridden by `formmethod` attributes on `<button>`, `<input type="submit">`, or `<input type="image">` elements.

<br>

4. **`novalidate`**
- This Boolean attribute indicates that the form shouldn't be validated when submitted. 
- If this attribute is not set (and therefore the form ***is*** validated), it can be overridden by a `formnovalidate` attribute on a `<button>`, `<input type="submit">`, or `<input type="image">` element belonging to the form.

<br>

5. **`target`**
- Indicates where to display the response after submitting the form. In HTML 4, this is the name/keyword for a frame. In HTML5, it is a name/keyword for a *browsing context* (for example, tab, window, or iframe). 
- The following keywords have special meanings:
  -   `_self` (default): Load into the same browsing context as the current one.
  -   `_blank`: Load into a new unnamed browsing context.
  -   `_parent`: Load into the parent browsing context of the current one. If no parent, behaves the same as `_self`.
  -   `_top`: Load into the top-level browsing context (i.e., the browsing context that is an ancestor of the current one and has no parent). If no parent, behaves the same as `_self`.

This value can be overridden by a `formtarget` attribute on a `<button>`, `<input type="submit">`, or `<input type="image">` element.
**Note:** Setting `target="_blank"` on `<form>` elements implicitly provides the same `rel` behavior as setting `rel="noopener"` which does not set `window.opener`.

## Examples

```html
<!-- Form which will send a GET request to the current URL -->
<form>
  <label>Name:
    <input name="submitted-name" autocomplete="name">
  </label>
  <button>Save</button>
</form>

<!-- Form which will send a POST request to the current URL -->
<form method="post">
  <label>Name:
    <input name="submitted-name" autocomplete="name">
  </label>
  <button>Save</button>
</form>

<!-- Form with fieldset, legend, and label -->
<form method="post">
  <fieldset>
    <legend>Title</legend>
    <label><input type="radio" name="radio"> Select me</label>
  </fieldset>
</form>
```
- Output:
![image](https://user-images.githubusercontent.com/72455881/136079697-ba8fbbd7-8a8c-4d5b-8bd7-c609061eddb1.png)

