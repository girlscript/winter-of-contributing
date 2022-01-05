## Vanilla and Dom Manipulation

![Vanilla Icecream](./images/vanilla.jpg)  
**Image credits: [pexels.com](https://www.pexels.com/photo/person-holding-vanilla-ice-cream-on-cone-1979749/)**

Before jumping into manipulating the DOM with Vanilla Javascript let's take a quick glance on what DOM is:

>The Document Object Model (DOM) is a programming interface for web documents. It represents the page so that programs can change the document structure, style, and content. The DOM represents the document as nodes and objects; that way, programming languages can interact with the page. [Source](https://developer.mozilla.org/en-US/docs/Web/API/Document_Object_Model/Introduction)

### How can Javascript manipulate the DOM:

Javascript can manipulate the DOM in the following ways:
- Can target and modify any HTML element
- Change Styling of elements depending logical operations
- Remove or add HTML elements dynamically
- Can be used to add event listeners to elements etc

### Accessing the DOM

Accessing the DOM is a cakewalk, you do not need any special libraries or adding configs. You can use the DOM API directly using Javascript, whether you write inline **scripts** or external **scripts** doesn't matter.

Let's try to visualize the DOM using a simple HTML document.

```HTML
<!DOCTYPE html>
<html>
    <head>
        <meta charset="utf-8">
        <title>This is title</title>
    </head>
    <body>
        <p>Here is a paragraph</p>
    </body>
</html>
```
The DOM tree would probably look like this:
```
├── DOCTYPE: html
└── HTML
    ├── HEAD
    |   ├── #text:
    |   ├── META charset="utf-8"
    |   ├── #text:
    |   ├── TITLE
    |   |   └── #text: This is title
    |   └── #text:
    ├── #text:
    └── BODY
        ├── #text:
        ├── P
        |   └── #text: Here is a paragraph
        └── #text:
```
Each HTML element and text is an **node** in this DOM tree. Depending on the position of a node and its relation to other nodes, there are a few types of nodes:

| Node Type | Description |
| --- | ---|
| **Element Node** | Any HTML element that exist in the DOM |  
| **Root Node** | The topmost node in the tree, in the case of HTML it is always the **HTML** node. |
| **Parent Node** | A node that has another node inside it. For example : **Body** is the parent node to **paragraph** in the example |
| **Child Node** | A node directly inside another node |
| **Descendent Node** | A node anywhere inside a node |
| **Siblings Node** | Node that sit on the same level in the DOM tree. |
| **Text Node** | A node containing text string |

### DOM manipulation

To manipulate any node we need to first select that node and store its reference in a variable.
To help in this the **Selectors API** provides some methods to quicly access any DOM Node.

There are 5 methods my which we can select elements in DOM using selectors

- getElementById() --> Selects a node with a specific id
- getElementsByClassName() --> Selects all node with a specified class name
- getElementsByTagName() --> Selects all node which has a particular tag
- querySelector() --> Used to select elements using id, class name and tag name depending on the argument passed.
- querySelectorAll() --> Selects all elements using particular class name or tag name.

All the above methods are properties of the **document** object, so to use them we need to prefix with document object. 
```js
document.getElementById()
document.getElementsByClassName()
document.getElementsByTagName()
document.querySelector()
document.querySelectorAll()
```
Let's take and example of the above methods.

```HTML
<!DOCTYPE html>
<html>
    <head>
        <meta charset="utf-8">
        <title>This is title</title>
    </head>
    <body>
        <p id="pid">Paragraph with id</p>
        <p class="p_class">Here is a paragraph</p>
        <p class="p_class">Here is another paragraph</p>
        <section id="main"></section>
    </body>
</html>
```
1. Let's try to select the `<p>` node which has id of **pid** :

   ```js
   const para = document.getElementById('pid')
   /* OR */
   const para = document.querySelector('#pid')
   ```
2. Let's try to select all `<p>` nodes with class name **p_class**

    ```js
    const para = document.getElementsByClassName('p_class')
    /* OR */
    const para = document.querySelectorAll('.p_class')
    ```
3. Let's try to select all nodes with `<p>` tag

   ```js
   const para = document.getElementsByTagName('p')
   /* OR */
   const para = document.querySelectorAll('p')
   ```

### Dynamically create new nodes

In the above HTML code we had an **section** with node child nodes. Now let's try creating a **paragraph** element and make this node a child node of the section.

```js
/* First grabbing the reference of the section */
const section = document.querySelector('#main')

/* Now creating a paragraph element */
const para = document.createElement('p')
/* Append a text content inside this para element' */
para.textContent = 'Dynamically created paragraph'

/* Now lets make this paragraph a child of the section */
section.appendChild(para)
```
Using the `createElement()` we can create any HTML node except **text** nodes, for that we have `createTextNode()`

```js
/*Lets first grab a paragraph reference*/
const para = document.querySelector('p')

/* Now creating a text node */
const text = document.createTextNode('Dynamically created text node')

/* Node lets make this text as child to paragraph */
para.appendChild(text)
```
### Removing a DOM node

Removing a node is also very simple, only thing we need is the reference to that node and/or its parent node

1. Deleting a child node
    ```js
    /* First grab reference to parent node */
    const parent = document.querySelector('#parent')
    /* Grab the reference to child node*/
    const child = document.querySelector('#child')

    /* Now remove the child Node from parent Node */
    parent.removeChild(child)
    ```
2. Deleting a node based on its reference
   ```js
   /* Grab reference to the node */
   const element = document.querySelector('#element')
   
   /* Now remove the node */
   element.remove() 
   ``` 

## Dynamically manipulating Styles:

Sometimes we need to give styles to a particular node based on some logic. Here DOM manipulation can be used to change styles of a particular node. This can be done by modifying the **style** property of any DOM element.  
Examples:
```js
/* Lets first grab a para element */
const para = document.querySelector('p')

/* Lets change the color, background-color,padding properties */
para.style.color = 'pink'
para.style.backgroundColor = 'blue'
para.style.padding = '1rem'
```
The only difference you might have notices while changing the style property of `background-color` is that, here it is `camelCased` but in the case of **CSS** it is `snake-cased`. This is the only thing you need to be carefull about while changing styles using DOM manipulation.

### Conclusion
We have seen an over view of what can be done using DOM manipulation. At this point you must have understood the Document Object Model clearly and how to manipulate its nodes. You can further checkout [**MDN Docs**](https://developer.mozilla.org/en-US/docs/Learn/JavaScript) for more API related to this.

**Contributor: [Arpan Mondal](https://github.com/arp99)**
