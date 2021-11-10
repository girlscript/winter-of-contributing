# CSS Text Effects

There are four components in it: 
1. CSS Text Overflow
2. Word Wrap
3. Line Breaking Rules
4. Writing Modes

Lets dive into each one!

## 1. CSS Text Overflow

It is used to signal the overflowed content to the user which is hidden from the view.

It doesn't work on its own.<b>white-space: nowrap;</b> and <b>overflow: hidden;</b> has to be used with this property.

### Syntax:

```
text-overflow: clip|ellipis|initial|string|inherit;
```

```
Here the default value is clip.

1. clip: Clips the overflowed text.

2. ellipsis: Displays an ellipsis (…) or three dots to show the clipped text.

3. initial: Iniializes CSS property to its default value.

4. string: Displays clipped text to the user using the string of programmer's choice. But this feature is only accessible in Firefox browser.

5. inherit: It will set the text-overflow value to its parent element's value.
```

Here, is the code for better understanding:

```HTML
<!DOCTYPE html>   
<html>   
  <head>   
      <style>    
        .gwoc{   
            white-space: nowrap;    
            height: 30px;  
            width: 200px;                 
            overflow: hidden;    
            border: 2px solid black;   
            font-size: 25px;   
            text-overflow: clip;   
          }   
        .gwoc1 {   
            white-space: nowrap;    
            height: 30px;  
            width: 200px;    
            overflow: hidden;    
            border: 2px solid black;   
            font-size: 25px;   
            text-overflow: ellipsis;   
          }   
                
        h2{  
        color: blue;  
        }  
        div:hover {   
          overflow: visible;   
        }   
        p{  
          font-size: 25px;  
          font-weight: bold;  
          color: red;  
        }  
        </style>   
    </head> 
    <body>    
      <center>         
      <p> Hover over the bordered text to see the full content. </p>  
  
        <h2>   
            text-overflow: clip;   
        </h2>   
            
        <div class="gwoc">   
            Example of Text Overflow  
        </div>   
        <h2>   
            text-overflow: ellipsis;   
        </h2>   
  
        <div class="gwoc">   
            Example of Text Overflow   
        </div>  
      </center>   
    </body>    
</html> 
```

### Output:

<img src='https://user-images.githubusercontent.com/65852362/141079270-8d9838f4-9337-4caf-adc5-3ef3d2a34322.png'>


## 2. CSS Word Wrapping

This property breaks the long words and wrap them onto the next line.

When an unbreakable string is too long to fit in the containing box, it is used to prevent overflow .

### Syntax:

```
word-wrap: normal|break-word|inherit;
```

```
1. normal: It breaks the words only at allowed break points.

2. break-word: It breaks unbreakable words.

3. initial: Iniializes CSS property to its default value.

4. inherit: It will set the word-wrap value to its parent element's value.
```

Here is the code for better understanding:

```HTML
<!DOCTYPE html>

<html>    
    <head>    
    <style>     
        .gwoc {    
            width: 200px;    
            background-color: yellow;     
            border: 1px solid black;
            font-size: 20px;  
            
        }  
        .gwoc1 {    
            width: 200px;    
            background-color: yellow;     
            border: 1px solid black;    
            word-wrap: break-word;    
            font-size: 20px;  
        }      
    </style>    
    </head>    
    <body>  
        <center>    
            <h1> Without Using word-wrap </h1>  
            <p class="gwoc"> Here is a very lllllllllllllllllllloooooooooooooonnnnnnnnnnnnnnnngggggggggggg sentence. </p>    
            <h1> Using word-wrap: break-word; </h1>  
            <p class="gwoc1"> Here is a very lllllllllllllllllllloooooooooooooonnnnnnnnnnnnnnnngggggggggggg sentence. </p>     
        </center>     
    </body> 
</html>
```

### Output:

<img src='https://user-images.githubusercontent.com/65852362/141079169-c3b75ff7-9aad-4dff-a293-316ccf0c7c8d.png'>


## 3. CSS Word Breaking

This property specifies line breaking rules i.e. the way that words would break at the end of the line.

### Syntax:

```
word-break:normal|keep-all|break-all|inherit;
```

```
Default Value is normal.

1. keep-all: Breaks the word in the default style.

2. break-all: In order to prevent the word overflow, it inserts the word break between the characters.
```

Here is the code for better understanding:

```HTML
<!DOCTYPE html>   
<html>   
    <head>   
        <title>word-break: break-all</title>   
        <style>    
            .gwoc{   
                width: 100px;    
                border: 1px solid black;   
                word-break: break-all;    
                text-align: left;   
                font-size: 20px;   
                color: red;  
            }   
            .gwoc1{   
                width: 100px;    
                border: 1px solid black;   
                word-break: keep-all;    
                text-align: left;

                font-size: 20px;  
    color: green;  
            }   
        </style>   
    </head>   
      <center>  
        <body>   
            <h2>word-break: break-all;</h2>   
                
            <p class="gwoc">   
              Hello, world!! This is an example of word-break. 
            </p>   
            <h2>word-break: keep-all;</h2>   
            <p class="gwoc1">   
              Hello, world!! This is an example of word-break.  
            </p>      
        </body> 
      </center>
</html> 
```

### Output:
<img src='https://user-images.githubusercontent.com/65852362/141078968-9f24d3ed-186e-4d4a-aaf3-758b75757b78.png'>

## 4. Writing Modes

This property specifies whether the text will be written in the horizontal or vertical direction.

### Syntax:

```
writing-mode: horizontal-tb|vertical-lr|vertical-rl|inherit;
```

```
The default value is horizontal-tb.

1. horizontal-tb: The text is displayed in horizontal direction and read from left to right and top to bottom.

2. vertical-rl: The text is displayed in vertical direction and the text is read from right to left and top to bottom.

3. vertical-lr: The text is displayed in vertical direction and the text is read from left to right and top to bottom.
```

Here is the code for better understanding:

```HTML
<!DOCTYPE html>  
<html>  
 <head>  
  <style>  
    h2 {     
      border: 1px solid black;  
      width: 300px;  
      height: 80px;  
    }  
    #tb {  
      writing-mode: horizontal-tb;  
    }  
      
    #lr {  
      writing-mode: vertical-lr;  
    }  
      
    #rl {  
       writing-mode: vertical-rl;  
    }  
  </style>  
 </head>  
 <center>  
  <body>  
    <h1> Example of CSS writing-mode property </h1>  
    <h2 id="tb"> writing-mode: horizontal-tb; </h2>  
    <h2 id="lr" style= "height: 300px;"> writing-mode: vertical-lr; </h2><br>  
    <h2 id="rl" style= "height: 300px;"> writing-mode: vertical-rl; </h2>  
  </body>
  </center>    
</html>
```
### Output:

<img src='https://user-images.githubusercontent.com/65852362/141079060-63ed08b2-7981-4c90-a83e-dfc572df1cc0.png'>

For more details, refer

https://www.javatpoint.com/css-text-effects

https://www.w3schools.com/css/css3_text_effects.asp
