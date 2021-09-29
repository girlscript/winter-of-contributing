# z-Index

---

In CSS the z-Index is used to specify the stack order of an element. An element with greater stack order is always in front of an element with a lower stack order. For example:-

```html
<p>Hello World</p>
<p class = "a">This is a box with z index -1 <p>
```

```css
* {
  box-sizing: border-box;
}

body {
  width: 100px;
  margin: 0 auto;
}

p {
  background: #FFC996;
  border: 5px solid black;
  padding: 10px;
  margin: 10px;
}
.a{
  position: absolute;
  background: #844685;
  color:white;
  top: 0px;
  z-index: -1;
}
```
![image](https://user-images.githubusercontent.com/61539946/134820307-271ecef3-673e-4358-84bb-9a3ff24e3ce2.png)


It is clearly visible that the paragraph with z index of -1 is pushed behind other one.

The z-index are of three types:-

1. Keyword Value (auto)
2. Integer Values
3. Global Values 

The z-index property is specified as either the keyword auto or an <integer>.

### Keyword Value

In the keyword value, basically auto the box does not establish a new local stacking context. The stack level of the generated box in the current stacking context is 0. The auto z-index is basically the default value for a class in CSS.

### Integer Value

The integer value stack level of the generated box is user defined stacking order generally. This means that the z-indexes of descendants are not compared to the z-indexes of elements outside this element. For example:-

```html
<div class="boxes">
  <div class="redbox">red box</div>
  <div class="bluebox">blue box</div>
  <div class="greenbox">green box</div>
</div>
```

```css
.boxes {
  position: relative;
}
.redbox {
  position: relative;
  box-sizing: border-box;
  border: 5px solid yellow;
  z-index: 1;
  background: red;
  color: white;
  height: 8em;
  margin-bottom: 1em;
  margin-top: 2em;
}
.bluebox {
  position: absolute;
  z-index: 3; 
  box-sizing: border-box;
  border: 5px solid white;
  background: blue;
  color: white;
  width: 80%;
  height: 50%;
  left: 60px;
  top: 3em;
  margin-bottom: 1em;
}
.greenbox {
  position: absolute;
  z-index: 2; 
  box-sizing: border-box;
  border: 5px solid black;
  background: green;
  color: white;
  width: 20%;
  left: 65%;
  top: 25px;
  height: 7em;
  opacity: 0.9;
}
```
![image](https://user-images.githubusercontent.com/61539946/134820312-f9a2c20f-80f8-4ea9-93ae-0ee33746d101.png)


### Global Variable

these are generally used to inheriting, initializing, reverting or unsetting the z-index for particular classes in CSS. They are not used for specifying the properties of z-index.

 

---

## References

[https://developer.mozilla.org/en-US/docs/Web/CSS/z-index](https://developer.mozilla.org/en-US/docs/Web/CSS/z-index)

[https://www.w3schools.com/cssref/pr_pos_z-index.asp](https://www.w3schools.com/cssref/pr_pos_z-index.asp)
