# HTML TABLES
Tables are used to show the tabular data. To achieve this many tags are used. All the table- data is enclosed within the ```<table>``` tags.
<br>

A table is divided into rows (with the ```<tr>``` tag), and each row is divided into data cells (with the ```<td>``` tag). **tr** stands for table row, which represents the row of a table and td stands fortable-data, which is the content of a data cell. 
<br>

A data cell can contain text, images, lists, paragraphs, forms, horizontal rules, 
<br>
Eg:
```
<table border=1>
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

The table will be seen something this:
<br>
![4](https://user-images.githubusercontent.com/86145099/133957687-f43246a9-5755-405a-a0ac-6e9b5261a343.PNG)

## Table Header
A table header is defined with the “th” tag. By default, table headings are bold and centered.
```
 <table border=1>
            <tr>
                <th>Column 1</th>
                <th>Column 2</th>
                <th>Column 3</th>
            </tr>
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
  The table will be seen something this:
  <br>
![image](https://user-images.githubusercontent.com/83009295/135508331-87f1a210-566b-4096-8eda-9202a1104ee3.png)

## Adding Cells that Span Many Columns in HTML Tables
To make a cell span more than one column. For this, we must use the colspan attribute.

```
   <table  border=1>
                <tr>
                  <th>Header 1</th>
                  <th>Header 2</th>
                  <th colspan="2" >Header 3</th>
                </tr>
                <tr>
                    <td>Row 1, cell 1</td>
                    <td>Row 1, cell 2</td>
                    <td>Row 1, cell 3</td>
                    <td>Row 1, cell 4</td>
                </tr>
     </table>
 ```

The table will be seen something this:
  <br>
![image](https://user-images.githubusercontent.com/83009295/135508949-358837b1-859b-4cf5-8d87-cb627ef7e8dd.png)

 ## Adding Cells that Span Many Rows in HTML Tables
   To make a cell span more than one rows. For this, we must use the rowspan attribute.
```
<table border=1>
             <tr>
              <th>Header 1</th>
              <td>Data 1</td>
             </tr>
             <tr>
                <th>Header 2</th>
                <td>Data 2</td>
              </tr>
              <tr>
                <th rowspan="2">Header 3</th>
                <td>Data 4</td>
              </tr>
              <tr>
                 <td>Data 5</td>
              </tr>

    </table>
 ```      
 The table will be seen something this:
  <br>
 ![image](https://user-images.githubusercontent.com/83009295/135509061-07f4c0c9-450a-4f90-ad15-6476c4b9c078.png)
