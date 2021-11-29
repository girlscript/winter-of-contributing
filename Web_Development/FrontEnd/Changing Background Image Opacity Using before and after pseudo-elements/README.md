#  Changing Background Image Opacity Using before and after pseudo-elements

The `:before` and `:after` pseudo-elements are a great way to add extra styling to your website without adding extra HTML that you don't really need. In this article we will be looking at one such very common practical application of these pseudo-elements.

Before we move ahead let's first have a quick go through of what pseudo-classes and pseudo-elements really are.

### Pseudo-classes

[Pseudo-classes](https://developer.mozilla.org/en-US/docs/Web/CSS/Pseudo-classes) are used to style elements in a particular state. For example, you might want to change the color of an icon when the user hovers over it, or you might want a button to pop up when it gets clicked by the user all of this and more can be achieved using pseudo-classes like `:hover`, `:active`, etc.

**Syntax:**

```css
selector:pseudo-class {
  property: value;
}
```

### Pseudo-elements

In contrast to Pseudo-classes, [Pseudo-elements](https://developer.mozilla.org/en-US/docs/Web/CSS/Pseudo-elements) are used to style a specific part of the selected element. A pseudo-element is like adding or targeting an extra element without having to add more HTML. For example, the first letter of an element could be edited using `::first-letter` pseudo-element.

**Syntax:**

```css
selector::pseudo-element {
  property: value;
}
```

**NOTE:** After CSS3 came out it has become a norm to use single colon(:) for pseudo-classes and double colons(::) for pseudo-elements.

Now that we know what pseudo-selectors are, let us talk about what `::before` and `::after` pseudo-elements do.

## before and after pseudo-elements

In simple terms, [`::before`](https://developer.mozilla.org/docs/Web/CSS/::before) and [`::after`](https://developer.mozilla.org/docs/Web/CSS/::after) pseudo-elements lets you add content before and after a selected element respectively.

**Both these pseudo-elements create a child element inside an element only if you define a `content` property.**

Let us understand it better with an example.

Let us create a div and write "there" inside it.

```html
  <div>
    there
  </div>
```

![pseudo elements example](https://user-images.githubusercontent.com/86849664/143301412-aa53495d-a2e8-46e9-9ee6-284e489a6012.png)

Now let us create a before pseudo-element for this div and give it a content of "Hello"

```css
  div::before{
      content: "Hello";
    }
```

![before](https://user-images.githubusercontent.com/86849664/143301484-fe947b5c-92f4-4225-b83d-938556091865.png)

We can see that this adds "Hello" before the content of our div.

Let us now create an after pseudo-element for our div and give it a content of "💜"

```css
  div::after{
      content: "💜";
    }
```

![after](https://user-images.githubusercontent.com/86849664/143301531-f700111f-22c2-41d8-8900-331a12f5328f.png)

Similarly, the after pseudo-element inserts a "💜" after the content of our div.

**Things to know:** 

1. You can only insert a `::before` or `::after` element to an element that will accept child elements (elements with a document tree), so elements such as `<img />`, `<video>` and `<input>` won't work.

2) An element can have only a single before and after pseudo-element each.

But we don't usually use before and after pseudo-elements for this purpose. Instead these have more of a styling usage in our websites. We can create awesome effects and designs in our website using these two pseudo-elements. We are going to be discussing one such feature today.

Let us start by creating a div and adding a paragraph inside it and giving it a content of lorem ipsum.

```html
  <div>
    <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Libero quaerat vero eum, natus fugiat distinctio optio soluta, aperiam placeat amet consequatur cupiditate nisi inventore</p>
  </div>

```

![added paragraph](https://user-images.githubusercontent.com/86849664/143301565-1be19c5b-070d-4737-81cd-1ad60c5f882a.png)

Now let us give our webpage a background image.

```css
body{
	background-image: url(https://images.unsplash.com/photo-1498837167922-ddd27525d352?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=870&q=80);
    background-size: cover;
    background-repeat: no-repeat;
    background-position: center;
}
```

![added bg img](https://user-images.githubusercontent.com/86849664/143301618-286af0b6-2484-479b-bdb9-4b4d92ab1b9a.png)

Oops! Now, we can't see our text that well. Maybe if we try reducing the opacity of our background image we can resolve this issue.

```css
body{
	background-image: url(https://images.unsplash.com/photo-1498837167922-ddd27525d352?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=870&q=80);
    background-size: cover;
    background-repeat: no-repeat;
    background-position: center;
    opacity: 0.5;
}
```

![reduced opacity](https://user-images.githubusercontent.com/86849664/143301652-ccdaa622-049c-4429-bf3e-62fecbfec57b.png)

Well, this didn't work like we expected it to. Although the opacity of our background image did get reduced but this also reduced the opacity of our text. 

Now let us see how to solve this issue using our before and after pseudo-classes.

Let us create a before pseudo element for our div and give it an empty string as a content. Instead of before you can also create an after pseudo-element, that won't make any difference.

```css
div::before{
      content: '';
    }
```

Now, let us shift the code for our background-image from body to our before pseudo-element.

```css
div::before{
      content: '';
      background-image: url(https://images.unsplash.com/photo-1498837167922-ddd27525d352?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=870&q=80);
      background-size: cover;
      background-repeat: no-repeat;
      background-position: center;
    }
```

![added pseudo element](https://user-images.githubusercontent.com/86849664/143301717-bdb47f04-1b4a-4e99-90c9-5fb03abfa66e.png)

The background-image can't be seen now, that is because our pseudo-element doesn't have any dimensions yet. Let us give it a`position:absolute` and a height and width of 100% each so that it covers the entire screen height.

```css
div::before{
      content: '';
      background-image: url(https://images.unsplash.com/photo-1498837167922-ddd27525d352?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=870&q=80);
      background-size: cover;
      background-repeat: no-repeat;
      background-position: center;
      position: absolute;
      height: 100%;
      width: 100%;
    }
```

![white spaces](https://user-images.githubusercontent.com/86849664/143301791-ace0b8f8-28b5-4a80-8261-70a9be6a13e9.png)

But we can still see some white spaces. To fix that we will give it a `top: 0` and a `left: 0`

```css
div::before{
      content: '';
      background-image: url(https://images.unsplash.com/photo-1498837167922-ddd27525d352?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=870&q=80);
      background-size: cover;
      background-repeat: no-repeat;
      background-position: center;
      height: 100%;
      width: 100%;
      position: absolute;
      top: 0;
      left: 0;
    }
```

![white spaces removed](https://user-images.githubusercontent.com/86849664/143301815-4649d16c-86ff-42c5-a112-0c19d576cbe3.png)

Now, our image covers the screen properly but it is on top of our text at the moment. To fix this we will give our pseudo-element a `z-index: -1`.

```css
div::before{
      content: '';
      background-image: url(https://images.unsplash.com/photo-1498837167922-ddd27525d352?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=870&q=80);
      background-size: cover;
      background-repeat: no-repeat;
      background-position: center;
      height: 100%;
      width: 100%;
      position: absolute;
      top: 0;
      left: 0;
      z-index: -1;
    }
```

![z-index applied](https://user-images.githubusercontent.com/86849664/143301863-cc0e7289-23fe-4b6b-ac07-097ce859d751.png)

This makes our background-image go behind our text.

Now let us try decreasing the opacity of our background-image.

```css
div::before{
      content: '';
      background-image: url(https://images.unsplash.com/photo-1498837167922-ddd27525d352?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=870&q=80);
      background-size: cover;
      background-repeat: no-repeat;
      background-position: center;
      height: 100%;
      width: 100%;
      position: absolute;
      top: 0;
      left: 0;
      z-index: -1;
      opacity: 0.5;
    }
```

![final result](https://user-images.githubusercontent.com/86849664/143301913-068c7226-533c-4b85-80cb-6511331b5aad.png)

It works!

This was all about changing the background image opacity using before and after pseudo elements. For more such practical implementations checkout this [article by Habdul Hazeez](https://css-tricks.com/7-practical-uses-for-the-before-and-after-pseudo-elements-in-css/).

## Reference Links

- [Code with Harry's youtube video](https://www.youtube.com/watch?v=PlKG1fooswU)
- [MDN Docs on pseudo classes and pseudo elements](https://developer.mozilla.org/en-US/docs/Learn/CSS/Building_blocks/Selectors/Pseudo-classes_and_pseudo-elements)
- [Article on pseudo-elements on web.dev](https://web.dev/learn/css/pseudo-elements/)
