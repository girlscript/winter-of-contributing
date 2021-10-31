# HTML Accessibility
Html accessibility is the way in that user can interact with our website more seamlessly . That's why make your HTML code as semantic as possible.

## Semantic HTML
Semantic elements are the elements which have a meaning or we can say they clearly define about the content which they are holding.
```html
<!-- This is clearly tell us that it is used to make forms. -->

<form> </form> 
 
<!-- same this is tell us that it is used to make table. -->

 <table> </table>
```
## Non-Semantic HTML
They are elements which tell nothing about the content which they hold.
```html
<!-- By seeing this we can't say about what type of content they hold -->

<div> </div>

<span> </span>
```
## Heading Tags
The heading tag is used to give heading to page or content , It varies from h1 ( Biggest ) to h6 ( Smallest ) tags.
```html
<h1> Heading 1 </h1> ( Biggest heading )
<h2> Heading 2 </h2>
<h3> Heading 3 </h3>
<h4> Heading 4 </h4>
<h5> Heading 5 </h5>
<h6> Heading 6 </h6> ( Smallest heading )
```
## Alternative Text
This tag used when we have to provide the alternate text for an image. The text in this tag will be showed when the image can't be displayed due to any kind of error in src attribute.
```
<img src="GWOC'21.jpg" alt="Logo of GWOC'21">
```
## Declaring The Langauge
This is used inside the html tag , this is to declare the language of the web page. This is meaningful to assist search engines and browsers.
```html
<!DOCTYPE html>
<html lang="en">
<body>

<p> This is the in which language is specified . </p>

</body>
</html>
```
## The Title Attribute
The title attribute is used to give extra information about the element.
<p> This tag can be used on any HTML element .</p>

```html
<p title="GWOC'21 repo "> www.GWOC'21.com </p>
```
## Using of Clear Language
Always  use a clear language and be easy to understand by any developer and by user also .
- Avoid Slang Words.
- Use sentences as small as possible.
- Avoid dashes ( Write 1 to 3 instead of write 1-3 ) .
- Avoid Abbreviations
- Use meaningful classes and id name.

## Create Good Link Text
The defination of good link is that , It clearly defines about the information that reader will get after clicking on that link .

### --> Good Links
```html
<a> Find out more about the GWOC'21 </a>

Read more about <a> how to contribute in open source  </a>

<a> get more information  here </a>
```
### --> Bad Links 
```html
<a> Click here </a>

<a> Get more.. </a>

get more information <a> here </a>
```
