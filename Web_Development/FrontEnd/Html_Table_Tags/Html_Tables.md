
# HTML_Tables #

* The <table> HTML element represents tabular data — that is, information presented in a two-dimensional table comprised of rows and columns of cells containing data. *

> Table Cells 

# Each table cell is defined by a <td> and a </td> tag.
# td stands for table data.
# Everything between <td> and </td> are the content of the table cell.

> Table Rows

# Each table row starts with a <tr> and end with a </tr> tag.
# tr stands for table row.

> Table Headers

# to give headers to your cells to be headers, in those cases use the <th> tag instead of the <td> tag:
# td stands for table header.
# By default, the text in <th> elements are bold and centered, but you can change that with CSS.

> Table <caption> Tag

# The <caption> tag defines a table caption
# The <caption> tag must be inserted immediately after the <table> tag.
# By default, a table caption will be center-aligned above a table,, but you can change that with CSS.

> Table <colgroup> Tag

# The <colgroup> tag specifies a group of one or more columns in a table for formatting.
# The <colgroup> tag is useful for applying styles to entire columns, instead of repeating the styles for each cell, for each row.
# The <colgroup> tag must be a child of a <table> element, after any <caption> elements and before any <thead>, <tbody>, <tfoot>, and <tr> elements.
# To define different properties to a column within a <colgroup>, use the <col> tag within the <colgroup> tag.

> Table <col> Tag

# The <col> tag specifies column properties for each column within a <colgroup> element.
# The <col> tag is useful for applying styles to entire columns, instead of repeating the styles for each cell, for each row.



example 1:
code 1 :

<!DOCTYPE html>
<html>
<head>
<style>
table, th, td {
  border: 1px solid black;
}
</style>
</head>
<body>

<h1>The colgroup element</h1>

<table>
<caption>Favourite Books</caption>
  <colgroup>
    <col span="2" style="background-color:red">
    <col style="background-color:pink">
  </colgroup>
  <tr>
    <th>No</th>
    <th>Title</th>
    <th>Price</th>
  </tr>
  <tr>
    <td>1</td>
    <td>Book1</td>
    <td>$53</td>
  </tr>
  <tr>
    <td>2</td>
    <td>Book2</td>
    <td>$49</td>
  </tr>
</table>

</body>
</html>


output:
Html_Tables\Output Images\output_code1.png




> Table <thead> Tag

# The <thead> tag is used to group header content in an HTML table.
# The <thead> element is used in conjunction with the <tbody> and <tfoot> elements to specify each part of a table (header, body, footer).
# The <thead> element must have one or more <tr> tags inside.

> Table <tbody> Tag

# The <tbody> tag is used to group the body content in an HTML table.
# The <tbody> element is used in conjunction with the <thead> and <tfoot> elements to specify each part of a table (body, header, footer).
# The <tbody> element must have one or more <tr> tags inside.

> Table <tbody> Tag

# The <tfoot> tag is used to group footer content in an HTML table.
# The <tfoot> element is used in conjunction with the <thead> and <tbody> elements to specify  each part of a table (footer, header, body).
# The <tfoot> element must have one or more <tr> tags inside.


example 2:
code 2:

<!DOCTYPE html>
<html>
<head>
<style>
table, th, td {
  border: 1px solid black;
}
</style>
</head>
<body>

<h1>The thead, tbody, and tfoot elements</h1>

<table>
  <thead>
    <tr>
      <th>Month</th>
      <th>Days</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>January</td>
      <td>31</td>
    </tr>
    <tr>
      <td>February</td>
      <td>28 or 29</td>
    </tr>
  </tbody>
  <tfoot>
    <tr>
      <td>April</td>
      <td>30</td>
    </tr>
  </tfoot>
</table>

</body>
</html>


Output :-
Html_Tables\Output Images\output_code2.png


**References**
---

- https://developer.mozilla.org/en-US/docs/Learn/HTML/Tables/Basics  
- https://www.w3schools.com/html/html_tables.asp


*Thanks for reading !*

**Author :** [@ Vaishnavi Phadtare](https://github.com/VaishnaviPhadtare) 

