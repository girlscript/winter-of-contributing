#  Vanilla JavaScript
The term vanilla script is used to refer to the pure JavaScript (or we can say plain JavaScript) without any type of additional library. Sometimes people often used it as a joke"nowadays several things can also be done without using any additional JavaScript libraries".

The vanilla script is one of the lightest weight frameworks ever. It is very basic and straightforward to learn as well as to use. You can create significant and influential applications as well as websites using the vanilla script.

The team of developers that created the vanilla JavaScript is continuously working on it to improve it and make it more useful for the web-developers.

## Big websites that are currently using the vanilla JavaScript:
- Facebook
- Google
- YouTube
- Yahoo
- Wikipedia
- Windows Live
- Twitter
- Amazon
- LinkedIn
- MSN
- eBay
- Microsoft


In fact, Vanilla JS is already used on more websites than jQuery, Prototype JS, MooTools, YUI, and Google Web Toolkit - combined.

## Getting Started:
The *Vanilla JS* team takes pride in the fact that it is the most lightweight framework available anywhere; using our production-quality deployment strategy, your users'
browsers will have *Vanilla JS* loaded into memory before it even requests site.


To use Vanilla JS, just put the following code anywhere in your application's HTML:
```
<script src="path/to/vanilla.js"></script>
```

## Advantages of the Vanilla Script are as follows:
- We can insert the JavaScript in any of the web-pages, but in another scripting language, we cannot do so. For example PHP.
- Since we all know that the execution of the JavaScript is done on the client-sideso it reduces the overall demand for server use. Also, the simple application doesn't
require the involvement of the server at all.
- With the help of JavaScript, we can create an excellent quality of features such as drag &drop, and components like a slider. This can impact the user experience on the website in a positive way.

## Disadvantages of the Vanilla Script are as follows:
- One of the most significant disadvantages of the vanilla script is client-side security since we all know that the code of JavaScript is viewable at the client-side. Hence, anyone can modify it and use it as a weapon or tool for malicious purposes.
- Another major disadvantage of JavaScript isthat it lacks Debugging Facility.
- We cannot use it for network-based applications because there is no such kind of support available.

# Code Examples are:

- **Fade an element out and then remove it**

```
var s = document.getElementById('thing').style;
s.opacity = 1;
(function fade(){(s.opacity-=.1)<0?s.display="none":setTimeout(fade,40)})();
```

- **Make an AJAX call**

```
var r = new XMLHttpRequest();
r.open("POST", "path/to/api", true);
r.onreadystatechange = function () {
  if (r.readyState != 4 || r.status != 200) return;
  alert("Success: " + r.responseText);
};
r.send("banana=yellow");
```


# Some Cool Open Source Projects
- **[Darkmode](https://github.com/sandoche/Darkmode.js):** Add a dark-mode / night-mode to your website in a few seconds.

- **[Smooth Scroll](https://github.com/cferdinandi/smooth-scroll):** A lightweight script to animate scrolling to anchor links.

- **[Mixitup](https://github.com/patrickkunka/mixitup):** A high-performance, dependency-free library for animated filtering, sorting, insertion, removal and more.

- **[Suneditor](https://github.com/JiHong88/SunEditor):** Pure javascript based WYSIWYG html editor, with no dependencies.

- **[Moovie](https://github.com/BMSVieira/moovie.js):** Movie focused HTML5 Player.

- **[Fine Uploader](https://github.com/FineUploader/fine-uploader):** Multiple file upload plugin with image previews, drag and drop, progress bars. S3 and Azure support, 
image scaling, form support, chunking, resume, pause, and tons of other features.

- **[Choices](https://github.com/Choices-js/Choices):** A vanilla JS customisable select box/text input plugin.
