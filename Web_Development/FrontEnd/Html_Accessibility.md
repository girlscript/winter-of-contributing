# HTML Accessibility
This provised the user to navigate and interact in  a better way with your website . That's make your HTML code as <b>senmantic</b> as possible.

## Semantic HTML
These are the elements which have a meaning or we can say they clearly define about the content which they holding.
```
// This is clearly tell us that it is used to make forms.

<form> </form> 
 
// same this is tell us that it is used to make table.

 <table> </table>
```
## Non-Semantic HTML
They are elements which tell nothing about the content they will hold.
```
// By seeing this we can't say what type of content they hold

<div> </div>

<span> </span>
```
## Heading Tags
The heading tag is used to give heading to page or content it varies from h1 ( Biggest ) to h6 ( Smallest ) tags.
```
<h1> Heading 1 </h1>
<h2> Heading 2 </h2>
<h3> Heading 3 </h3>
<h4> Heading 4 </h4>
<h5> Heading 5 </h5>
<h6> Heading 6 </h6>
```
## Alternative Text
This tag used when we have to provide the alternate text for the image. It is showed when the image can't be displayed due to any kind of error in src attribute.
```
<img src="GWOC'21.jpg" alt="Logo of GWOC'21">
```
## Declaring The Langauge
This is used inside the html tag , this is to declare the language of the web page. This is meaningful to assist search engines and browsers.
```
<!DOCTYPE html>
<html lang="en>
<body>

....

</body>
</html>
```
## The Title Attribute
The title attribute is used to give extra information about the element.
<p> This tag can be used on any HTML element .</p>

```
<p title="GWOC'21 repo ">www.GWOC'21.com </p>
```
## Using of Clear Language
Always  use a clear language and be easy to understand by any developer and by user also .
- Avoid Slang Words.
- Use sentences as small as possible.
- Avoid dashes. Write 1 to 3 instead of write 1-3.
- Avoid Abbreviations
- Use meaningful class and id name.

## Create Good Link Text
The defination of good link is that it clearly define the information that reader will get after clicking on that link.

### --> Good Links
```
<a> Find out more about the GWOC'21 </a>

Read more about <a> how to contribute in open source  </a>

<a> get more information  here </a>
```
### --> Bad Links 
```
<a> Click here </a>

<a> Get more.. </a>

get more information <a> here </a>
```
