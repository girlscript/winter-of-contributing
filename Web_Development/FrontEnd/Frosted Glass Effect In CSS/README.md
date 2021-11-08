# Frosted Glass Effect in CSS

Frosted glass effect or better known as **Glassmorphism** has been a trending UI feature for quite sometime now. Mac OS is famous for its frosted glass effect and Windows 10 have also got frosted glass effect implemented along with websites like Github. 

Today we will be seeing two ways to get a frosted glass effect using pure CSS.  

<p align="center"><img src="https://user-images.githubusercontent.com/86849664/140638034-29b6970c-2629-4cbb-a552-7e7026584433.png" style="width: 900px; height: 600px"></p>

<p align="center">Image Source: <a href="https://dribbble.com/shots/14815772-Side-bar-Menu-Navigation">Anton Olashyn's design on Dribbble</a></p>

## Method One

Let's start by creating a div with class wrapper in our html code.

```html
<div class="wrapper"></div>

```

Now we'll remove the margin and padding for all the elements and give our html and body a height of 100vh so that they cover the entire screen.

```css
   * {
        margin: 0;
        padding: 0;
      }
body,html {
            height: 100vh;
          }
```

Now let's add a background image. 

```css
body {
        background-image: url("Frosted Glass effect in CSS/assets/background.png");
     }
```

![image tiling](https://user-images.githubusercontent.com/86849664/140638067-558d8028-d9f5-460f-8751-fc43e22e296a.png)

We can see image tiling here. To remove this we will use `background-size: cover`, also we don't want our image to repeat so we will use `background-repeat: no-repeat;`.

```css
body {
        background-image: url("Frosted Glass effect in CSS/assets/background.png");
        background-size: cover;
        background-repeat: no-repeat;
      }
```

![background image cover](https://user-images.githubusercontent.com/86849664/140638082-2d35c8e0-c7cf-4fe9-b998-b283ad09a290.png)

Now let's style our wrapper div. We will give it some height and width and also set its background to `inherit`[^1] . To make it look better we will give it a border and border radius. **We will also give it a position property so that when we create our overlay it doesn't cover the entire screen but fit inside our wrapper instead.** In this case I am setting it to `position: absolute`.

[^1]: Which will make it inherit the background of its parent(body)

```css
.wrapper {
            height: 320px;
            width: 600px;
            background: inherit;
            border-radius: 15px;
            border: 1px solid rgba(43, 43, 43, 0.568);
            position: absolute;
	}
```

![wrapper 1](https://user-images.githubusercontent.com/86849664/140638094-6676d963-c0ed-42ce-9090-863ac3e9f68c.png)

But the div background doesn't look so nice. Instead of the full background appearing inside our div, I want it to only take the part of image that's behind the div. For that we will give the `background-attachment: fixed` property to our body.

```css
 body {
        background-image: url("Frosted Glass effect in CSS/assets/background.png");
        background-size: cover;
        background-repeat: no-repeat;
        background-attachment: fixed;
      }
```

![wrapper fixed](https://user-images.githubusercontent.com/86849664/140638102-f3636b07-04b1-4c9f-8d5e-0dd77d49d455.png)

Much better. Now comes the main part, we will now create an overlay using before pseudo-class to give our div the frosted glass effect.

**NOTE:**

- For before pseudo-class to work we need to give it a content property. In our case since we don't want any content we will leave it to be empty(`content: ''`).
- It also requires a display property for it to have size and shape. To make things simple we will be giving it a `position: absolute`, so that it will fit inside its parent container(wrapper div).

```css
.wrapper:before {
        position: absolute;
        content: '';
        background: inherit;
        left: 0;
        right: 0;
        top: 0;
        bottom: 0;
        box-shadow: inset 0 0 0 3000px rgba(150, 150, 150, 0.192);
        filter: blur(10px);
    	border-radius: 15px;
      }
```

We are using box-shadow property to apply a grayish overlay and blur to blur that overlay. Also we are giving it a border radius similar to its parent for symmetry.

![overlay 1](https://user-images.githubusercontent.com/86849664/140638111-b906fcea-8033-489d-9d5c-d9ef9672ed2c.png)

![overlay zoom](https://user-images.githubusercontent.com/86849664/140638119-df6e2a3f-0eb5-42b8-9e10-c94f4a330e85.png)

We can still see some unblurred edges though. To fix that we will first make the size of our overlay slightly bigger than the size of our wrapper and then set its `left: -25px` and `top: -25px`

```css
.wrapper:before {
        position: absolute;
        content: '';
        background: inherit;
        height: 370px;
        width: 650px;
        left: -25px;
        right: 0;
        top: -25px;
        bottom: 0;
        box-shadow: inset 0 0 0 3000px rgba(150, 150, 150, 0.192);
        filter: blur(10px);
    	border-radius: 15px;
      }
```

![edge correction 1](https://user-images.githubusercontent.com/86849664/140638124-6b72ee4a-7703-488a-bb0a-45ab898bdbd3.png)

Lastly to make the edges clear and visible we need to set our wrapper div's `overflow: hidden` so that the part of overlay going outside our wrapper gets hidden.

```css
 .wrapper {
        height: 320px;
        width: 600px;
        background: inherit;
        border-radius: 15px;
        border: 1px solid rgba(43, 43, 43, 0.568);
        position: absolute;
        overflow: hidden;
      }
```

![edge correction 2](https://user-images.githubusercontent.com/86849664/140638131-bfe84958-3c67-4894-bb03-34f24e533afb.png)

For the final step, we will be using flexbox to center our div in our body.

```css
body {
        background-image: url("Frosted Glass effect in CSS/assets/background.png");
        background-size: cover;
    	background-repeat: no-repeat;
        background-attachment: fixed;
        display: flex;
        justify-content: center;
        align-items: center;
      }
```

![flexbox center](https://user-images.githubusercontent.com/86849664/140638141-eeeba526-a45d-4bd1-a931-e584ba8d90f4.png)

Our frosted glass effect card is now ready. But there is one last problem we need to look at. If we try to write something inside our div wrapper, it goes behind the pseudo element and cannot be seen on top. To fix this issue we will have to create another div inside our frosted glass div, inside which we will put our content. Then we have to set the position of this content div to absolute.

```html
	<div class="wrapper">
      <div class=content>
        <h1>Frosted Glass Effect</h1>
      </div>
    </div>
```

```css
.content{
        position: absolute;
      }
```

![Final card](https://user-images.githubusercontent.com/86849664/140638159-48bdcca6-5ba5-4e15-aefa-78951439599d.png)

Voila~ 

Our Frosted glass effect card is ready!

## Method Two

The second method requires a lot lesser CSS but doesn't have a good browser support.

![method 2 support](https://user-images.githubusercontent.com/86849664/140638172-f75def6b-84d7-4511-9199-65eac36c1198.png)

<p align="center">Image Source: <a href="https://caniuse.com/css-backdrop-filter">Caniuse Website</a></p>

For this we will create a wrapper div and apply a semi-transparent background color to it and then give it a `backdrop-filter:` property.

```html
	<div class="wrapper">
        <h1>Frosted Glass Effect</h1>
    </div>
```

```css
.wrapper{
        background: rgba(255, 255, 255, 0.192);
        backdrop-filter: blur(10px);
        height: 250px;
        width: 600px;
        border-radius: 15px;
        border: 1px solid rgba(43, 43, 43, 0.568);
      }
```

![method 2](https://user-images.githubusercontent.com/86849664/140638175-4d8156f7-7707-47e2-a0bf-f592ef478418.png)

## Tips for using Glassmorphism

- First thing to keep in mind while using glassmorphism is to not overuse it or it may cause accessibility issues due to its blur and transparency. The effect looks best when used on only one or two elements!

- To make the effect aesthetically pleasing make sure to use vivid and gradient colors as background. Avoid using monochrome backgrounds.

- You can try experimenting with geometric elements. They will add a playful and attractive look to your page.

  

  **Glassmorphism can make a website or an app look more attractive, when used in the right way. It can improve UI accessibility so much, that the navigation gets easier even for people with visual problems. Take the best out of glassmorphism by playing around with it and having fun!**

## Reference Links

- [Usama Tahir's medium blog](https://medium.com/hackernoon/how-to-do-css-only-frosted-glass-effect-e2666bafab91)

- [Eyas Newsroom's article of Glassmorphism](http://www.eyasdesign.com/glassmorphism-what-you-need-to-know)

- [Zoltán Szőgyényi's blog on freecodecamp](https://www.freecodecamp.org/news/glassmorphism-design-effect-with-html-css/)

- [Why does pseudo element require display attribute discussion on Stackoverflow](https://stackoverflow.com/questions/58082495/why-does-my-before-element-only-display-if-i-use-position-absolute)

- [Absolute position affects Width discussion on Stackoverflow](https://stackoverflow.com/questions/15763027/absolute-position-affects-width)

  

