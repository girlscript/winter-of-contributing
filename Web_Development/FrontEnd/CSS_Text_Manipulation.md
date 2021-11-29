# Text Manipulation

In Frontend text plays an important role, hence definetly test manipulations plays an important role there. There are various text properties available which can enhance the look out of your content on the webpage.
You can format your text by using below properties:-

## Properties

- Color: This property change the color of your text. It can applicable to the background as well just a small change in syntax need to be done. The color can be enumerated in three ways.
    - HEX value: like "#ff0000"
    - Color name: like "blue"
    - RGB value: like "rgb(255,0,0)"

Syntax:-  
```
color: blue;  
background-color: white;
```

- Alignment: This property is used for horizontal text alignment i.e., left(left to right), right(right to left), centered, or justified(every line strecched for equal width in each line).

Syntax:-  
```
text-align: left;
```
Even for vertical alignment there is a syntax "vertical-align" which can be apply on text.

Syntax:-  
```
vertical-align: super;
```

- Direction: Text direction property can be used to change the direction of an element. In simple word rtl or ltr.

Syntax:-  
```
direction: ltr;
```

- Decoration: Text decoration plays an important role to highlight the important part of any content. Whether you want a underline or overline just type the "text-decoration: " any get in your content.

Syntax:-   
```
text-decoration: none;
```

***NOTE: Avoid using underline text which is not a link, because that can create confussion to reader.***

- Transformation: It is used to specify the case(uppercase and lowercase) letters of text, capitalization of letters.

Syntax:-  
```
text-transform: uppercase;
```

- Indentation: This property "text-indent: " is used to indentation of the first line of a text.

- Spacing: Spacing plays an important role in terms of highlighting the attention of any reader. By using space at right time you can also do that.
    - Letter-spacing: It specifies the space between the characters of a text. 
    - Word-spacing: It specifies the space between the words in a text.
    - White-space: This specifies how the white-space inside an element should be handled.
    - Letter-height: It is used to specify the space between the lines.

- Shadow: The "text-shadow: " is used to adds shadow to content.

Syntax:-   
```
text-shadow: 2px 3px 4px blue;   
```

  *Here 2px is horizontal shadow, 3px is vertical shadow, 4px is for blurr effect and blue is gonna be the color of that shadow.*

### Example comprises all the properties
```
    <!DOCTYPE html>
    <html>
        <head>
            <title> GWOC Contribution </title>
            <meta name="viewport" content="width=device-width, initial-scale=1.0">
            <style>
                body{
                color: blue;
                background-color: white;  
                text-align: left; 
                vertical-align: super;
                direction: ltr;
                text-decoration: underline;
                text-transform: uppercase;
                text-indent: 80px;
                letter-spacing:4px;
                word-spacing:15px;
                white-space: nowrap;
                line-height:40px;
                text-shadow: 2px 3px 4px blue;
                }   
            </style>
        </head>
        <body>
            <h1>FrontEnd</h1>
            <p>This part of CSS elaborate the Text_Manipulation.<br>These few properties make large differences while representing the same data.<br> Hope this will be helpful for your upcoming project.</p>
        </body>
    </html>
```

Reference: [W3Schools](https://www.w3schools.com/css/css_text.asp)
