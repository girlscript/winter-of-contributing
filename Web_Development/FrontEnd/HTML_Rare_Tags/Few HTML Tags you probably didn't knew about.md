

# Few HTML Tags you probably didn't knew about !



This is my second documentation contribution in GWOC 2021 and in this documentation I will be discussing about few HTML tags that can be super helpful but are rarely used by programmers. Although the purpose of these tags can obviously be defined by other tags and CSS but as a programmer we should try to use the full potential of HTML tags which area available to us.

Let's get started....

1. **abbr : **  This tag is used specifically for abbreviations purpose. We can also add the title attribute to the this tag. When we will use abbr tag with title attribute the title will be displayed as a tooltip when anyone hover overs the element.

```html
<body>
  <p><abbr title="GirlScript Winter Of Code">GWOC</abbr> is an acronym.</p>
</body>
```

  <p><abbr title="GirlScript Winter Of Code">GWOC</abbr> is an acronym.</p>





2. **del :** One of the highly underrated tag I suppose. Mainly used for the text that is struck through are deleted from the documented but is still there may be to show modification or history changes. It strikethrough the text on which it is used. We can use cite attribute that is the url for the source that explains why the text was modified/deleted.

```html
<body>
<p><del cite="https://www.deletedtext.com">Deleted Part</del>old Part.</p>
</body>
```
<p><del cite="https://www.deletedtext.com">Deleted Part </del>_old Part.</p>





3. **ins** : It is similar to its companion tag del. Mainly used for the new or updated part that has been added to the document. Text used inside this tag is usually underlined to show that it is recently updated or modified.

```html
<body>
<p><ins cite="https://www.updatedtext.com">This is new text.</ins> but this text is not.</p>
</body>
```
<p><ins cite="https://www.updatedtext.com">This is new text.</ins> but this text is not.</p>






4. **progress : **This tag is a lot helpful when we want to show progress of something like a project or any task. No need of any JS or CSS if we just want to make a simple meter.

```html
<progress id="project" max="100" value="60"> 60% </progress>
```

<progress id="project" max="100" value="60"> 70% </progress>






5. **details** and **summary : ** This is the built in accordion feature in HTML. If you want to implement just a simple accordion in you website no need to use Javascript for this purpose, just use this awesome tag and your work is done.

```html
<details>
  <summary><strong>What is GWOC</strong></summary>
  GirlScript is a non-profit organization that encourages diversity in technical education by providing reservations for women and underrepresented groups in society.It started as a project but eventually gained enormous momentum to become India's First and Biggest Technical Community.
</details>
```
<details>
  <summary><strong>What is GWOC</strong></summary>
  GirlScript is a non-profit organization that encourages diversity in technical education by providing reservations for women and underrepresented groups in society.It started as a project but eventually gained enormous momentum to become India's First and Biggest Technical Community.
</details>





6. **address : ** Probably one of the most obscure tags present in HTML. Programmers don't use it much but that doesn't simply means it is not useful. This tag  allows you to semantically markup addresses in HTML and also italicizing all the data present present inside it.

```html
<address>
Written by <a href="mailto:webmaster@example.com">Jon Doe</a>.<br>
Visit us at:<br>
Example.com<br>
Box 564, Disneyland<br>
USA
</address>
```

<address>
Written by <a href="mailto:webmaster@example.com">Jon Doe</a>.<br>
Visit us at:<br>
Example.com<br>
Box 564, Disneyland<br>
USA
</address>




7. **time :** This element is HTML is both semantic as well as structured content. It is very helpful to tell crawlers and bots about the exact time that is being referred.  While being rendered it does not provide any special display but provides much more context to the user or system reading it.

```html
<body>
<p>Our business opens at <time>09:00</time>.</p>
</body>
```

<p>Our business opens at <time>09:00</time>.</p>



   

8. **blockquote** and **cite :** Probably a very underrated tag in HTML. Whenever we used to do a project in school/college we used to include the references. These tags are the semantic versions that indicate that a given quote or reference is from outside source. 

```html
<figure>
    <blockquote cite="https://en.wikipedia.org/wiki/Citizenship_in_a_Republic">
        <p>It is not the critic who counts; not the man who points out how the strong man stumbles, or where the doer of deeds could have done them better...</p>
    </blockquote>
    <figcaption>--Teddy Roosevelt, <cite>Citizenship in a Republic Speach</cite></figcaption>
</figure>

```

<figure>
    <blockquote cite="https://en.wikipedia.org/wiki/Citizenship_in_a_Republic">
        <p>It is not the critic who counts; not the man who points out how the strong man stumbles, or where the doer of deeds could have done them better...</p>
    </blockquote>
    <figcaption>--Teddy Roosevelt, <cite>Citizenship in a Republic Speach</cite></figcaption>
</figure>




There are lot more to this list but these are the top few I like. Hope you got to know something new from this documentation.

Thank You !

 





