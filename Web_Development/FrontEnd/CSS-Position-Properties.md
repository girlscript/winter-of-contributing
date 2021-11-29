# CSS Position Properties

CSS Position property describe the type of positioning method used for an element or document. The top,bottom,right and left properties decide the final location of positioned element. There are five types of positions which are as follows:

## 1. Static Position:

- It is by default position property of a HTML element.
- It doesnot get affected by the top, bottom, right and left properties.
- With static position the element is positioned according to normal flow of document.

**Example**

```css
.static {
  position: static;
  border: 2px solid black;
}
```

## 2.  Relative Position:
 
- In this relative position, an element is positioned relative to its normal position.
- By setting top, bottom, right and left properties we can change the position of an element to its relative position.
- It will nt hinder the other elements properties.
 
**Example**

```css
.relative {
  position: relative;
  left: 20px;
  top: 10px;
  border: 2px solid red;
}
```
  
## 3. Absolute Position:
  
- In absolute position, an element is positioned relative to the nearest positioned ancestor.
- If it doesnot have any ancestor then it is placed relative to the initial containing block.
- By setting top, bottom, left and right propertieswe determine the final position.
- An absolute positioned element move from its initial position can overlap other elements.
  
**Example**

```css
.absolute {
  position: absolute;
  right: 20px;
  bottom: 10px;
  border: 2px solid blue;
}
```
   
## 4. Fixed Position:
 
- In fixed position, an element is positioned relative to the viewport. It means if we scroll the page an element stay at the same place.
- By setting top, bottom, right and left we positioned the element.
- A fixed element does not leave any gap in the page where it have been located.
   
**Example**

```css
.fixed {
  position: fixed;
  bottom: 2px;
  left: 4px;
  width: 200px;
  border: 2px solid yellow;
}
```
    
## 5. Sticky Position:
   
- In the sticky position, the element is positioned relative to its nearest scrolling ancestors based on the values of top, bottom, left and right.
- It doesnot hinder or disturb any other element.
   
**Example**
 
 ```css
.sticky {
   position: sticky;
   left: 2px;
   top: 0px;
   border: 2px solid green;
}
```
