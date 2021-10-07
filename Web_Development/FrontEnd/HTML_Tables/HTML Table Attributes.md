# HTML Table Attributes
Tables in HTML pages are created by using multiple HTML tags with specific attributes defining table structure.The HTML tables are created using the `<table>` tag in which the `<tr>` tag is used to create table rows and `<td>` tag is used to create data cells. The elements under `<td>` are regular and left aligned by default.
Example:

```html
<!DOCTYPE html>
<html>
   <head>
      <title>HTML Tables</title>
   </head>
   <body>
      <table border = "1">
         <tr>
            <td>Row 1, Column 1</td>
            <td>Row 1, Column 2</td>
         </tr>
         <tr>
            <td>Row 2, Column 1</td>
            <td>Row 2, Column 2</td>
         </tr>
      </table>
   </body>
</html>
```
![format of basic table.png](https://th.bing.com/th/id/OIP.uevjYmhI83Rp2KkZ4KWySwAAAA?w=304&h=152&c=7&r=0&o=5&dpr=1.5&pid=1.7)

## Attributes of Table


1.   **Border**:Border attribute specifies the width of the border of the table. If you want to draw border in your table then you should use border attribute in table tag.
```html
<TABLE BORDER=?></TABLE>
```

2.   **Cellpadding**: Cellpadding attribute specifies the space between the cell wall and the cell content.
```html
<TABLE CELLPADDING=?>
```
3.   **Cellspacing**: Cellspacing attribute specifies the space between two cells. If you want to leave some space in two cells then you should use Cellspacing attribute in table tag.
```html
<TABLE CELLSPACING=?>
```
4.   **Align**: Align attribute specifies the alignment of values in a table. It can be align a value in left, right and centre.
```html
<TR ALIGN=LEFT|RIGHT| CENTER|MIDDLE|BOTTOM
VALIGN=TOP|BOTTOM|MIDDLE>
<TD ALIGN=LEFT|RIGHT| CENTER|MIDDLE|BOTTOM
VALIGN=TOP|BOTTOM|MIDDLE>
<TH ALIGN=LEFT|RIGHT| CENTER|MIDDLE|BOTTOM
VALIGN=TOP|BOTTOM|MIDDLE>
```
5.   **Width & Height**: Width attribute specifies the width of a table and height adjusts its height. If you want to set width and height of a table then you should use width/height attribute in table tag.
```html
<TH WIDTH=? HEIGHT=?> – (in pixels)
<TH WIDTH="%" HEIGHT="%"> – (percentage of table)
<TABLE WIDTH=? HEIGHT=?> – (in pixels)
<TABLE WIDTH="%" HEIGHT="%"> – (percentage of page)
<TD WIDTH=? HEIGHT=?> - (in pixels)
<TD WIDTH="%" HEIGHT="%"> – (percentage of table)
```
6. **Bgcolor**: Bgcolor attribute specifies the background color of a table. If you want to use a background color in your table then you should use bgcolor attribute in table tag.
```html
<TH BGCOLOR="#$$$$$$">
<TD BGCOLOR="#$$$$$$">
```
7.   **Colspan and rowspan**:You will use colspan attribute if you want to merge two or more columns into a single column. Similar way you will use rowspan if you want to merge two or more rows.
```html
<td rowspan =?></td>
<td colspan =?></td>
```
8.  **Caption tag**:The caption tag will serve as a title or explanation for the table and it shows up at the top of the table. This tag is deprecated in newer version of HTML/XHTML.
```html
<caption>This is the caption</caption>
```
## Table Header, Body, and Footer
Tables can be divided into three portions − a header, a body, and a foot. The head and foot are rather similar to headers and footers in a word-processed document that remain the same for every page, while the body is the main content holder of the table.

The three elements for separating the head, body, and foot of a table are −

*   `<thead>` − to create a separate table header.

*   `<tbody>` − to indicate the main body of the table.

*   `<tfoot>` − to create a separate table footer.

A table may contain several `<tbody>` elements to indicate different pages or groups of data. But it is notable that `<thead>` and `<tfoot>` tags should appear before `<tbody>`

```html
<!DOCTYPE html>
<html>
   <head>
      <title>HTML Table</title>
   </head>
   <body>
      <table border = "1" width = "100%">
         <thead>
            <tr>
               <td colspan = "4">This is the head of the table</td>
            </tr>
         </thead>      
         <tfoot>
            <tr>
               <td colspan = "4">This is the foot of the table</td>
            </tr>
         </tfoot>
         <tbody>
            <tr>
               <td>Cell 1</td>
               <td>Cell 2</td>
               <td>Cell 3</td>
               <td>Cell 4</td>
            </tr>
         </tbody>
      </table>
   </body>
   ```
![header,body,footer.png](https://th.bing.com/th/id/OIP.-2rsLlxIZioqtpsIw0Uf1AHaCY?pid=ImgDet&rs=1)

## Reference table for quick review

![attributes-of-table-tag-ev.png](https://github.com/tavneetgill/winter-of-contributing/blob/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/HTML_Tables/attributes-of-table-tag-ev.jpeg)

## Summary
In this topic, all the neccessary attributes are shared and where and for what purpose we can use them. To make a table more versatile and appealing for our view we can add these in our tables. These table attributes are vital part of a table tag in html so one should have a quick glance over them while implementing.

## Resources and Reference links
*   https://www.tutorialspoint.com/html/html_tables.htm
*   https://skillmaking.com/table-tag-html-attributes-table-tag-important-tags-html/
*   https://www.htmlcenter.com/blog/html-table-attributes/
*   https://i1.wp.com/www.edupointbd.com/wp-content/uploads/2019/06/attributes-of-table-tag-ev.png?resize=640%2C317
*   https://th.bing.com/th/id/OIP.uevjYmhI83Rp2KkZ4KWySwAAAA?w=304&h=152&c=7&r=0&o=5&dpr=1.5&pid=1.7
*   https://th.bing.com/th/id/OIP.-2rsLlxIZioqtpsIw0Uf1AHaCY?pid=ImgDet&rs=1
