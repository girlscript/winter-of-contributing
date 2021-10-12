## CSS : Grid vs Flex

## Which is the better choice- Grid or Flex?

Let's dive deep into the concepts of two complimentary web layout technologies and unpack when and where to use CSS Grid and Flexbox.

| GRID                                                         | FLEX                                                         |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
| **CSS Grid** being a **two-dimensional** layout module with rows and columns, allows a web developer to work along both horizontal and vertical axes. <br/> <img src="https://i.imgur.com/xAjcbba.png" style="zoom:60%;" /> | **CSS Flex** being **one dimensional** can lay out its child items either as rows along horizontal axis or as columns along vertical axis, but not both. <br/>  <img src="https://i.imgur.com/YsDN4gy.png" style="zoom:60%;" /> |
| Defined by passing the property <br/> `.grid-container{ display: grid; }` | Defined by passing the property <br/> `.flex-container{ display: flex; }` |
| Grid takes a basis in the **layout-first** and ensures a precise content placement. <br/>`.container { `<br/>` display: grid; `<br/>`grid-template-columns: repeat(auto-fill, minmax(20rem, 1fr)); `<br/>` grid-gap: 2rem; ` } <br/> ![](https://i.imgur.com/EMbmIMQ.png) | Flexbox takes a basis in the **content-first** that means the box shrinks or expands according to the length of content. <br/>`.container { `<br/>` display: flex; `<br/>`flex-wrap: wrap; `<br/>` margin: -0.5rem; ` }`  <br/><br/> ![](https://i.imgur.com/oviOsur.png) |
| Grid has a **gap property**. So, one can create gutters between grid-items using grid-column gaps. | Flexbox doesn’t have such a property. So, one has to use **padding** and nested containers. |
| Convenient in creating complex and organized large scale layouts like websites involving broken, asymmetrical, or overlapping layouts. | Best suited to create small scale easy layouts and responsive web pages as it is perfect for centering items, creating responsive menus and so on. |
| CSS Grid is **not supported** by certain browsers.           | Flexbox is fairly **compatible** with most of the browsers.  |

There is no clear cut answer of CSS Grid vs Flexbox, henceforth, no explicit strategy to choose between them. In order to gain expertise in creating impressive web pages, one needs to be proficient in working with hybrid methods that use both Grid and Flexbox, side by side depending on the specific use case.
