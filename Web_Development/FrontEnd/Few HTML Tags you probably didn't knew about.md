# Few HTML Tags you probably didn't know about !



In this documentation I will be discussing a few HTML tags that can be super helpful but are rarely used by programmers. Although the purpose of these tags can obviously be defined by other tags and CSS as a programmer we should try to use the full potential of HTML tags which are available to us.



Let's get started....


1. **abbr :**   This tag is used specifically for abbreviations. We can also add the title attribute to this tag. When we use the abbr tag with a title attribute, the title will be displayed as a tooltip when anyone hovers over the element.

```html
<body>
  <p><abbr title="GirlScript Winter Of Code">GWOC</abbr> is an acronym.</p>
</body>
```
![1](https://user-images.githubusercontent.com/55577276/136400945-59246b65-4b6a-4d33-84a9-a7cc9a77bf28.png)




2. **del :** One of the highly underrated tag I suppose. Mainly used for the text that is struck through, it is deleted from the document but it is still there to show modification or history changes. It strikes through the text on which it is used. We can use the cite attribute, which is the URL for the source that explains why the text was modified or deleted.

```html
<body>
<p><del cite="https://www.deletedtext.com">Deleted Part</del>old Part.</p>
</body>
```
![2](https://user-images.githubusercontent.com/55577276/136401007-7a6f8951-4a30-4eaa-be4d-d3808e13037d.PNG)




3. **ins** : It is similar to its companion tag, del. It is mainly used for the new or updated part that has been added to the document. Text used inside this tag is usually underlined to show that it is recently updated or modified.

```html
<body>
<p><ins cite="https://www.updatedtext.com">This is new text.</ins> but this text is not.</p>
</body>
```
![3](https://user-images.githubusercontent.com/55577276/136401053-ad7c0397-c7e5-477e-b9c9-716698ebb030.PNG)




4. **progress :** This tag is a lot helpful when we want to show progress of something like a project or any task. No need of any JS or CSS if we just want to make a simple meter.

```html
<progress id="project" max="100" value="60"> 60% </progress>
```

![4](https://user-images.githubusercontent.com/55577276/136401087-9632d02e-428b-4fef-81a3-97e014a0f90f.PNG)



5. **details** and **summary :** This is the built-in accordion feature in HTML. For a simple accordion website, there is no need to use Javascript for this purpose. Just use this awesome tag and your work is done.

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


![5](https://user-images.githubusercontent.com/55577276/136401133-aa3788ea-b672-47cc-a513-71adc11137d7.PNG)





6. **address :** Probably one of the most obscure tags in HTML. Programmers don't use it much, but that doesn't simply mean it is not useful. This tag allows you to semantically markup addresses in HTML and also italicize all the data present inside it.

```html
<address>
Written by <a href="mailto:webmaster@example.com">Jon Doe</a>.<br>
Visit us at:<br>
Example.com<br>
Box 564, Disneyland<br>
USA
</address>
```
![6](https://user-images.githubusercontent.com/55577276/136401159-14744651-6ea4-4237-9198-0b2368a3dcd5.PNG)




7. **time :** This element in HTML is for both semantic and structured content. It is very helpful to tell crawlers and bots about the exact time that is being referred to. While being rendered, it does not provide any special display but provides much more context to the user or system reading it.

```html
<body>
<p>Our business opens at <time>09:00</time>.</p>
</body>
```

![7](https://user-images.githubusercontent.com/55577276/136401178-62104a51-ffa0-49b9-97bb-02b389099290.PNG)






8. **blockquote** and **cite :** Probably the most underrated tag in HTML. Whenever we used to do a project in school or college, we used to include the references. These tags are the semantic versions that indicate that a given quote or reference is from an outside source.

   ```html
   <figure>
       <blockquote cite="https://en.wikipedia.org/wiki/Citizenship_in_a_Republic">
           <p>It is not the critic who counts; not the man who points out how the strong man stumbles, or where the doer of deeds could have done them better...</p>
       </blockquote>
       <figcaption>--Teddy Roosevelt, <cite>Citizenship in a Republic Speach</cite></figcaption>
   </figure>
   
   ```

![8](https://user-images.githubusercontent.com/55577276/136401208-136ec451-a959-45c9-bfd9-58cd0f8f7605.PNG)


   
   
   

9. **fieldset **: It is an attribute that you can specifically add to your forms to logically group the elements of your form. Once applied this tag draws a box around the specific elements within the fieldset.

   ```html
   <form>
   <fieldset>
   <legend>Are You a GWOC Contributor?</legend>
   Yes <input name="yes" type="radio" value="yes" />
   <br>
   No <input name="no" type="radio" value="no" />
   </fieldset>
   </form>
   ```

   ![9](https://user-images.githubusercontent.com/55577276/136401269-8435d79d-30e6-46f0-be78-a2195099c9d2.PNG)


   

10. **datalist**: It is a very important  and underrated HTML tag. It allows us to create a dropdown and searchable text inside the input element with just HTML. It gives a pre-defined list of values or options for the input element with the autocomplete feature. All we need to do is just put a list of options inside the element *datalist* using the tag *option*.

    ```html
    <body>
        In which Domain you are contributing ? <br>
        <input list="domain">
        <datalist id="domain">
            <option value="DSA">
            <option value="WebDev">
            <option value="DataScience">
            <option value="CyberSecurity">
            <option value="Blockchain">
        </datalist>
    </body>
    ```

![10](https://user-images.githubusercontent.com/55577276/136401307-6ed3b478-f6e3-4602-ad2b-d647e897fd71.png)


    

There are a lot more on this list, but these are the top few I like. I hope you get to learn something new from this documentation !
