# CSS Variables

**CSS variables are custom properties in which you can store a value and use it anywhere in the HTML code.**

They are a great way to reduce code redundancy and makes our code more readable. They allow us to define values for reuse throughout a CSS file — something that had previously only been possible with preprocessors like Sass and LESS. 

In this article we'll be looking at how to define and use CSS variables and how to manipulate them using JavaScript.

## Declaring and Assigning CSS Variables

We declare a CSS variable by writing the variable name starting with **--**

```css
element{
    --bg-color: pink;
}
```

This creates a variable with the name **bg-color** having value pink.

**Note that variable names are case-sensitive.** CSS variables can take on any valid CSS value.

Now, to use this variable in our code we need to assign it's value to a CSS property. We do it by using `var()`[^1] function.

[^1]: The job of the **var()** function is to find a particular CSS variable and apply it to a selector.

```css
element{
    --bg-color: pink;
    background-color: var(--bg-color);
}
```

This will set the background color of our element to pink.

Notice in the above example we are defining our variable inside a selector rule set(element{ }). This determines the *scope* of that variable.

### What is a scope?

It is the region in which the variable is accessible and can be used. CSS variables can have either *local* or *global* scope. Local CSS variables only work in the selector they're created inside whereas Global CSS variables  can be used anywhere in the stylesheet.

Let's understand this with the help of an example:

Let us create two divs with class first and second respectively.

```html
  <div class="first">
    <h1>First div</h1>
  </div>
  <div class="second">
    <h1>Second div</h1>
  </div>
```

![Creating div](https://user-images.githubusercontent.com/86849664/142156987-c6243052-a2db-4b38-87d1-e47be3738960.png)

#### Declaring Variable Locally

Now, let us create a variable bg-color inside our first div and give it a value of pink. We will then assign it to the `background-color` property of our first div like in the above example.

```css
.first{
      --bg-color: pink;
      background-color: var(--bg-color);
    }
```

![local scope](https://user-images.githubusercontent.com/86849664/142157068-05e15ac6-e33c-4570-bd3a-57b5d63492a4.png)

Works as expected. Now the background-color of our first div is set to pink.

But what if I try to set the background-color of our second div using this variable as well?

```css
.second{
      background-color: var(--bg-color);
    }
```

![local scope](https://user-images.githubusercontent.com/86849664/142157068-05e15ac6-e33c-4570-bd3a-57b5d63492a4.png)

Nothing happens. Why? Because we declared the variable inside our first div and thus it's scope is defined only inside the first div. In simple terms, this variable can only be used inside the first div since that is where it has been declared. This is what we mean by a variable with local scope. To use this variable inside our second div we either need to declare it inside our second div as well or declare our variable globally.

#### Declaring Variable Globally

We make global CSS variables by declaring them inside the **:root** pseudo-class. 

**:root** applies to the topmost element in the HTML [document object model](https://developer.mozilla.org/en-US/docs/Web/API/Document_Object_Model/Introduction) which contains all other elements i.e. `<html>`.

Let us declare our variable inside the :root pseudo-class and try using it in both our first and second divs.

```css
   :root{
      --bg-color: pink;
    }
    .first{
      background-color: var(--bg-color);
    }
    .second{
      background-color: var(--bg-color);
    }
```

![global scope](https://user-images.githubusercontent.com/86849664/142157150-02471097-970c-4274-9639-c57c0758ee35.png)

We can now see that both the divs have a pink background color. Thus by declaring a variable globally we can use it anywhere in our code.

**Note:** Programming languages like Python or C++ have an open field between functions where you have the option to define the global scope. Unfortunately, CSS has no such area due to the lack of a preprocessor. Therefore, in CSS, we use the :root pseudo-class.

## Fallback Values

While using val() function we have an option to write multiple fallback values as well. A fallback value is a CSS value that is applied if your CSS variable doesn't work for some reason. This could be due to a typo somewhere in your CSS, or the browser being unable to render the value you specify for your variable.

In the above example suppose you use bg-color variable without declaring it, in that case the divs will take their fallback values as background color instead.

```css
   .first{
      background-color: var(--bg-color, aquamarine);
    }
    .second{
      background-color: var(--bg-color, #994a99);
    }
```

![fallback values](https://user-images.githubusercontent.com/86849664/142157191-d5113712-bfdf-457d-9aa7-ce665033ad43.png)

## Changing CSS Variables Using JavaScript

To change a CSS variable using JavaScript we first need to select that variable.

We can select the root variables in CSS using `Document.documentElement`[^2] property.

[^2]: The documentElement property returns the documentElement of the document, as an Element object. For HTML documents the returned object is the **<html>** element.

Now, to change this variable we can use `style.setProperty`, `setAttribute` or `style.cssText` property.

```javascript
document.documentElement.style.setProperty('--bg-color', '#17c7ef');
```

<p align="center"> OR </p>

```javascript
document.documentElement.setAttribute("style", "--bg-color: #17c7ef");
```

<p align="center"> OR </p>

```javascript
document.documentElement.style.cssText = "--bg-color: #17c7ef";
```

![change using javascript](https://user-images.githubusercontent.com/86849664/142157239-3f8213ce-78d0-4d98-a7e7-6e72796e4fe5.png)
  
## Articles to Checkout

- [Emmanuel Ohans's article on freecodecamp](https://www.freecodecamp.org/news/everything-you-need-to-know-about-css-variables-c74d922ea855/)
- [Chris Coyier's article on updating a CSS variable using JavaScript](https://css-tricks.com/updating-a-css-variable-with-javascript/)

## Reference Links

- [MDN Docs Documentation](https://developer.mozilla.org/en-US/docs/Web/CSS/Using_CSS_custom_properties)

- [Jamie Juviler's Article on CSS Variables](https://blog.hubspot.com/website/css-variables)

- [Harish Rajora's complete guide to CSS variables](https://www.lambdatest.com/blog/guide-to-css-variables-with-examples/)

- [Beginner's Guide to CSS variables](https://www.codeinwp.com/blog/css-variables/)

- [Stackoverflow's discussion on updating a CSS variable using JavaScript](https://stackoverflow.com/questions/41370741/how-do-i-edit-a-css-variable-using-js/47172679)

