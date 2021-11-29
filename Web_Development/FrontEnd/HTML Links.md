# HTML Links

- Almost every web page contains one or two links atleast. These links allow users to jump from one document to another document by clicking on it.
- We can also say that HTML links are hyperlinks.
- When we move the mouse cursor over the link, the mouse cursor change into small hand which point over the link.
- A link can be button, image or any other HTML elements.It does not have to be text.
- Inside `href` attribute we can use `mailto:` to create a link that opens user eamil program.

**Example**

```html
<a href="mailto:gwoc@example.com">Send email</a>
```

## Syntax

`<a>` tag explains a hyperlink. It has the following syntax:

```html
<a href="path">text</a>
```

- `href` attribute is the most important attribute of `<a>` element which designate the link's destination (mostly it is URL).
- The _text_ part is visible to reader.
 
**Example**

```html
<a href="https://gwoc.girlscript.tech/">GIRLSCRIPT</a>
```

A HTML link exhibit in different colors on the basis of whether it is visited, unvisited or active.

1. For Visited: links might be underlined and blue. 
2. For Unvisited: link might be underlined and purple.
3. For Active: link might be underlined and red.

We can also create a bookmarks using HTML links.

**Example**

```html
<a href="#html4">Jump to HTML Links</a> 
```

## Target Attribute

The target attribute enumerate where to open the linked document. It has some values which specify where the documents will open which are as follows :

1. `_self`: Opens the linked document in the same window or tab.
2. `_blank`: Opens the linked document in a new window or tab.
3. `_parent`: Opens the linked document in the parent frame.
4. `_top`: Opens the linked document in the full body of the window.

**Example**

```html
<a href="https://gwoc.girlscript.tech/" target="_blank">Visit GIRLSCRIPT</a>
```

## Internal Links

An internal link is used in html page to navigate in a proper way in the webpage. If we want to go to any particular destination in the same page by clicking on a link then we create an internal link in the webpage. For this we use `<a>` tag to create a new link. 

**Example**

```html
<a href="#link">FirstLink</a>
```

## External Links

An external link is used to make interconnection between two html webpages. When we want to direct to some other page or any other URL by clicking on a link on webpage then we create an external link. For this we again use `<a>` tag in html webpage.

**Example**

```html
<a href="name or address of webpage">text</a>
```
