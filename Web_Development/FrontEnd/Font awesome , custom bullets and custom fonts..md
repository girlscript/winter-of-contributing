Created By: Abhishek Ojha
<br>
<date>19th July,2021</date>

## FONT AWESOME

* What is font awesome:

Font Awesome is a widely-used icon set that gives you scalable vector images that can be customized with CSS. With over 1,600 icons in the free set, you should be able to find an icon to suit your needs. It's great for adding various icons to your websites to make it look more beautiful and to make it more user friendly.

* Syntax and outcome:

   To use the Font Awesome icons, add the following line inside the &lt;head&gt; section of your HTML page:

<div>
<code>&lt;link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css"&gt;</code> <br>

 **_By adding this to the head section of your html page you will now be able to access all the contents or icons provided by Font-Awesome._** <br>
 </div>

 <div>

 **Syntax:** <code>&lt;i class="fa fa-github"&gt;&lt; /i &gt;<code>
 <br><br>

 **Outcome:** 
 
 <br><br>
 ![FontAwesome GitHub Icon](https://upload.wikimedia.org/wikipedia/commons/thumb/9/95/Font_Awesome_5_brands_github.svg/232px-Font_Awesome_5_brands_github.svg.png)
 <br><br>

**General Syntax:** <code>&lt;i class="fa fa-..."&gt;&lt; /i &gt;<code>
 </div>

 <details open>

 <summary>Note:</summary>

 * _No additional downloading is required to use Font Awesome._
 * _You can easily edit the icon using CSS._

 </details>

<hr>

## CUSTOM BULLETS


* What is Custom Bullets:

When you use unordered list in your HTML page you get same old boring black dot as bullet point. But guess what you can use your own custom bullets instead of that black dot. 

A prior note: It's really simple.

* How to add Custom Bullets:

Inside your CSS stylesheet ->

write:

<code>li { 
   list-style-image: url(file Name{e.g- cs.png}); 
   } 
</code>

Congratulations!! You have successfully changed your bullet to your own custom bullet.
And yes it is that simple.

<details open>
<summary>Note</summary>
<div>

* _To avoid mess it's preferred to use an image of small size._
* _Don't get carried away by it. Keep in mind that your webpage should be user friendly._
</div>
</details>

<hr>

## Custom Fonts

* What is Custom Fonts:

If you are familiar with CSS you know that you can change your fonts with the help of CSS.
If you don't know here's how you do it :
_In your CSS stylesheet:
   * Select the tag whose font you want to change (Here I will use 'p' tag)  
<code> p {font-family:'Gill Sans', 'Gill Sans MT', Calibri, 'Trebuchet MS', sans-serif;} </code>
When you write <code>font-family</code> in your text editor a list of fonts will pop-pop from where you can select a font per your wish.

But the thing is only limited fonts are available for you to choose. Though those are enough to help you through your day to day work. But sometimes you just cannot find the correct font which will suit you. For that we have a solution that is Custom Fonts.

* How to use Custom Fonts:

First goto [Google Fonts](https://fonts.google.com/).

   * Search your font or browse through the different fonts.
   * Select one font and click on it.
   * Click on Select Styles.
   * You can choose different versions(Bold,Italic,Font-Size,etc) of it.
   * Then click on the &plus; sign.
   * Copy the link in the &lt;_link_&gt; section and paste in the head section (&lt;head&gt;) of your HTML page.
   * Then copy the content in the _CSS rules to specify families_  section and then paste it in your CSS stylesheet:
   <code>p{font-family: 'Playfair Display', serif;}</code>

   note: Here I selected 'Playfair Display' font as an example.

Congratulations !!! You have used a custom font.


<hr>


So I hope you understood How to use Custom Fonts, Font Awesome and Custom Bullets.






 