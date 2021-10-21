
# Css Pixel vs Rem vs Em

The most frequent numeric value that we come across, while working with CSS, is length. 
For example while setting the padding / margin / border values we often come across is pixels 
for eg ```padding: 20px```, ```margin: 32px``` and ```border: 1px solid #ccc```

## Types of length units :- 📝

The length units used in CSS can be generally divided into two categories 
- Relative length units
- Absolute length units

    ### Relative length units :
    These length units depend upon other factors like the default font size, size of the viewport, parent elements's font size etc.
    The advantage of Relative length units is that they are flexible.
    For eg if the default font size of your browser changes or if the window is zoomed in/ out, these values will automatically adapt to this behaviour. Cool, isn't it 😎?

    Examples for Relative lengths:

    ![relative lengths](https://user-images.githubusercontent.com/54982868/138211412-4b27e636-dd4d-4e4d-9f87-687c3577ae97.jpg)

     Image reference: [developer.mozilla.org](https://developer.mozilla.org/en-US/docs/Learn/CSS/Building_blocks/Values_and_units)


    ### Absolute length units :
    These length units are fixed, doesn't depend on any other factors and the changes like changing the default font size of browser, 
    zooming in/out the window etc doesn't affect the behaviour and always remains of the same size.
    These values can be used in cases where you want to the behaviour to be fixed in all scenarios.

    Examples for Absolute lengths:

    ![absolute lenghts](https://user-images.githubusercontent.com/54982868/138211454-ab83d86e-b1b2-4708-97c6-15a4a65798b6.jpg)


    Image reference: [developer.mozilla.org](https://developer.mozilla.org/en-US/docs/Learn/CSS/Building_blocks/Values_and_units)

## px vs rem vs em 
Now that we have a basic idea about Relative and Absolute lengths, let's see what is the difference between pixel , em and rem.

With the help of the above tables, we get to know that pixel comes under the category of Absolute lengths and similarly rem and em comes under Relative lengths.

Now let's see what is rem and em actually

- __em :__
    The em unit allows setting the font size of an element relative to the font size of its parent. When the size of the parent element changes, the size of the child changes automatically.

- __rem :__
    The rem is based upon the font-size value of the root element, which is the <html> element. And if the <html> element doesn’t have a specified font-size, the browser default value of 16px is used. So here only the value of the root is considered, and there is no relation with a parent element.
    
    how to see browser defaults (Google Chrome)


    ![appearance settings](https://user-images.githubusercontent.com/54982868/138211522-41811364-4809-4f37-be1a-017355349fae.jpg)

    visit chrome settings [image reference](chrome://settings/appearance)


To understand it better, let's see these values in action on three different paragraph tags

__HTML :__ 

```html
    <p class="p1">
        This is pixel in action
    </p>

    <div class='parent'>
        <p class="p2">
            This is rem in action
        </p>
    </div>

    <div class='parent'>
        <p class="p3">
            This is em in action
        </p>
    </div>
```

__CSS :__ 

```
    .parent {
        font-size: 24px;
    }

    .p1 {
        font-size: 16px;
    }

    .p2 {
        font-size: 2rem;
    }

    .p3 {
        font-size: 2em;
    }

```


So what we did here is that we assigned three different values to three paragraph p1,p2,p3 which are 16px, 2rem and 2em
and the paragraph with class p2 and p3 are wrapped by div with class parent with a font size of 24px assigned to the div.

So lets guess the output based upon the above code 👨‍🔧.

![result](https://user-images.githubusercontent.com/54982868/138211486-cbd2422b-76cf-499d-b65f-73dc16e50246.jpg)


The above result seems kinda odd right... because both paragraphs (p2, p3) were having same parent div
and the value of font size assigned was also same ie 2. 

So why they are acting differently? Let me tell you that the main difference lies between rem and em

If you'll see the defination carefully , you'll notice 

for __em__ we have  __*font size of an element relative to the font size of its parent*__

for __rem__ its __*font size is based upon the font-size value of the root element, which is the <html> element*__

### Why rem and em are not same 🤔?  

so the reason that font size of p3 (assigned 2em) is bigger than p2 (assigned 2rem)
because for p3 the font size is calculated as 2 times the font size for parent div 48px  (2 * 24 px).

and for p2 its calculated as 2 times the default font size for browser(16px since the browser defaults are not changed) => 32px (2 *16x)

## Lessons Learned

- There are two types length units : Relative length units and Absolute length units
- Pixel comes under Absolute length units (fixed value)
- Rem and em comes under Relative length units (depend upon other factors)
- rem  is based upon the font-size value of the root element, which is the <html> element
- em depends upon the properties of parent element

Happy Learning 👨‍💻
 

## References

 - [CSS values and units](https://developer.mozilla.org/en-US/docs/Learn/CSS/Building_blocks/Values_and_units)
 - [Confused About REM and EM?](https://css-tricks.com/confused-rem-em/)
