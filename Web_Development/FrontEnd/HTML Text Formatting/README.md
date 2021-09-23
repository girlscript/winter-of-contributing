# **HTML Formatting**

HTML formatting is the process of transforming text into a more appealing and descriptive manner. HTML allows us the functionality to format text without the use CSS. There are lots of formatting tags available in HTML.
These formatting tags in HTML can be categorized into two parts:
<br>

- **Physical tag:** These tags are used to provide the visual appearance to the text.

- **Logical tag:** These tags are used to add some logical or semantic value to the text.

<br>

## 🛠 Syntax

```bash
<tag_name> formatting character or paragrah </tag_name>
```

Note: All HTML tags doesn't require closing tags, but most of the text formatting tags have closing tags.
<br><br>

## **⚡ Physical Tags**

Physical Tags are used to specify how specific characters in HTML tags should be rendered or represented. Any text object, including ordinary text, graphics, line breaks, and so on, may be included in a physical style tag. Although each physical tag has its own style, you can override it by giving each tag its own look. Ending tags are required for all physical tags.

Physical Tags Have the Following Characteristics:

- They're quite easy to understand.
- They are useful in highlighting important key phrases.
- Physical Text Styles specify the sort of appearance for a segment, such as bold, italics, and so on.
- All browsers render Physical Styles in the same manner.

There are many kinds of physical tags here is the list of some of them :

> Note: **Lots of tags can't be rendered via README files**: [Click here to visualize them!](Web_Development/FrontEnd/HTML Text Formatting/Images/TEXT_Formatting.png)

| Tags       | Meaning          | Purpose                                                                                 | Visualization                                               |
| :--------- | :--------------- | :-------------------------------------------------------------------------------------- | :---------------------------------------------------------- |
| `<b>`      | `Bold`           | It is used to bold the text written between it.                                         | This is <b>bold</b> text                                    |
| `<i>`      | `Italic`         | It is used to italicize the text written between it.                                    | This is <i>italized</i> text                                |
| `<font>`   | `Font`           | It is used to define the font attributes for the text contained within it.              | This is <font color="crimson">attribute altered</font> text |
| `<mark>`   | `Highlight`      | It is used to mark or highlight text that is of special interest or relevance.          | This is <mark>highlighted</mark> text                       |
| `<u>`      | `Underline`      | This tag is used to underline text written between it.                                  | This is <u>underlined</u> text                              |
| `<tt>`     | `Teletype text`  | This tag is used to appear a text in teletype i.e monospace. (not supported in HTML5)   | This is <tt>teletype</tt> text                              |
| `<strike>` | `Strike-through` | This tag is used to draw a strikethrough on a section of text. (Not supported in HTML5) | This is <strike>strike-through</strike> text                |
| `<sup>`    | ` Superscript`   | Superscript is usually used for showing elements above base-line                        | This is <sup>superscript</sup> text                         |
| `<sub>`    | `Subscript`      | The subscript is used for alternate baseline.                                           | This is <sub>subscript</sub> text                           |
| `<big>`    | `Big`            | Big tag increase the font size by 1 (Note: You can not use the big tag in HTML 5)       | This is <big>big</big> text                                 |
| `<small>`  | `Small`          | A small tag defines the small text, and it is used while writing copyright.             | This is <small>small</small> text                           |

## **⚡ Logical Tags**

Logical tags are used to inform the browser about the type of text included within the tags. They differ from physical tags such that physical tags determine how the text appears but do not give any information about the text.

Some cases when we could use logical tags are:

- When we want to specify code on our website.
- When we want to draw attention to a particular passage of text.
- When the abbreviation is to be displayed on a Web page.
- When we wish to include a well-known quotation on our website.
- When we need to write a variable-based mathematical formula.

There are many kinds of logical tags here is the list of some of them :

> Note: **Lots of tags can't be rendered via README files**: [Click here to visualize them!](Web_Development/FrontEnd/HTML Text Formatting/Images/TEXT_Formatting.png)

| Tags           | Meaning                  | Purpose                                                                                                                                                                                                       | Visualization                                                                                                                                    |
| :------------- | :----------------------- | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ | :----------------------------------------------------------------------------------------------------------------------------------------------- |
| `<strong>`     | `String`                 | It is used to bold the text written between it.                                                                                                                                                               | Do <strong>NOT</strong>, be late again!                                                                                                          |
| `<em>`         | `Emphasize`              | It is for emphasizing phrases, and is typically displayed in italics.                                                                                                                                         | It is my <EM>favorite</EM> Shakespeare play.                                                                                                     |
| `<del>`        | `Deleted text`           | It is similar to strike tag in appearance but it defines that an element has been deleted from the document.                                                                                                  | My favorite color is <del>blue</del>                                                                                                             |
| `<ins>`        | `Inserted text`          | It defines a text that has been inserted into a document.                                                                                                                                                     | <ins>inserted</ins> text                                                                                                                         |
| `<address>`    | `Address`                | Its a special tag to represent contact information (physical and/or digital) for a person, people or organization.                                                                                            | <address> 123 Somewhere St. X City, State</address>                                                                                              |
| `<abbr>`       | `Abbreviation`           | This tag can be used to denote an abbreviation.                                                                                                                                                               | The <abbr title="World Health Organization">WHO</abbr> was founded in 1948.                                                                      |
| `<cite>`       | `Citation`               | It is used to describe a reference to a creative work. It must include the title of that work or the name of the author (people or organization) or an URL reference.                                         | <cite>The Scream</cite> by Edward Munch. Painted in 1893.                                                                                        |
| `<q>`          | `Inline Quotation`       | It creates short inline quotations. Most browsers display inline quotes by surrounding the text in quotation marks.                                                                                           | <q>GirlScript Winter of Contributing</q>                                                                                                         |
| `<code>`       | `Computer Output.`       | Text is displayed in a fixed-width font, commonly used when showing source code.                                                                                                                              | <code>y = m \* x + b</code>                                                                                                                      |
| `<pre>`        | `Pre-formatted text`     | Text in this element is displayed in a fixed-width font, and the text preserves both spaces and line breaks.                                                                                                  | <pre>Text Over here if fixed in length</pre>                                                                                                     |
| `<var>`        | `Variables`              | For specifically marking up variable names.                                                                                                                                                                   | volume of a box is <var>l</var> × <var>w</var> × <var>h</var>                                                                                    |
| `<kbd>`        | `Keyboard Input element` | For marking up keyboard (and other types of) input entered into the computer.                                                                                                                                 | Please press <kbd>Ctrl</kbd>                                                                                                                     |
| `<samp>`       | `Sample Output`          | For marking up the output of a computer program.                                                                                                                                                              | <samp>File not found.<br>Press F1 to continue</samp>                                                                                             |
| `<acronym>`    | `Acronym`                | This is used to defines an acronym.                                                                                                                                                                           | <acronym title="GirlScript Winter of Contributing"> GWOC </acronym>                                                                              |
| `<blockquote>` | `Inserted text`          | It can be used format the quotation blocks from other sources with the HTML. Blockquotes are generally displayed with indented left and right margins, along with a little extra space added above and below. | <blockquote cite="https://gwoc.girlscript.tech/">Open source is all about giving back to the community and GWOC is the heart of it!</blockquote> |
| `<dfn>`        | `Definition element`     | It specifies a term that is going to be defined within the content.                                                                                                                                           | <dfn title="HyperText Markup Language">HTML</dfn> is the standard markup language for creating web pages.                                        |

## _Heading Tag:-_

HTML headings are considered as logical tags which are defined with the h1 to h6 tags.
h1 defines the most important heading h6 defines the least important heading.
| **Header Tags** | **Visualizations** |
| :---: | :-: |
| `<h1>` | <h1>Heading 1</h1> |
| `<h2>` | <h2>Heading 2</h2> |
| `<h3>` | <h3>Heading 3</h3> |
| `<h4>` | <h4>Heading 4</h4> |
| `<h5>` | <h5>Heading 5</h5> |
| `<h6>` | <h6>Heading 6</h6> |

## _HTML Logical Style Tags Attributes:-_

Apart of the semantic functionality of the logical style tags, we have many attributes that can be used with the logical style tags to format the text in an HTML document

| **Attribute** |                               **Description**                                |
| :-----------: | :--------------------------------------------------------------------------: |
|    `class`    |                       Indicates a class name for a tag                       |
|     `dir`     | Indicates the directionality of text, such as left-to-right or right-to-left |
|     `id`      |                       Indicates a unique id for a tag                        |
|    `lang`     |              Indicates a language code for the content in a tag              |
|    `style`    |                    Indicates an inline style for the tag                     |
|    `title`    |                        Indicates the title for a tag                         |

<br>

## **⚡ Resolving Common Misconceptions**

<br>

## _1. Difference between `<strong>` and `<b>` tag_

Both `<strong>` and `<b>` tags displays the enclosed text in a bold typeface by default, but the `<strong>` tag indicates that its contents have strong importance, whereas the `<b>` tag just draws the reader's attention without expressing any specific meaning.

## _2. Difference between `<em>` and `<i>` tag_

Similarly, both `<em>` and `<i>` tags displays the enclosed text in italic typeface by default, but the `<em>` tag indicates that its contents have stressed emphasis compared to surrounding text, whereas the `<i>` tag is used to separate text from the rest of the document for reading purposes, such as a technical word, an idiomatic phrase from another language, an idea, and so on.
