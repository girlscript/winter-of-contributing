# HTML CHEAT-SHEET📄
### **HTML** or **HyperText Markup Language** is used to give content to a web page and inform web browsers on how to visualize that content.The content of an HTML element is the information between the opening and closing tags of an element.
![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)
## HTML Boilerplate💡
```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Document</title>
</head>
<body>
    
</body>
</html>
```
## <h1 align="center">Basic Tags📌</h1>
```html
<html></html>   <!-- Indicates that the page is written in html -->
<head></head>   <!-- Contains Information specific to the page like title, styles and scripts -->
<title></title> <!-- Title for the page shown in the browser title bar -->
<body></body>   <!-- main Content of that webpage  -->
```
```html
<base/>           <!-- Useful for specifying relative links in a document -->
<style></style>   <!-- stylesheet for the html document  -->
<meta/>           <!-- Contains information about the page, author, page description and other hidden page info -->
<script></script> <!-- Contains all scripts internal or external  -->
<link/>           <!-- Used to link with external pages and stylesheets -->
```
## <h1 align="center">Formatting Tags📌</h1>
```html
<h1></h1> ... <h6></h6> <!-- All six levels of heading with 1 being the most promiment and 6 being the least prominent  -->
<p></p>                 <!-- Used to organize paragraph text  -->
<div></div>             <!-- A generic ontainerused to denote a page section  -->
<span></span>           <!-- Inline section or block container used for creating inline style elements  -->
<br/>                   <!-- Creates a horizontal line-break  -->
<hr>                    <!-- Creates a sectional break into HTML  -->
```
## <h1 align="center">Text Formatting Tags📌</h1>
```HTML
<strong></strong> and <b></b>   <!-- Makes text in bold -->
<em></em> and <i></i>           <!-- make the text in italic -->
<strike></strike>               <!-- creates a strike through the text element -->
<pre></pre>                     <!-- Preformatted monospace text block with some spacing intact -->
<blockquote></blockquote>       <!-- Contains long paragraphs of quotations often cited -->
<abbr></abbr>                   <!-- Contains abbreviations while also making the full form avaialable  -->
<address></address>             <!-- Used to display contact information -->
<code></code>                   <!-- Used to display inline code snippets -->
```

## <h1 align="center">Links Formatting Tags📌</h1>
```HTML
<a href="url"></a>                                <!-- Used to link to external or internal pages of a wbesite -->
<a href="mailto:email@example.com"></a>           <!-- Used to link to an email address -->
<a href="name"></a>                               <!-- Used to link to a document element -->
<a href="#name"></a>                              <!-- Used to link to specific div element (<h2 id="name">Title</h2>) -->
<a href="tel://####-####-##"></a>                 <!-- Used to display phone numbers and make them as clickable -->
```

## <h1 align="center">Image Formatting Tags📌</h1>
```HTML
<img src="url" alt="text">                   <!-- Used to display images in a webpage where src="url" contains the link 
                                                  to the image source and alt="" contains an alternative text to display 
                                                  when the image is not displayed -->
```
## <h1 align="center">List Formatting Tags📌</h1>
```HTML
<ol></ol> <!-- Used to create ordered lists with numbers in the items -->
<ul></ul> <!-- Used to display unordered lists with numbers in the items -->
<li></li> <!-- Contains list items inside ordered and unordered lists -->
<dl></dl> <!-- Contains list item definitions -->
<dt></dt> <!-- definition of single term inline with body content -->
<dd></dd> <!-- The descrpition of the defined term -->
```
## <h1 align="center">Table Formatting Tags📌</h1> 
```HTML
<table></table>                                   <!-- Defines and contains all table related content -->
<caption></caption>                               <!-- A description of what table is and what it contains -->
<thead></thead>                                   <!-- The table headers contain the type of information defined in each
                                                       column underneath -->
<tbody></tbody>                                   <!-- Contains the tables data or information -->
<tfoot></tfoot>                                   <!-- Defines table footer -->
<tr></tr>                                         <!-- Contains the information to be included in a table row -->
<th></th>                                         <!-- Contains the information to be included in a single table header -->
<td></td>                                         <!-- Contains actual information in a table cell -->
<colgroup></colgroup>                             <!-- Groups a single or multiple columns for formatting purposes -->
<col>                                             <!-- Defines a single column of information inside a table -->
```
## <h2 align="left">Table Attributes🔍</h2> 
```HTML
<table border=?>                            <!--Sets the width of the border around table cells-->
<table cellspacing=?>                       <!--Sets amount of space between table cells-->
<table cellpadding=?>                       <!--Sets amount of space between a cell's border and its contents-->
<table width=?>                             <!--Sets width of the table in pixels or as a percentage-->
<tr align=?>                                <!--Sets alignment for cells within the row (left/center/right)-->
<td align=?>                                <!--Sets alignment for cells (left/center/right)-->
<tr valign=?>                               <!--Sets vertical alignment for cells within the row (top/middle/bottom)-->
<td valign=?>                               <!-- Sets vertical alignment for cell (top/middle/bottom)-->
<td rowspan=?>                              <!--Sets number of rows a cell should span (default=1)-->
<td colspan=?>                              <!--Sets number of columns a cell should span-->
<td nowrap>                                 <!--Prevents lines within a cell from being broken to fit-->
    
```
## <h1 align="center">Forms Formatting Tags📌</h1>
```html
<form> </form>                                      <!--Defines a form-->
<select multiple name=? size=?> </select>           <!--Creates a scrolling menu. Size sets the number of menu items visible before user needs to scroll.-->
<select name=?> </select>                           <!--Creates a pulldown menu-->
<option>                                            <!--Sets off each menu item-->
<textarea name=? cols="x" rows="y"></textarea>      <!--Creates a text box area. Columns set the width; rows set the height.-->
<input type="checkbox" name=? value=?>              <!--Creates a checkbox.-->
<input type="checkbox" name=? value=? checked>      <!--Creates a checkbox which is pre-checked.-->
<input type="radio" name=? value=?>                 <!--Creates a radio button.-->
<input type="radio" name=? value=? checked>         <!--Creates a radio button which is pre-checked.-->
<input type="text" name=? size=?>                   <!--Creates a one-line text area. Size sets length, in characters.-->
<input type="submit" value=?>                       <!--Creates a submit button. Value sets the text in the submit button.-->
<input type="image" name=? src=? border=? alt=?>    <!--Creates a submit button using an image.-->
<input type="reset">                                <!--Creates a reset button-->

```
## <h1 align="center"> HTML5 New Tags📌</h1>
```html
<header></header>                                 <!-- Defines the header block for a document or a section -->
<footer></footer>                                 <!-- Defines the footer block for a document or a section -->
<main></main>                                     <!-- Describes the main content of a document--> 
<article></article>                               <!-- Identifies an article inside a document -->
<aside></aside>                                   <!-- Specifies content contained in a document sidebar -->
<section></section>                               <!-- Defines a section of a document -->
<details></details>                               <!-- Describes additonal information that user can view or hide -->
<dialog></dialog>                                 <!-- A dialog box or a window -->
<figure></figure>                                 <!-- An independent content block featuring images, diagrams or illustrations -->
<figcaption></figcaption>                         <!-- Caption that describe a figure -->
<mark></mark>                                     <!-- Displays a portion of highlighted text with in a page content -->
<nav></nav>                                       <!-- Navigation links for the user in a document -->
<menuitem></menuitem>                             <!-- The specific menu item that a usrr can raise from a pop up menu -->
<meter></meter>                                   <!-- Describes the scalar measurement with in a known array -->
<progress></progress>                             <!-- Displays the progress of a task usually a progress bar -->
<rp></rp>                                         <!-- Describes text within the browsers that do not support ruby notations -->
<rt></rt>                                         <!-- Displays east asian typography character details -->
<ruby></ruby>                                     <!-- Describes annotations for east asian typography -->
<summary></summary>                               <!-- Contains a visible heading for details element -->
<bdi></bdi>                                       <!-- Helps you format parts of text in a different direction than other text -->
<time></time>                                     <!-- Identifies the time and date -->
<wbr>                                             <!-- A line break within the content -->
```
![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)

## Resources✅
- [HTML CheatSheet](https://www.wpkube.com/html5-cheat-sheet/)
- [HTML](https://developer.mozilla.org/en-US/docs/Web/HTML)

---
## Happy Learning✨
- Documentation created by : [Anushka Paul](https://github.com/pilipi-puu-puu) 
