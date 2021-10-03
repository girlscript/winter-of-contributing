<div align="center"><img src= "Images\BEM.png"></div>

<div align="center"><h1>Block__Element_Modifier</h1></div>


> ## It is popular naming convention for ***Classes*** in **HTML** and **CSS**.

***

## :pushpin: Block
### It is an independent component in HTML that has it's own meaning and can be reused. It is more of like *parent element*.
### :label: Examples: `<header>`, `<nav>`, `<form>` etc.

```
<header class="header">

<nav class="nav"></nav>

</header>

```

*** 

## :pushpin: Element
### Elements are the child element of the **Block** component. It is mostly the text part inside the block. **Block and Elements are seperated by 2 double underscores `(block__element)`**.
### :label: Examples: `<input>`, `<h1>`, `<button>` etc.

```
<header class="header">

<h1 class="header__title"> Introduction </h1>

</header>

```

***

## :pushpin: Modifier
### As the name suggests it ***modify*** the appearance, state, behaviour of elements. **Elements and Modifiers are seperated by single undersocre (elements_modifiers)**
### :label: Examples: `<disabled>`, `<color>`, `<active>` etc.

```

<form class="form">

<input type="text" class="form__name_disabled" disabled>

</form>
```
> NOTE: Some places you will find elements and modifiers are seperated using sinlge uderscore (element--modifiers).


***
## :scroll: Rules `<block-name__element-name_modifier-name>`

### :point_right: Names are written in lowercase Latin letters.
### :point_right: Words are seperated by a hyphen (search-form).
### :point_right: The **element** name is seperated from the **block** name by a double underscore (header__title).
### :point_right: The **element** name is seperated from the **modifier** name by a single underscore (form__input_disabled).
> ### :point_right: A double hyphen inside a comment (--) may cause an error during validation of an HTML document. So it is mostly avoided.

***
## :books: References
### :round_pushpin: [BEM Methodology](https://en.bem.info/methodology/)

***
## :pencil2: Contributor [Vansh Sharma](https://github.com/VanshSh)
