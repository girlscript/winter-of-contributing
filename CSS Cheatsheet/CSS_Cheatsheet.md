# CSS Cheatsheet

## What is CSS ?

- CSS stands for Cascading Style Sheet.
- CSS describes how HTML elements should be displayed.

## Why use CSS?

CSS is used to define styles for your web pages, including the design, layout and variations in display for different devices and screen sizes.

> Basically. It's like our body with muscles. Without muscles our body is equivalent to without CSS our web pages.

### Basic

**Syntax**

```ruby
selector{
    property: value;
    property2: value2;
}
```

CSS File can be attach in HTML in three different ways

- External Style Sheet
- Internal Style Sheet
- Inline Style Sheet

**Include External Stylesheet in the HTML file**

```ruby
<link rel="stylesheet" type="text/css" href="/style.css" />
```

Just add this link in the HTML in the head section.

**Include Internal Stylesheet in the file**

The internal style is defined inside the **style** element inside the head section.

> Example

```ruby
<!DOCTYPE html>
<html>
<head>
    <style>
        body {
            background-color: linen;
        }

        h1 {
            color: maroon;
            margin-left: 40px;
        }
    </style>

</head>
<body>

    <h1>This is a heading</h1>
    <p>This is a paragraph.</p>

</body>
</html>
```

**Inline Style**

Inline styles are defined within the "style" attribute of the relevant element

>Example 

```ruby
<!DOCTYPE html>
    <html>
        <body>

            <h1 style="color:blue;text-align:center;">This is a heading</h1>
            <p style="color:red;">This is a paragraph.</p>

        </body>
    </html>
```

### Selectors

**Selectors**

| Selectors      | Representation              |
| -------------- | --------------------------- |
| *              | all elements                |
| div            | all div tags                |
| div,p          | all div and paragraphs      |
| div p          | paragraphs inside div       |
| div > p        | all p tags, one level deep in div |
| div + p        | p tags immediately after div|
| div ~ p        | p tags preceded by div      |
| .class_name    | all elements with class     |
| #id_name       | element with ID             |
| div.class_name | div with certain class_name |
| div#id_name    | div with certain ID         |
| #id_name *     | all elements inside #id_name|

**Pseudo Class**

| Pseudo Class   | Meaning                     |
| -------------- | --------------------------- |
| a:link         | link in normal state        |
| a:active       | link in clicked state       |
| a:hover        | link with mouse over it     |
| a:visited      |visited link                 |
| p::after{content:"yo";} | add content after p|
| p::before      | add content before p        |
| input:checked  | checked inputs              |
| input:disabled | disabled inputs             |
| input:enabled  | enabled inputs              |
| input:focus    | input has focus             |
| input:in-range | value in range              |
| input:out-of-range | input value out of range|
| input:valid    | input with valid value      |
| input:invalid  | input with invalid value    |
| input:optional | no required attribute       |
| input:required | input with required attrib. |
| input:read-only | with readonly attribute    |
| input:read-write | no readonly attrib.       |
| div:empty      | element with no children    |
| p::first-letter| first letter in p           |
| p::first-line  | first line in p             |
| p:first-of-type| first of some type          |
| p:last-of-type | last of some type           |
| p:lang(en)     | p with en language attribute|
| :not(span)     | element that's not a span   |
| p:first-child  | first child of its parent   |
| p:last-child   | last child of its parent    |
| p:nth-child(2) | second child of its parent  |
| p:nth-child(3n+1) | nth-child (an + b) formula |
| p:nth-last-child(2) | second child from behind |
| p:nth-of-type(2) | second p of its parent    |
| p:nth-last-of-type(2) | ...from behind       |
| p:only-of-type | unique of its parent        |
| p:only-child   | only child of its parent    |
| :root          | documents root element      |
| ::selection    | portion selected by user    |
| :target        | highlight active anchor     |

**Attribute Selector**

| Pseudo Class       | Meaning                 |
| --------------     | ----------------------- |
| a[target]          | links with a target attribute |
| a[target="_blank"] | links which open in new tab |
| [title~="chair"]   | title element containing a word |
| [class^="chair"]   | class starts with chair |
| [class\|="chair"]   | class starts with the chair word |
| [class*="chair"]   | class contains chair    |
| [class$="chair"]   | class ends with chair   |
| input[type="button"] | specified input type  |

### Properties

| Properties          | Meaning                                               |
| ------------------- | ----------------------------------------------------- |
| align-content       | behavior of the flex-wrap property                    |
| align-items         | alignment for items inside the container              |
| align-self          | alignment for the selected item                       |
| all                 | changes all properties                                |
| animation           | binds an animation to an element                      |
| animation-delay     | delays animation start                                |
| animation-direction | reverse animation or in alternate cycles              |
| animation-duration  | animation duration in seconds or ms                   |
| animation-fill-mode | style when the animation is not playing               |
| animation-iteration-count | number of an animation replays                  |
| animation-name      | name for the @keyframe animation                      |
| animation-play-state | the animation is running or paused                   |
| animation-timing-function | speed curve of an animation                     |
| back_face-visibility | is element visible when not facing the screen        |
| background          | all background properties in one declaration          |
| background-attachment | is the background image fixed or scrolls            |
| background-blend-mode | blending mode of each background layer              |
| background-clip     | painting area of the background                       |
| background-color    | background color                                      |
| background-image    | background image                                      |
| background-origin   | where the background image is positioned              |
| background-position | starting position of the background image             |
| background-repeat   | the way the background image is repeated              |
| background-size     | background image size                                 |
| border              | sets all border properties in one line                |
| border-bottom       | bottom border properties in one line                  |
| border-bottom-color | color of the bottom border                            |
| border-bottom-left-radius | border bottom left radius                       |
| border-bottom-right-radius | border bottom right radius                     |
| border-bottom-style | border bottom style                                   |
| border-bottom-width | border bottom width                                   |
| border-collapse     | border collapse                                       |
| border-color        | border color                                          |
| border-image        | sets an image as border                               |
| border-image-outset | border image area extends beyond the border box       |
| border-image-repeat | border image repeated, rounded or stretched           |
| border-image-slice  | how to slice the border image                         |
| border-image-source | path to the border image                              |
| border-image-width  | border image width                                    |
| border-left         | left border properties in one line                    |
| border-left-color   | border left color                                     |
| border-left-style   | border left style                                     |
| border-left-width   | border left width                                     |
| border-radius       | border radius of the four rounded corners             |
| border-right        | right border properties in one line                   |
| border-right-color  | border right color                                    |
| border-right-style  | border right style                                    |
| border-right-width  | border right width                                    |
| border-spacing      | border spacing                                        |
| border-style        | border style                                          |
| border-top          | top border properties in one line                     |
| border-top-color    | border top color                                      |
| border-top-left-radius | border top left radius                             |
| border-top-right-radius | border top right radius                           |
| border-top-style    | border top style                                      |
| border-top-width    | border top width                                      |
| border-width        | border width                                          |
| bottom              | bottom offset for relative and absolute elements      |
| box-shadow          | shadow to element                                     |
| box-sizing          | box sizing properties                                 |                      
| caption-side        | placement of a table caption                          |
| clear               | deny floating of an element                           |
| clip                | clip an absolutely positioned element                 |
| color               | text color                                            |
| column-count        | divide the content in columns                         |
| column-fill         | balanced fill or not                                  |
| column-gap          | gap between the columns                               |
| column-rule         | separator between columns, like border                |
| column-rule-color   | column rule color                                     |
| column-rule-style   | column rule style                                     |
| column-rule-width   | column rule width                                     |
| column-span         | column span                                           |
| column-width        | column width                                          |
| columns             | set column-width and column-count                     |
| content             | insert content :before and :after elements            |
| counter-increment   | count sections                                        |
| counter-reset       | reset counter                                         |
| cursor              | cursor type when element is hovered                   |
| direction           | writing direction, Arabic is using rtl                |
| display             | box display type                                      |
| empty-cells         | hide borders and background on empty table cells      |
| filter              | image effects: grayscale, blur, invert etc.           |
| flex                | item length, relative to others inside the container  |
| flex-basis          | initial length of a flexible item                     |
| flex-direction      | direction of the flexible items                       |
| flex-flow           | shorthand for flex-direction and flex-wrap            |
| flex-grow           | how much the item will grow relative other items      |
| flex-shrink         | how to shrink the item relative to other items        |
| flex-wrap           | wrap flexible items                                   |
| float               | float elements left or right                          |
| font                | all font properties in one line                       |
| @font-face          | declare non-web-safe fonts                            |
| font-family         | font of the element                                   |
| font-size           | font size                                             |
| font-size-adjust    | control font size if the first declared option is not available |
| font-stretch        | widen or narrow text                                  |
| font-style          | font style: normal, italic, oblique                   |
| font-variant        | set small-caps                                        |
| font-weight         | use bold or thin characters                           |
| hanging-punctuation | can a punctuation mark be placed outside the line box?|
| height              | height of the element                                 |
| justify-content     | justifies flexible container's items horizontally if necessary |
| @keyframe           | specifies the animation code                          |
| left                | left offset for relative and absolute elements        |
| letter-spacing      | space between characters                              |
| line-height         | line height of text or inline-block elements          |
| list-style          | all list properties in one line                       |
| list-style-image    | replace the list item marker with an image            |
| list-style-position | list item markers inside or outside the content flow  |
| list-style-type     | set the type of the list item marker                  |
| margin              | set the top, right, bottom and left margins in one line |
| margin-bottom       | bottom margin                                         |
| margin-left         | left margin                                           |
| margin-right        | right margin                                          |
| margin-top          | margin top                                            |
| max-height          | maximum height of element                             |
| max-width           | maximum width of element                              |
| @media              | see media queries                                     |
| min-height          | minimum height                                        |
| min-width           | minimum width                                         |
| nav-down            | where to navigate when the the arrow-down button is pressed    |
| nav-index           | sets sequential navigation order                      |
| nav-left            | where to navigate when the the arrow-left button is pressed    |
| nav-right           | where to navigate when the the arrow-right button is pressed   |
| nav-up              | where to navigate when the the arrow-up button is pressed      |
| opacity             | transparency level of an element                      |
| order               | reorder elements in a container                       |
| outline             | draw an outer border around elements                  |
| outline-color       | outline color                                         |
| outline-offset      | gap between the element and the outline               |
| outline-style       | outline style                                         |
| outline-width       | outline width                                         |
| overflow            | hide, display or scroll if the content overflows its container |
| overflow-x          | horizontal overflow                                   |
| overflow-y          | vertical overflow                                     |
| padding             | padding between the element border and content        |
| padding-bottom      | padding bottom                                        |
| padding-left        | padding left                                          |
| padding-right       | padding right                                         |
| padding-top         | padding top                                           |
| page-break-after    | adds page break after an element                      |
| page-break-before   | adds page break before an element                     |
| page-break-inside   | allow page break inside an element                    |
| perspective         | how many pixels the 3D element is placed from the view|
| perspective-origin  | where is the 3D element based in the x- and y-axis    |
| position            | positioning type: absolute, fixed, relative, static   |
| quotes              | set quotation marks to wrap an element                |
| resize              | declare resizable elements                            |
| right               | right offset for relative and absolute elements       |
| tab-size            | tab character space length                            |
| table-layout        | table layout algorithm                                |
| text-align          | horizontal alignment of text                          |
| text-align-last     | horizontal alignment of last line of text             |
| text-decoration     | overline, underline or line-through the text          |
| text-indent         | indentation of the first line of the text             |
| text-overflow       | the way how overflowed content is marked (ellipsis)   |
| text-shadow         | text shadow                                           |
| text-transform      | capitalization of text                                |
| top                 | top offset for relative and absolute elements         |
| transform           | 2D 3D transformation. See widget.                     |
| transform-origin    | changes the position of transformed elements          |
| transform-style     | render nested elements in 3D                          |
| transition          | transition properties in one line                     |
| transition-delay    | delay before transition effect start                  |
| transition-duration | transition effect duration                            |
| transition-property | which CSS property is the transition affecting        |
| transition-timing-function | speed curve of the transition                  |
| unicode-bidi        | should the text be overridden to support more languages  |
| user-select         | disable user content selection                        |
| vertical-align      | vertical alignment                                    |
| visibility          | visibility:hidden elements leave a gap                |
| white-space         | how are white-spaces handled                          |
| width               | width of an element                                   |
| word-break          | text breaking rules when text reaches the end of the container |
| word-spacing        | size of white space between words                     |
| word-wrap           | break long words and wrap onto the next line          |
| z-index             | stack order of the element                            |

### Media Queries

Media queries can be used to check many things, such as

- width and height of the viewport
- width and height of the device
- orientation (is the tablet/phone in landscape or portrait mode)
- resolution

Media queries are a technique for delivering a tailored style sheet (responsive web design) to desktops, laptops, tablets, and mobile phones.

**Syntax**

```ruby
@media not|only mediatype and (media feature) {
    CSS Code 
}

Link external file

<link rel="stylesheet" media=mediatype and|not|only (media feature href="mystylesheet.css")>
```

#### Media Features

| Media Features | Meaning                     |
| -------------- | --------------------------- |
| width       | viewport width                 |
| height      | viewport height                |
| orientation | orientation of the viewport    |
| aspect-ratio | ratio between width & height  |
| color       | number of bits per color       |
| color-index | number of displayable colors   |
| monochrome  | color on greyscale device      |
| resolution  | resolution of the device       |
| scan        | scanning process of the device |
| grid        | device is a grid or bitmap     |
