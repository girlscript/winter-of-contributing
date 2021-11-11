<!-- What are History Mode in routes in Vue.js?
How does this work?
Why there is a need for this?
What are the advantages to use it and when to use it?
How to implement this with code (also give theory explanation of code)?
You can take 2-3 examples with codes of different types to explain this. -->

# History Mode in routes in Vue.js

The default mode for the vue-router is hash(#) mode, as it uses the URL hash to simulate a full URL so that the page won’t be reloaded when the URL changes.

To get rid of the hash mode, we can use the router’s history mode, which leverages the history.pushState API to achieve URL navigation without a page reload.
