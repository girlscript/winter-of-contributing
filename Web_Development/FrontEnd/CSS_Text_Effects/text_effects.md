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

text-overflow: clip|ellipis|initial|string|inherit;

Here the default value is <b>clip</b>.

<b>clip: </b>Clips the overflowed text.

<b>ellipsis: </b>Displays an ellipsis (…) or three dots to show the clipped text.

<b>initial: </b>Iniializes CSS property to its default value.

<b>string: </b>Displays clipped text to the user using the string of programmer's choice. But this feature is only accessible in Firefox browser.

<b>inherit: </b>It will set the text-overflow value to its parent element's value.

## 2. CSS Word Wrapping

This property breaks the long words and wrap them onto the next line.

When an unbreakable string is too long to fit in the containing box, it is used to prevent overflow .

### Syntax:

word-wrap: normal|break-word|inherit;

<b>normal: </b>It breaks the words only at allowed break points.

<b>break-word: </b>It breaks unbreakable words.

<b>initial: </b>Iniializes CSS property to its default value.

<b>inherit: </b>It will set the word-wrap value to its parent element's value.

## 3. CSS Word Breaking

This property specifies line breaking rules i.e. the way that words would break at the end of the line.

### Syntax:

word-break:normal|keep-all|break-all|inherit;

Default Value is <b>normal</b>.

<b>keep-all: </b>Breaks the word in the default style.

<b>break-all: </b>In order to prevent the word overflow, it inserts the word break between the characters.

## 4. Writing Modes

This property specifies whether the text will be written in the horizontal or vertical direction.

### Syntax:

writing-mode: horizontal-tb|vertical-lr|vertical-rl|inherit;

The default value is <b>horizontal-tb</b>.

<b>horizontal-tb: </b>The text is displayed in horizontal direction and read from left to right and top to bottom.

<b>vertical-rl: </b>The text is displayed in vertical direction and the text is read from right to left and top to bottom.

<b>vertical-lr: </b>The text is displayed in vertical direction and the text is read from left to right and top to bottom.

