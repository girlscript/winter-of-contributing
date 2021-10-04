# HTML Links
 Links allow users to click their way from page to page.

## HTML Links - Hyperlinks
* HTML links are hyperlinks.

* You can click on a link and jump to another document.

* When you move the mouse over a link, the mouse arrow will turn into a little hand.

* A link does not have to be text. A link can be an image or any other HTML element!

## HTML Links - Syntax
* The HTML <**a**> tag defines a hyperlink. It has the following syntax:

  <**a href="url"**>Link Text<**/a**>

* The most important attribute of the <a> element is the href attribute, which indicates the link's destination.

* The link text is the part that will be visible to the reader.Clicking on the link text, will send the reader to the specified URL address.


### Example:
  
This example shows how to create a link to github.com:

<**a href="https://github.com/" **> Visit Github.com!<**/a**>
  
* By default, links will appear as follows in all browsers:

* An unvisited link is underlined and blue
* A visited link is underlined and purple
* An active link is underlined and red
* Links can of course be styled with CSS, to get another look.

## HTML Links - The target Attribute
  
By default, the linked page will be displayed in the current browser window. To change this, another target must be specified for the link.

The target attribute specifies where to open the linked document.

**The target attribute can have one of the following values:**

* **_self** - Default. Opens the document in the same window/tab as it was clicked
* **_blank** - Opens the document in a new window or tab
* **_parent** - Opens the document in the parent frame
* **_top** - Opens the document in the full body of the window
  
### Example
Use target="_blank" to open the linked document in a new browser window or tab:

<**a href="https://github.com/" target="_blank"**>Open Github!<**/a**>
  
**Absolute URLs vs. Relative URLs**

Both examples above are using an absolute URL (a full web address) in the href attribute.

A local link (a link to a page within the same website) is specified with a relative URL (without the "https://www" part):

### Example
```
<h2>Absolute URLs</h2>
<p><a href="https://www.youtube.com/">Youtube</a></p>
<p><a href="https://www.google.com/">Google</a></p>

<h2>Relative URLs</h2>
<p><a href="/Web_Development/FrontEnd/HTML_LINKS">HTML Links</a></p>
<p><a href="/events">Github Events</a></p>
  
```
## HTML Links - Use an Image as a Link
  
To use an image as a link, just put the <**img**> tag inside the <**a**> tag:

### Example
```
<a href="https://www.github.com">
<img src="https://pngimg.com/uploads/github/github_PNG83.png" alt="Github" style="width:50px;height:50px;">
</a>
  
```
<a href="https://www.github.com">
<img src="https://pngimg.com/uploads/github/github_PNG83.png" alt="Github" style="width:50px;height:50px;">
</a>

```
<a href="https://www.github.com/girlscript/winter-of-contributing">
<img src="https://gwoc.girlscript.tech/assets/gwoc_smallweb.png" alt="Gwoc21" style="width:50px;height:50px;">
</a>
```
 
<a href="https://www.github.com/girlscript/winter-of-contributing">
<img src="https://gwoc.girlscript.tech/assets/gwoc_smallweb.png" alt="Gwoc21" style="width:50px;height:50px;">
</a>


**Link to an Email Address**
  
* Use mailto: inside the href attribute to create a link that opens the user's email program (to let them send a new email):

### Example:
``` 
<a href="mailto:someone@example.com">Send email</a>
```
**Button as a Link**
  
To use an HTML button as a link, you have to add some JavaScript code.

JavaScript allows you to specify what happens at certain events, such as a click of a button:

### Example:
```
<button onclick="document.location="https://github.com/girlscript/winter-of-contributing"> GWOC21</button>
```
  
## Link Titles
  
* The title attribute specifies extra information about an element. The information is most often shown as a tooltip text when the mouse moves over the element.

### Example:
```  
<a href="https://github.com/girlscript/winter-of-contributing" title="Go to girlscript repository">Visit GWOC'21 Repo</a>
```
<a href="https://github.com/girlscript/winter-of-contributing" title="Go to girlscript repository">Visit GWOC'21 Repository</a>
