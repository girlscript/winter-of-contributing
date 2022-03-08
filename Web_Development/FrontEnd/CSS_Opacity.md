# CSS OPACITY

- The **opacity** property sets the opacity or transparency level for an element.
- Opacity means the clarity of the element which is uniform across the entire element or image.
- The default value of opacity is 1(no transparent at all). 
- Note that lesser the opacity value emplies greater the opacity display.

## Opacity Setting

- Opacity setting is applied uniformly across the entire object it means that the transparency will be set to all the child elements.
- To avoid this we can use **RBGA** color value instead.

## CSS Opacity Syntax
```
opacity: 1 ;
```
- Define the Opacity value from **0.0** (fully transparent) to **1.0** (fully opaque).

## Examples
1. ### Lets set different opacity for an image and see the differences.
```
div{
  opacity : 1;
}
div{
  opacity : 0.5;
}
div{
  opacity : 0.1;
}
```


 ### 2. Transparency using **RGB**
 ```
        p{
           background: rgb(139, 0, 0);
           opacity:1;
         }
         p{
           background: rgb(139, 0, 0);
           opacity:0.5;
         }
         p{
           background: rgb(139, 0, 0);
           opacity:0.1;
         }
 ```




 *it will not only change the opacity of the background but also changes the opacity of all the child elements as well and this can make the text inside a fully transparent element hard to read.*

### 3. Transparency using **RGBA**
- Using **RGBA**(red, green, blue, alpha) color we can set the color of the background as well as its transparency.
- The following example sets the opacity for the background color but not the text inside it.
```
        p{
           background: rgba(139, 0, 0, 1);
         }
         p{
           background: rgba(139, 0, 0, 0.5);
         }
         p{
           background: rgba(139, 0, 0, 0.1);
         }
 ```



