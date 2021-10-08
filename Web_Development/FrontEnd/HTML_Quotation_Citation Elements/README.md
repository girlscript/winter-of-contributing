# HTML Quotation and Citation Elements
In HTML, to represent quotations and to cite texts, we need to make use of some specific tags to help us distinguish those quoted or cited text from the normal     texts that are written.  
## Quotation and Citation Elements in HTML :
### 1. HTML \<abbr> tag
* This tag is used to highlight an abbreviation.<br>
* They can also be used to write short form of a word like- UN(United Nations), ISRO(Indian Space Research Organisation), 
GWOC(GirlScript Winter of Contributing) etc.<br>
* We use the attribute 'title' along with the tag \<abbr>. This attribute holds the actual meaning of the abbreviation.<br>
* The \<abbr> tag should end with its respective closing tag\</abbr>. <br>
* In the output, if we hover/ or move out cursor on the underlined abbreviation, the actual full-form of the abbreviation is displayed.<br><br>
**Example :**
  ``` HTML
  <p>The <abbr title="United Nations">UN</abbr> aims to maintain International Peace.</p>
  ```
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Output :**<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;![abbr](https://user-images.githubusercontent.com/34717612/136079448-37186934-1f47-407a-b616-3764354ff827.png)
<br>
### 2. HTML \<q> tag<br>
* This tag is used to insert quotation marks when required while writing some quotes.<br>
* The \<q> tag should end with its respective closing tag\</q>.<br><br>
**Example :**
  ``` HTML
  <p>Charlie Chaplin once said: 
  <q>A day without laughter is a day wasted.</q>
  which is a very correct statement!</p>
  ```
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Output :**<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;![q](https://user-images.githubusercontent.com/34717612/136079888-ecf4cce9-c505-425c-8fe2-e5cb7b5a3781.png)
<br>
### 3. HTML \<cite> tag<br>
* As the name suggests the \<cite> tag is used to specify a citation.<br>
* It provides reference/ title  to some unique work done.<br>
* It identifies the source of a particular work done.<br>
* The text written inside this tag is displayed in italics during the output.<br>
* The \<cite> tag should end with its respective closing tag\</cite>.<br><br>
**Example :**
  ``` HTML
  <p><cite>The Maze Runner</cite> by James Dashner.</p>
  ```
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Output :**<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;![cite](https://user-images.githubusercontent.com/34717612/136079643-bf87f858-d04d-406d-8be1-7be337b706cf.png)
<br>
### 4. HTML \<blockquote> tag<br>
* This tag is used to highlight a quote taken from another source.<br>
* It indents the text block that is written inside the tag.<br>
* The attribute 'cite' can be used with it to notify the source or the place from which the blockquoted text has been taken from.<br>
* The \<blockquote> tag should end with its respective closing tag\</blockquote>.<br><br>
**Example :**
  ``` HTML
  <p>GirlScript Winter of Contributing:</p>
  <blockquote cite="https://gwoc.girlscript.tech/">
  GWOC encourages individuals to share their knowledge and ideas to develop technical skills and gain valuable experience in the field of tech education.
  </blockquote>
  ```
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Output :**<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;![blockquote](https://user-images.githubusercontent.com/34717612/136079694-4b97151f-b5bf-4a76-82d3-1b5e36c04992.png)
<br>
### 5. HTML \<bdo> tag<br>
* The \<bdo> tag stands for Bi-Directional Override.<br>
* It is used to change the current direction of a text written inside the tag.<br>
* It is very useful for writing languages like Arabic/Hebrew which usually involve text written from the right to left direction.<br>
* The attribute 'dir' is used along with the \<bdo> tag.<br>
* The 'dir' attribute can be assigned two values either-<br> 
&nbsp;&nbsp;&nbsp;&nbsp;i) ltr - Defines the direction of text from left to right.<br>
&nbsp;&nbsp;&nbsp;&nbsp;ii) rtl - Defines the direction of text from left to right.<br>
* The \<bdo> tag should end with its respective closing tag\</bdo>.<br><br>
**Example :**
  ``` HTML
  <bdo dir="rtl">Reverse the text in rtl(Right to left) direction!</bdo>
  ```
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Output :**<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;![bdo](https://user-images.githubusercontent.com/34717612/136079760-b1c68b26-90f5-45c3-b6e6-2c09dd7b229f.png)
<br>
### 6. HTML \<address> tag<br>
* The \<address> tag as the name suggests is used when one wants to display any address or contact information in the document.<br>
* The text written inside this tag is displayed in italics during the output.<br>
* The \<address> tag should end with its respective closing tag\</address>.<br><br>
**Example :**
  ``` HTML
  <address>
  Written by Mia S.<br> 
  Contact me at:
  Mia1@123<br>
  Street 1a3,<br>
  USA
  </address>
  ```
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Output :**<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;![address](https://user-images.githubusercontent.com/34717612/136079796-b7dc192f-90b7-472f-8b05-ea97fb0297d1.png)
<br>
## To Summarize:
Some of the commonly used tags to represent quotation and cite text are:
<br>
* `<abbr>` - This tag is used to define either an abbreviation or an acronym.
* `<q>` - This tag is used to write a small inline quotation.
* `<cite>` - This tag is used refer to some special, creative work or the title of a specific work..
* `<blockquote>` - This tag is used to represent quote/text that is taken from a difference source.
* `<bdo>` - This tag is used to specify in which direction a text has to be written..
* `<address>` - This tag defines contact info of the person.
## References:
1) [w3schools](https://www.w3schools.com/html/)
2) [javatpoint](https://www.javatpoint.com/)
