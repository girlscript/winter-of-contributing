# Semantic HTML

Semantic HTML or semantic markup is HTML that describes its meaning to both the browser and the developer.

Semantic - relating to meaning
<br>

*"what purpose or role does that HTML element have?"*

### Examples
Non-semantic elements: ```<div>``` and ```<span>``` - No information about content.

Semantic elements: ```<form>```, ```<table>```, and ```<article>``` - Gives information about its content.

## Why use Semantic HTML?

The benefit of writing semantic HTML is the driving goal of any web page: the desire to communicate. By adding semantic tags we are providing additional information about that document which helps in communication. 

Below I have listed some benefits of writing semantic markup:
- Search engines give importance to its contents which influence the page's search rankings 
- Screen readers can use it to help visually impaired users to navigate a webpage
- We can easily find blocks of meaningful code than searching through endless divs without semantic
- It suggests to the developer the type of data that will be populated
- Semantic naming mirrors proper custom element/component naming

## Semantic Elements in HTML

Many websites use HTML code like: ```<div id="nav"> <div class="header"> <div id="footer">``` to indicate navigation, header, and footer.

Semantic elements in HTML that can be used to define different parts of a web page:  
- ```<article>```
- ```<aside>```
- ```<details>```
- ```<footer>```
- ```<header>```
- ```<figcaption>```
- ```<figure>```
- ```<main>```
- ```<mark>```
- ```<nav>```
- ```<section>```
- ```<summary>```
- ```<time>```

<img src="https://user-images.githubusercontent.com/84666741/134342946-54b71609-f6b8-4284-a432-fbdbb4ed8713.png">

## HTML ```<section>``` Element
The ```<section>``` HTML element represents a generic standalone section of a document, which doesn't have a more specific semantic element to represent it. Sections should always have a heading, with very few exceptions.
```html
<h1>Choosing a job?</h1>
<section>
    <h2>idea</h2>
    <p>The guide will help to to choose the job which suits you best.</p>
</section>

<section>
    <h2>Criteria</h2>
    <p>when choosing a job see your intrests and personality aligns with the comapny or not. Don't forget to have a look at the work culture,....</p>
</section>

```

## HTML ```<article>``` Element
The ```<article>``` HTML element defines a self-contained composition in a document, page, application, or site. An article is meant to be independently distributable or reusable.
```html
<article>
  <header>
    <h1>What Does naari Do?</h1>
    <p>narri's mission:</p>
  </header>
  <p>naari's mission is to promote equality and opportunities for women and create awareness.</p>
</article>
```

## HTML ```<header>``` Element
The ```<header>``` HTML element defines the introductory content. It can contain some heading elements and also a logo, a search form, an author name, and other elements.
```html
<header class="page-header">
    <h1>The Ultimate FOOD Blog!</h1>
</header>

<main>
    <p>I love indian food <em>so</em> much! If you have never tasted t before then its a must have.</p>
</main>
```

## HTML ```<footer>``` Element
The ```<footer>``` HTML element represents the footer for its nearest sectioning content.It typically contains information about copyright details,author of the section or links to related documents and references.
```html
<footer>
  <p>Author: abc</p>
  <p><a href="mailto:abc@gmail.com">abc@gmail.com</a></p>
</footer>
```

## HTML ```<nav>``` Element
The ```<nav>``` element defines a set of navigation links for a website.
```html
<nav>
  <a href="/home/">Home</a> |
  <a href="/about/">About</a> |
  <a href="/tools/">Tools</a> |
  <a href="/contact/">Contact</a>
</nav>
```
## HTML ```<aside>``` Element
The ```<aside>``` HTML element represents a portion of a document whose content is only indirectly related to the document's main content. Asides are frequently presented as sidebars or call-out boxes.

Display some content other than the content it is placed in:

```html
<p>My family and I visited The Kids center this weekend. The weather was nice, and he center was amazing! I had a great summer together with my family!</p>

<aside>
<h4>Kids Center</h4>
<p>Kid center is a fun place to visit with family and kids. It has lots of stuff that children enjoy.</p>
</aside>
```

## HTML ```<figure>``` and ```<figcaption>``` Elements
The ```<figure>``` tag specifies self-contained content, like illustrations, diagrams, photos, code listings, etc.
The ```<figcaption>``` HTML element represents a caption or legend describing the rest of the contents of its parent ```<figure>``` element.

```html
<figure>
    <img src="flower.jpg" alt="flower">
    <figcaption>A red rose</figcaption>
</figure>
```
## Below is a list of some of the semantic elements in HTML.

| Tag  | Description |
| ------------- | ------------- |
| ```<article>```  | Used for independent, self-contained content |
| ```<aside>```  |  Used for content aside from the page content  |
| ```<details>```  |  Used for additional details that the user can view or hide |
| ```<figcaption>```  | Used for caption for a <figure> element |
| ```<figure>```  | Specifies self-contained content, like illustrations, diagrams, photos, code listings, etc. |
| ```<footer>```  | Used for footer for a document or section |
| ```<header>```  | Used for header for a document or section |
| ```<main>```  | Used for the main content of a document |
| ```<mark>```  | Used for marked/highlighted text |
| ```<nav>```  | Used for navigation links |
| ```<section>```  | Used for section in a document |
| ```<summary>```  | Used for visible heading for a ```<details>``` element |
| ```<time>```  | Used for adate/time |

### References  
    https://developer.mozilla.org/en-US/docs/Glossary/Semantics
    https://www.w3schools.com/html/html5_semantic_elements.asp
    photo: 
    https://miro.medium.com/max/1000/1*zHJFnu7QF-PgUb8108aLcA.png

Contributor: [Harsha Priya](https://github.com/harshapriyaa)❄️
