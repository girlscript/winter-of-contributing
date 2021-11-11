# @import
## Why @ rule?
CSS property can be include in the HTML page in a number of different ways. HTML documents are formatted according to the information in the style sheet which is to be included.

### There are many ways to include CSS file:
- **External Style Sheet(Usage of HTML ```<link>``` tag):**
   External CSS contains separate CSS file which contains only style property with the help of tag attributes (For example class, id, heading, … etc). CSS property written in a separate file with .css extension and should be linked to the HTML document using link tag. This means that for each element, style can be set only once and that will be applied across web pages. The link tag is used to link the external style sheet with the html webpage.
   
   ``` CSS
   <link rel="stylesheet" href="style.css">
   ```
- **External Style Sheet(Usage of @import At-Rule):**
   At-rule method must be included either within <style> tag or else inside the style sheet. 
  ``` CSS
  <style>
      @import url(style.css);
  </style>
  ```
- **Internal Style Sheet(Usage of ```<style>``` Element):**
   This can be used when a single HTML document must be styled uniquely. The CSS rule set should be within the HTML file in the head section i.e the CSS is embedded within the HTML file.
  ``` CSS
  <style>
      element {
          // CSS property
      }
  </style>
  ```
- **Inline Style** contains the CSS property in the body section attached with element is known as inline CSS. This kind of style is specified within an HTML tag using style attribute. It is used to apply a unique style for a single element.
  ``` CSS 
  <h1 style="style property">Welcome Amigos!!</h1>
  ```

### **@import rule**-
  The CSS @import rule is used to import one style sheet into another style sheet.The @import keyword must be followed by the URI of the style sheet to include. This rule also support media queries so that the user can import the media-dependent style sheet. A string is also allowed. The @import rule must be declared at the top of the document after any __@charset__ declaration. 
  
#### Characteristics
  - The @import at-rule is used to import a style sheet into a HTML page or another style sheet.
  - The @import at-rule is also used to add media queries, therefore import is a media-dependent.
  - It always to be declared at the top of the document.

## Syntax

``` CSS
@import url;
@import url list-of-media-queries;
@import url supports( supports-query );
@import url supports( supports-query ) list-of-media-queries;
```

where,

*_url_*
  > Is a ``` <string> ```  or a ``` <url>() ``` representing the location of the resource to import. The URL may be absolute or relative.


*_list-of-media-queries_*
  > The list of media queries condition the application of the CSS rules defined in the linked URL

*_supports-query_*
  > Is either a ``` <supports-condition> ``` or a ``` <declaration> ```.

### Description
Imported rules must precede all other types of rules, except @charset rules; as it is not a nested statement, @import cannot be used inside conditional group at-rules.

So that user agents can avoid retrieving resources for unsupported media types, authors may specify media-dependent @import rules. These conditional imports specify comma-separated media queries after the URL. In the absence of any media query, the import is unconditional. Specifying all for the medium has the same effect.
## 1. Example

``` HTML
<!DOCTYPE html>
<html>
     
<head>
    <title>@import property</title>
     
    <style type="text/css">
        @import url(https://fonts.googleapis.com/css?family=Coiny');
        h1{
                color:#009900;
        }
        p {
                font-family: 'Coiny', cursive;
                font-style:bold;
                font-size:20px;
        }
    </style>
</head>
 
<body>
    <div id = "property">
         
        <h1>Hello Welcome</h1>
         
        <p>External style sheet (Using @import At-rule)</p>
    </div>
</body>
 
</html>  

```
## 2. Exmaple 
  * **style.css**
  ``` CSS 
  @import url("style1.css");
  h1 {
    color: #00ff00;
  }
  ```
  * **style1.css**
  ``` CSS 
  h1 {
   text-decoration: underline;
   font-size:60px;
  }
  p {
   padding-left: 20px;
   font-size: 60px;
  }
  ```
  * **index.html**
  ``` HTML
  <!DOCTYPE html>
  <html>
  <head>
    <title>Welcome</title>
    <link href="style.css" rel="stylesheet">
  </head>
  <body>
    <h1>Girlscript</h1>    
    <p>Winter Of Contributing</p>  
  </body>
  </html>  
  ```
  
## Reference links
  
 * https://developer.mozilla.org/en-US/docs/Web/CSS/@import
 * https://www.geeksforgeeks.org/css-import-rule/?ref=lbp
 * https://www.w3docs.com/learn-css/import.html
  
