<div align="center"><img src= "Images\BEM.png"></div>

<div align="center"><h1>Block__Element_Modifier</h1></div>


> ## It is popular naming convention for ***Classes*** in **HTML** and **CSS**. It was invented at Yandex to develop sites which should be launched fast and supported for a long time. It helps to create extendable and reusable interface components.

***

##  Block
### It is an independent component in HTML that has it's own meaning and can be reused. It is more of like *parent element*.
### Examples: `<header>`, `<nav>`, `<form>` etc.

```
<header class="header">

<nav class="nav"></nav>

</header>

```

*** 

##  Element
### Elements are the child element of the **Block** component. It is mostly the text part inside the block. **Block and Elements are seperated by 2 double underscores `(block__element)`**.
### Examples: `<input>`, `<h1>`, `<button>` etc.

```
<header class="header">

<h1 class="header__title"> Introduction </h1>

</header>

```

***

##  Modifier
### As the name suggests it ***modify*** the appearance, state, behaviour of elements. **Elements and Modifiers are seperated by single undersocre (elements_modifiers)**
### Examples: `<disabled>`, `<color>`, `<active>` etc.

```

<form class="form">

<input type="text" class="form__name_disabled" disabled>

</form>
```
> NOTE: Some places you will find elements and modifiers are seperated using sinlge uderscore (element--modifiers).


***
##  Rules `<block-name__element-name_modifier-name>`

###  Names are written in lowercase Latin letters.
###  Words are seperated by a hyphen (search-form).
###  The **element** name is seperated from the **block** name by a double underscore (header__title).
###  The **element** name is seperated from the **modifier** name by a single underscore (form__input_disabled).
> ###  A double hyphen inside a comment (--) may cause an error during validation of an HTML document. So it is mostly avoided.

***
##  References
### [BEM Methodology](https://en.bem.info/methodology/)

***
##  Contributor [Vansh Sharma](https://github.com/VanshSh)
