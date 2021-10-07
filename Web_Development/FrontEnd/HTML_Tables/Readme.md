# HTML TABLES
Tables are used to display **tabular data** in the form of ***rows*** and ***columns***. HTML tables are created using various **tags**. The main tag for creating a basic html table is the ```<table>``` tag.
<br>

The basic structure of a table can be build with **rows** using ```<tr>``` and ```<td>``` tags. ```<tr>``` stands for ***table row*** and ```<td>``` stands for ***table data*** (contents of each cell in the row).
<br>
A **data cell** can contain text, images, lists, paragraphs, forms, horizontal rules, 
<br>
### **A simple HTML table structure :** 
``` html
<table>
<tr>
    <td>Row 1, cell 1</td>
    <td>Row 1, cell 2</td>
    <td>Row 1, cell 3</td>
</tr>
<tr>
    <td>Row 2, cell 1</td>
    <td>Row 2, cell 2</td>
    <td>Row 2, cell 3</td>
</tr>
<tr>
    <td>Row 3, cell 1</td>
    <td>Row 3, cell 2</td>
    <td>Row 3, cell 3</td>
</tr>
<tr>
    <td>Row 4, cell 1</td>
    <td>Row 4, cell 2</td>
    <td>Row 4, cell 3</td>
</tr>
</table>
```

#### **The table :** 

| Row 1, cell 1 | Row 1, cell 2 | Row 1, cell 3 |
|---------------|---------------|---------------|
| Row 2, cell 1 | Row 2, cell 2 | Row 2, cell 3 |
| Row 3, cell 1 | Row 3, cell 2 | Row 3, cell 3 |

## **Tags used to create a HTML table**
### ```<tr>``` 
The ```<tr>``` tag Creates a new **row** in the table. Every row created in a table must have **same number of cells**.
> ```html
> <table>
> <tr>
>     <td> First cell First Row </td>
>     <td> Second cell cell First Row </td>
> </tr>
> </table>
> ```

### ```<td>```
The ```<td>``` tag creates a new **cell** of a row in the table.
> ```html
> <table>
> <tr>
>     <td> First cell First Row </td>
>     <td> Second cell cell First Row </td>
> </tr>
> <tr>
>     <td> First cell Second Row </td>
>     <td> Second cell cell Second Row </td>
> </tr>
> </table>
> ```
### ```<th>```
The ```<th>``` creates a **header cell** in a row in the table.
> ```html
> <table>
> <tr>
>     <th> First Name </th>
>     <th> Last Name </th>
> </tr>
> <tr>
>     <td> John</td>
>     <td> Doe </td>
>     
>     
> </tr>
> <tr>
>    <td> Janice </td>
>    <td> Keen </td>
> </tr>
> </table>
> ```
#### **The table :**

| First Name  | Last Name |
|-------------|-----------|
| John        | Doe       |
| Janice      | Keen      |

### ```<thead>```
The ```<thead>``` tag groups the **table headers** into one row. This tag is used for the ease of distinguishing the **header row**.
> ```html
> <table>
> <thead>
>     <th> First Name </th>
>     <th> Last Name </th>
> </thead>
> <tr>
>     <td> John</td>
>     <td> Doe </td>
>     
>     
> </tr>
> <tr>
>    <td> Janice </td>
>    <td> Keen </td>
> </tr>
> </table>
> ```
### ```<tbody>```
The ```<tbody>``` tag groups the rows which contains the **body of the table** in order to separate out the body content.
> ```html
> <table>
> <thead>
>     <th>  Name </th>
>     <th>  Salary($) </th>
> </thead>
> <tbody>
> <tr>
>     <td> John Doe</td>
>     <td> 200 </td>
>     
>     
> </tr>
> <tr>
>    <td> Janice Keen</td>
>    <td> 250 </td>
> </tr>
> </tbody>
> </table>
> ```
#### **The table :**

|  Name       | Salary($) |
|-------------|-----------|
| John Doe    | 200       |
| Janice Keen | 250       |

### ```<tfoot>```
The ```<tfoot>``` tag groups together the **footer content of the table**. It should contain atleast one ```<tr>``` tag inside it.
> ```html
> <table>
> <thead>
>     <th>  Name </th>
>     <th>  Salary($) </th>
> </thead>
> <tbody>
> <tr>
>     <td> John Doe</td>
>     <td> 200 </td>
></tr>
> <tr>
>    <td> Janice Keen</td>
>    <td> 250 </td>
> </tr>
> </tbody>
> <tfoot>
> <tr>
>    <td> Total</td>
>    <td> 450 </td>
> </tr>
> </tfoot>
> </table>
> ```
#### **The table :**
|  Name       | Salary($) |
|-------------|-----------|
| John Doe    | 200       |
| Janice Keen | 250       |
| Total       | 450       |

### ```<colgroup>``` & ```<col>```
The ```<colgroup>``` tag specifies a **particular column**. While styling a table ```<colgroup>``` allows selection of a group of cells in a column. So repeated formatting of cells can be avoided. The ```<col>``` tag defines the properties of a particular **column** inside a ```<colgroup>```.

> ```html
> <table>
>  <colgroup>
>    <col style="background-color:white">
>    <col style="background-color:pink">
>    <col style="background-color:skyblue">
>  </colgroup>
>  <tr>
>    <th>Name</th>
>    <th>Salary</th>
>    <th>Savings</th>
>  </tr>
>  <tr>
>     <td> John Doe</td>
>     <td> 200 </td>
>     <td> 20 </td>
> </tr>
> <tr>
>    <td> Janice Keen</td>
>    <td> 250 </td>
>    <td> 25 </td>
> </tr>
></table>
> ```  

<a href="https://imgbb.com/"><img src="https://i.ibb.co/k2c00L0/html-Table.png" alt="html-Table" border="0"></a>

## **Where to use HTML table?**
Tables are used for displaying data in **tabular form**. So it is not advisable to use **HTML tables** when creating web page layouts. Tables have a complex structure so nesting the entire content of a page inside a single table can create complex and unorganised codes. Unlike other tags, ```<table>``` tag's size depends on the space taken by it's content so their might be a problem with the responsiveness of the web page.

