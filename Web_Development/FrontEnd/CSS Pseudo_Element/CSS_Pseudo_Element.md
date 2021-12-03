# Pseudo-elements

**Pseudo-Element** is a property which when added to a selector gives you functionality to style a specific part of the selected element(s) differently. For example, ::first-letter element can be used to change the first letter of a paragraph.

```
/* This will change first letter of every <p> element to red color and font-size to extra large. */
p::first-letter {
  color: red;
  font-size: xx-large;
}
```

CSS classes can also be used with pseudo-elements −
```
selector.class:pseudo-element {
  property: value
}
```


**Note:** [pseudo-classes](https://developer.mozilla.org/en-US/docs/Web/CSS/Pseudo-classes) are also used to style elements based on their *state*.

## Syntax

```    
selector::pseudo-element{
  property: value;
}  
```
You can use only one pseudo-element for a selector. It must appear after the simple selectors in the statement.


***Note:*** As a rule, double colons (::) are preffered instead of a single colon (:). This distinguishes pseudo-classes from psedo-elements.However, since this distinction was not present in older versions of the W3C spec, most browsers support both syntaxes for the original pseudo-elements.

## Index
Pseudo-elements defined by a set of CSS specifications include the following:

A 
    
   -    ``` [::after (:after)]```
   
   Use this element to insert some content after an element.

B
    
   -   ```[::backdrop]```
   -   ``` [::before (:before)]```

Use this element to insert some content before an element.
     
C  

   -    ``` [::cue] ``` 
   -    ``` [::cue-region ] ``` 

This can be used to style captions and other cues in media with VTT tracks

F

   -    ``` [::first-letter(:first-letter)] ``` 
   -    ``` [::first-line(:first-line)] ```
   -    ``` [::file-selector-button(:first-letter)] ```

Use this element to add special styles to the first line/letter of the text in a selector.


G

   -  ``` [::grammar-error] ```

Use this to represent a text segment which the user agent has flagged as grammatically incorrect


M

   -    ``` [::marker] ```

Used for styling the stylistic marker of a list element
   
   
P

   -    ``` [::part()] ```
   -    ``` [::placeholder()] ```

Used represents the placeholder text in an <input> or <textarea> element.
    
S

   -    ``` [::selection] ```
   -    ``` [::slotted()] ```
   -    ``` [::spelling-error] ```
  
 Used to represents a text segment which the user agent has flagged as incorrectly spelled
 
T

   -   ```  [::target-text] ```
  
  It allows authors to choose how to highlight that section of text
 
 
## Refrence

- [MDN Documentation](https://developer.mozilla.org/en-US/docs/Web/CSS/Pseudo-elements)
- [W3 School Docs](https://www.w3schools.com/css/css_pseudo_elements.asp)
