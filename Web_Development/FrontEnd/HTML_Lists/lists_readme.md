# Lists in HTML

At the very basics, a list is a way to store short pieces of information that are related to each other, or belong to a similar domain and to display them in different forms, such as ordered lists, unordered lists, defininition lists etc. 

**In a nutshell, HTML lists are used to present information in a well formed and semantic way.**

If you've ever created this markdown document before, you already know how lists work, but, let's see here the various kinds of lists HTML offers us: 
1. **Ordered lists**
2. **Unordered lists**
3. **Definition lists**

---

## Unordered Lists
An unordered list is used when we want to just display the information. For example, let us consider the example of baking a cake. If you want to know the ingredients required, you just need the list of the ingredients, right? It doesn't matter what order you buy them in, as long as you have all of them. 


**How to define an Unordered list in HTML**

The &lt;ul&gt; tag is used to define an unordered list. For each list item, we use the &lt;li&gt; tag. 

A code snippet will explain it in a much better way, so here is one: 

```
<ul style="color: white;">
        <li>This is how you add unordered list. </li>
        <li>These here are the items of the list. </li>
        <li>
            Here, we are adding a list within a list i.e. A nested list:
            <ul type="square">
                <li>Nested list item 1</li>
                <li>Nexted list item 2</li>
            </ul>
        </li>
    <li>Another list item</li>
</ul>
```

Output of the code above: 
<ul style="color: white;">
        <li>This is how you add unordered list. </li>
        <li>These here are the items of the list. </li>
        <li>
            Here, we are adding a list within a list i.e. A nested list:
            <ul type="square">
                <li>Nested list item 1</li>
                <li>Nexted list item 2</li>
            </ul>
        </li>
    <li>Another list item</li>
</ul>

<br>

## Ordered Lists

An ordered list is used when we want to display the information in a sequential manner. For example, let us again consider the example of baking a cake. If you want to now know the process of baking the same cake, you dont just need the steps, but also a sequence for them to follow in, right? So here, we need a sequence to tell us what comes first. 


**How to define an Ordered list in HTML**

The &lt;ol&gt; tag is used to define an unordered list. For each list item, we use the &lt;li&gt; tag. 

A code snippet will explain it in a much better way, so here is one:

```
<ol type="I" style="color: whitesmoke;">
        <li>This is how we add an ordered list</li>
        <li>One doesnt need to learn the different style types, just look em up on the internet.</li>
        <li>List Item 3</li>
        <li>List Item 4</li>
    </ol>
```

**The output of the code provided above will be:**
<ol type="I" style="color: whitesmoke;">
        <li>This is how we add an ordered list</li>
        <li>One doesnt need to learn the different style types, just look em up on the internet.</li>
        <li>List Item 3</li>
        <li>List Item 4</li>
    </ol>

<br>

## Definition Lists

HTML also has definition lists (or description lists.)

As the name suggests, it is a list of items with a definition or a description of each item. 

The &lt;dl&gt; tag defines the definition list, the &lt;dt&gt; tag defines the name of the item, and the &lt;dd&gt; tag provides information about the particular item. 

A code snippet will definitiely explain it better, so here is one: 
```
<dl style="color: white;">
        <dt>List Item 1</dt>
        <dd>- Description of List item 1.</dd>
        <dt>List Item 2</dt>
        <dd>- Description of list Item 2.</dd>
    </dl>
```
**The output of the code provided above will be:**
<dl style="color: white;">
        <dt>List Item 1</dt>
        <dd>- Description of List item 1.</dd>
        <dt>List Item 2</dt>
        <dd>- Description of list Item 2.</dd>
    </dl>
<br>

## Styles of these Lists


**Style of Unordered list:** <br>
By default, we can see that the unordered list has a bullet point style. However, there are other styles as well, such as disc, square, circle etc. For choosing any one of these styles, all we need to do is add type="list style" in the &lt;ul&gt;, like this:
<br> &lt;ul type="square"&gt;.

Different styles present: 
- Square
- Circle
- Disc etc.

*One doesn't really need to memorize this styles, as they are easily available on the internet*

**Style of Ordered list:** <br>
By default, we can see that the ordered list has a numbering style. However, there are other styles as well, such as roman style, alphabet listing etc. For choosing any one of these styles, all we need to do is add type="list style" in the &lt;ul&gt;, like this:
<br> &lt;ul type="I"&gt;.

Different styles present: 
- Roman (type="I" for Roman numerics in capital letters.)
- Roman (type="i" for Roman numerics in small letters.)
- Alphabetical (type="A" for Alphabetical order in capital letters.)
- Alphabetical (type="a" for Alphabetical order in small letters.)
- Starting from an arbitrary number (start = "4" will start the list from 4, keeping the next items as 5, 6, 7 and so on.)

*One doesn't really need to memorize this styles, as they are easily available on the internet*

