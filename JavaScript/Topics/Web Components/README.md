# Web components

## Introduction

![Web components image](webComponents.png)

When we begin our journey as a developer, we learn that we should reuse code as much as possible. In the field of coding with C/C++, Java, Python etc. we also use functions and reuse them whereever we need to save our time and lines of code. For front-end development, though, it is not so easy. When you have to create custom markup structures, they end up in being complex in style and script and using them multiple times can turn your page into a mess. Web Components, that are called the building blocks of web applications, promise to solve such problems.

> ### <p align = center>Web components are a set of web platform APIs that allow us to create custom, reusable and encapsulated HTML tags for web pages and web apps.</p>

### Specifications

Web components incorporate four main technologies that can be used together to create versatile custom elements with encapsulated and reusable functionality. These are-

1. Custom Elements
2. Shadow DOM
3. HTML Template
4. ES Modules

### 1. Custom Elements

- One of the key features of the Web Components standard is the ability to create custom elements that encapsulate your functionality on an HTML page, rather than having to make do with a long, nested batch of elements that together provide a custom page feature.

- Custom elements are in essence fully-valid HTML elements, just like `<div>`, or `<article>`, but they have custom templates, behaviors and tag names (e.g. `<one-dialog`>) made with JavaScript APIs. They would always have a hyphen in their name, like `<calendar-slider>` and browser vendors have committed to create no new built-in elements containing a dash in their names to prevent conflicts. They can be [used out-of-the-box](https://custom-elements-everywhere.com/) with today’s most popular frameworks, including Angular, React, Vue, etc. with minimal effort. Custom elements contain their own semantics, behaviors, markup that can be checked in the [HTML Living Standard specification](https://html.spec.whatwg.org/multipage/custom-elements.html#custom-elements).

**Example :-** 

```js
class ComponentExample extends HTMLElement {
    connectedCallback() {
        this.innerHTML = `<h1>Hello Web components</h1>`;
    }
}customElements.define('component-example', ComponentExample);
```

- Custom elements (in this case, `<component-example>`) must in some way extend an HTMLElement in order to be registered with the browser.


### 2. Shadow DOM

- The shadow DOM is an encapsulated version of the DOM. It isolates DOM fragments from one another, including anything that could be used as a CSS selector and the corresponding styles, in a somewhat similar to `<iframe>` manner. At the same time, when we create a shadow root, we still have total control over that part of our page, but scoped to a context. It is critically important as it ensures that a component will work in any environment even if the page has other CSS or JavaScript. More information on how to use encapsulated style and markup in web components can be found in the [shadow DOM specification](https://developer.mozilla.org/en-US/docs/Web/Web_Components/Using_shadow_DOM).

**Example :-**

To attach a shadow root, write the code such as below example

```js
const shadowRoot = document.getElementById('shadow').attachShadow({ mode: 'open' });
shadowRoot.innerHTML = '
    <style>
        button {
            color: purple;
        }
    </style>
    <button id='button'>Switch to use the CSS color purple <slot></slot></button>'

```

### 3. HTML Template

- The HTML `<template>` element allows us to stamp out reusable templates of code inside a normal HTML flow that is not immediately rendered, but can be used at a later time when called upon. You can write a template of any shape or structure that could be created at a later time. To learn how to declare fragments of markup that go unused at page load, but can be instantiated later on at runtime you can check the [HTML template element specification](https://html.spec.whatwg.org/multipage/scripting.html#the-template-element/).

**Example :-**

```js
<template id="movie-template">
<ul id="movies"><li>
    <span class="name"></span> &mdash; 
    <span class="year"></span> &mdash; 
    <span class="director"></span>
</li></ul>
</template>
```

- The example above doesn’t render any content until a script has consumes the template, instantiates the code and tells the browser what to do with it.

### 4. ES Modules

- ES Modules is the recent ECMAScript standard for working with modules. The standardization of a module system for browsers completed with [ES6](https://flaviocopes.com/es6/) and browsers started implementing it, so that now ES Modules are supported in Chrome, Safari, Edge and Firefox (since version 60). Modules as collections of smaller components that can be reused in our application, let developers encapsulate all kinds of functionality, and expose this functionality to other JavaScript files, as libraries. The process of including JS documents in a standards based, modular, performant way is defined in the [ES Modules specification](https://html.spec.whatwg.org/multipage/webappapis.html#integration-with-the-javascript-module-system).

**Example :-**

```js
// From component folder
import { Users } from '../components/users.js';
import { Issues } from '../components/issues.js';

class Dashboard {
    loadDashboard(){
        // Create new instances
        const users = new Users();
        const issues = new Issues();
        console.log('Dashboard component is loaded');
    } 
}

export { Dashboard }
```

## Benefits of web components

Web components provide multiple benefits for developers and business. Upto this point, it is clearly visible how web components are beneficial. Let's learn the benefits in some points.

- **Reusability** : Once the web component created, it can be imported, used and reused in applications.

- **Declaration** : We can more easily declare components on our page

- **Readability** : Reusable code reduces the application size, helps in simplfied debugging and makes it more readable with less lines of code.

- **Composability** : Shadow DOM allows composing applications with smaller chunks of code.

- **Scoping** : Shadow DOM ensures DOM and CSS scoping so that styles don't leak our and componwnt DOM is local.

- **Interoperability** : Native web components are interoperable at the browsers lowest (DOM) level.

- **Faster Deployments** : Having ready-made code blocks, developers will be able to build and deploy applications more quickly. This leads to less time devoted to developing new features.

- **Quality improvement** : As a by-product of reusing and reviewing the same code multiple times, the overall quality will improve in the course of time.

## How to use web components?

- For using a custom element, we can simply import it and use the new tag in the HTML document. If you are familiar with JavaScript framework such as React, Angular, Vue etc. you can relate importing and exporting of component and using it. 

- The ways to install custom elements, though can vary. Most elements today can be installed with NPM, but it is recommended to look at the README for the commands to install the specific element. NPM also handles installing the components’ dependencies.

## Libraries for building web components

There are many libraries that already exists that make it easier to build web components. Some of them are as follows :

- [Polymer](https://polymer-library.polymer-project.org/3.0/docs/devguide/feature-overview) - It provides a set of features for creating custom elements.

- [Angular](https://angular.io/guide/elements#transforming-components-to-custom-elements) - It provides the `createCustomElement()` function for converting an Angular component, together with its dependencies to a custom element.

- [Stencil](https://stenciljs.com/) - It generates standards-compliant web components.

- [Slim.js](https://slimjs.com/#/welcome) - It provides data-binding and extended capabilities for components, using ES6 native class inheritance.

- [Hybrids](https://github.com/hybridsjs/hybrids) - It is a UI library for creating Web Components.

## Conclusion

HTML and DOM specs already add features to support web components, letting web developers easily extend HTML with new elements with encapsulated styling and custom behavior. This proves that web components are already our present and it is time we start using them in applications.

## Resources

- [Web Components](https://developer.mozilla.org/en-US/docs/Web/Web_Components)

- [NPM](https://www.npmjs.com/)

- [Custom Elements](https://developer.mozilla.org/en-US/docs/Web/Web_Components/Using_custom_elements)

- [Shadow DOM](https://developer.mozilla.org/en-US/docs/Web/Web_Components/Using_shadow_DOM)

- [HTML Template](https://developer.mozilla.org/en-US/docs/Web/Web_Components/Using_templates_and_slots)
- [ES Modules](https://www.webcomponents.org/specs)

__Contributor__ : [Harsh Anand](https://github.com/its-me-Harsh-Anand)
