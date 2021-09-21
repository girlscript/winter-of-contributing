# Semantic HTML

Semantic HTML or semantic markup is HTML that introduces meaning to the web page rather than just presentation.A semantic element clearly describes its meaning to both the browser and the developer.
For example, a ```<p>``` tag indicates that the enclosed text is a paragraph. This is both semantic and presentational because people know what paragraphs are, and browsers know how to display them.

### Examples
Examples of non-semantic elements: ```<div>``` and ```<span>``` - Tells nothing about its content.

Examples of semantic elements: ```<form>```, ```<table>```, and ```<article>``` - Clearly defines its content.

## Why use Semantic HTML?

The benefit of writing semantic HTML stems from what should be the driving goal of any web page: the desire to communicate. By adding semantic tags to your document, you provide additional information about that document, which aids in communication. Specifically, semantic tags make it clear to the browser what the meaning of a page and its content is. That clarity is also communicated with search engines, ensuring that the right pages are delivered for the right queries.

Some of the benefits from writing semantic markup are as follows:
- Search engines will consider its contents as important keywords to influence the page's search rankings 
- Screen readers can use it as a signpost to help visually impaired users navigate a page
- Finding blocks of meaningful code is significantly easier than searching through endless divs with or without semantic or namespaced classes
- Suggests to the developer the type of data that will be populated
- Semantic naming mirrors proper custom element/component naming

## Semantic Elements in HTML

Many web sites contain HTML code like: ```<div id="nav"> <div class="header"> <div id="footer">``` to indicate navigation, header, and footer.

In HTML there are some semantic elements that can be used to define different parts of a web page:  
- ```<article>```
- ```<aside>```
- ```<details>```
- ```<figcaption>```
- ```<figure>```
- ```<footer>```
- ```<header>```
- ```<main>```
- ```<mark>```
- ```<nav>```
- ```<section>```
- ```<summary>```
- ```<time>```

<img src="https://user-images.githubusercontent.com/84666741/134252097-2d8852dd-4c97-4866-a9a4-41295a56b8a1.png">

## HTML ```<section>``` Element
The ```<section>``` HTML element represents a generic standalone section of a document, which doesn't have a more specific semantic element to represent it. Sections should always have a heading, with very few exceptions.
```html
<h1>Choosing an Apple</h1>
<section>
    <h2>Introduction</h2>
    <p>This document provides a guide to help with the important task of choosing the correct Apple.</p>
</section>

<section>
    <h2>Criteria</h2>
    <p>There are many different criteria to be considered when choosing an Apple — size, color, firmness, sweetness, tartness...</p>
</section>

```

## HTML ```<article>``` Element
The ```<article>``` HTML element represents a self-contained composition in a document, page, application, or site, which is intended to be independently distributable or reusable.
```html
<article>
  <header>
    <h1>What Does WWF Do?</h1>
    <p>WWF's mission:</p>
  </header>
  <p>WWF's mission is to stop the degradation of our planet's natural environment,
  and build a future in which humans live in harmony with nature.</p>
</article>
```

## HTML ```<header>``` Element
The ```<header>``` HTML element represents introductory content, typically a group of introductory or navigational aids. It may contain some heading elements but also a logo, a search form, an author name, and other elements.
```html
<header class="page-header">
    <h1>Cute Puppies Express!</h1>
</header>

<main>
    <p>I love beagles <em>so</em> much! Like, really, a lot. They’re adorable and their ears are so, so snuggly soft!</p>
</main>
```

## HTML ```<footer>``` Element
The ```<footer>``` HTML element represents a footer for its nearest sectioning content or sectioning root element. A <footer> typically contains information about the author of the section, copyright data or links to related documents.
```html
<footer>
  <p>Author: Hege Refsnes</p>
  <p><a href="mailto:hege@example.com">hege@example.com</a></p>
</footer>
```

## HTML ```<nav>``` Element
The ```<nav>``` element defines a set of navigation links.
```html
<nav>
  <a href="/html/">HTML</a> |
  <a href="/css/">CSS</a> |
  <a href="/js/">JavaScript</a> |
  <a href="/jquery/">jQuery</a>
</nav>
```
## HTML ```<aside>``` Element
The ```<aside>``` HTML element represents a portion of a document whose content is only indirectly related to the document's main content. Asides are frequently presented as sidebars or call-out boxes.

Display some content aside from the content it is placed in:

```html
<p>My family and I visited The Epcot center this summer. The weather was nice, and Epcot was amazing! I had a great summer together with my family!</p>

<aside>
<h4>Epcot Center</h4>
<p>Epcot is a theme park at Walt Disney World Resort featuring exciting attractions, international pavilions, award-winning fireworks and seasonal special events.</p>
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
| ```<article>```  | Defines independent, self-contained content |
| ```<aside>```  | Defines content aside from the page content  |
| ```<details>```  | Defines additional details that the user can view or hide |
| ```<figcaption>```  | Defines a caption for a <figure> element |
| ```<figure>```  | Specifies self-contained content, like illustrations, diagrams, photos, code listings, etc. |
| ```<footer>```  | Defines a footer for a document or section |
| ```<header>```  | Defines a header for a document or section |
| ```<main>```  | Specifies the main content of a document |
| ```<mark>```  | Defines marked/highlighted text |
| ```<nav>```  | Defines navigation links |
| ```<section>```  | Defines a section in a document |
| ```<summary>```  | Defines a visible heading for a ```<details>``` element |
| ```<time>```  | Defines a date/time |
