<img src="https://i.imgur.com/FH4LRP3.png?1"></img>

<h1 align="left">Introduction to JSX Styling</h1>

<span>Attributes are those which add features in JSX. Such as href, className, style, etc.</span><br/>

<span>Generally, there are <i>three</i> ways to style JSX. They are:-</span>

   <ul>
   <li>Inline CSS</li>
   <li>CSS-in-JS</li>
   <li>CSS Stylesheet</li>
   </ul>
<br/>
<h2 align="left">Inline CSS</h2>

<span>Inline CSS is assigned by using tag `style` with camelCased keys.</span><br/> <span>Although it is not a recommended way to style React App/Components with CSS.</span><br/>

<u><h3>Example</h3></u> <br/>

```
import React from 'react';

export default function App() {
return (
  <div >
    <span style={{color:'green',fontSize:"3rem"}}>GirlScript</span>
  </div>
);
}
```

<u><h3>Output</h3></u>

<img src="https://i.imgur.com/V8Ssz5g.png"></img> <br/><span>Link to the <a href="https://codesandbox.io/s/inline-css-y1hvm">code</a></span> <br/> <br/>

<h2 align="left">CSS-in-JS</h2>
<span>In React you can use CSS by creating an object with all styling information inside it, and refer to it in the style attribute.</span><br/>
<span>Although this functionality is not a part of React, it is provided by third-party libraries.</span>
<br/>
<u><h3>Example</h3></u>
<br/>

```
import React from "react";

export default function App() {
const xyz={ color: "green", fontSize: "3rem" }
  return (
    <div>
      <span style={xyz}>Hello World</span>
    </div>
  );
}
```

<u><h3>Output</h3></u>

<img src="https://i.imgur.com/mEpABG7.png"></img><br/> <span>Link to the <a href="https://codesandbox.io/s/css-in-js-f7wt4">code</a></span> <br/>

<h2 align="left">CSS Stylesheet</h2>
<span>CSS can be written in separate  *.css file and used by importing it in the application by referring to them using className.</span>
<br/>
<u><h3>Example</h3></u><br/>
<b>CSS File</b>
<br/>
<br/>

```
/* styles.css file */
.header {
color: green;
font-size: 3rem;
}
<br/><br/>
```

<b>App.js File</b> <br/> <br/>

```
import React from "react";
import './styles.css';
export default function App() {
  return (
    <div>
      <span className="header">Hello World</span>
      </div>
  );
}
```

<u><h3>Output</h3></u>

<img src="https://i.imgur.com/mEpABG7.png"></img><br/>

<span>Link to the <a href="https://codesandbox.io/s/stylesheet-cxr1p">code</a></span> <br/> <br/>

<center>
<img width="50%" src="https://i.imgur.com/vQk0xE2.png"></img>
</center>
<i>
<h1><b>Note:</b></h1><br/>
</i>
<h2>Difference between index.css and App.css in default app created by <i><b>create-react-app</i></b>  </h2>
<span>index.css is a global CSS that will applied to every component but App.css is used in App.js Component.</span>
