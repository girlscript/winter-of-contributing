# TAILWIND CSS

Tailwind CSS is one of the most popular frameworks of CSS. It is quite different from Bootstrap and other such frameworks because of its utility-first CSS classes structure.

Tailwind CSS was first released on 1st November, 2017 by Adam Wathan on Github as an open source project. By August 2020, it became a fully feldged CSS framework.

Let us now look at how we add Tailwind CSS to our project. We need to make sure that Tailwind is sucessfully installed and our computer also contains Node.js and NPM. The syntax is as follows:

```
    @tailwind base;

    @tailwind components;

    @tailwind utilities;
```

We need to create a new CSS file and add the above commands to the CSS file.

After adding these commands we need to generate a boilerplate. For this, we can use this particular command:

```
    npx tailwindcss init
```
A file called <b>tailwind.config.js</b> will be generated. The file will contain the following content:
```
    module.exports = {
    future: {},
    purge: [],
    theme: {
    extend: {},
    },
    variants: {},
    plugins: [],
```

Now, we need to add two more plugins `tailwindcss` and `autoprefixer`.

For processing our CSS with tailwind the command below can be used:
<br>[Let us say the CSS file name is index.css]

```
    npx tailwindcss build index.css -o output.css
```
A new output file will be created. After this link this output.css file in the main index.html file.

Let us now see what the important classes in Tailwind CSS mean.
Here are a few classes,

- _flex_ - The `display: flex` property is applied to a particular element.
- _items-center_ - The elements are vertically alligned in a navbar using the property of a flexbox.
- _p-6_ - Padding is added on all sides in case of the nav element.
- container - Sets the maximum width of an element to match the minimum width of the current breakpoint.
- _block_ - The `display:block` property is applied to a certain HTML tag.
- _mt-4_ - Margin is applied on top of an element.

These are a few of the most important classes of Tailwind CSS.

Let us look at the advantages of Tailwind CSS:

1. <b>Highly Customizable:</b> Tailwind CSS has a default configuration. However, this configuration can be easily overriden using a simple command. As a result, we can customize it as per our choice.

2. <b>Common Utility Patterns:</b> We do not need to waste our time thinking about applicable class names. Also, we donot need to organize or cascade the classes. This is because, Tailwind CSS comes with common utility patterns.

3. <b>Optimized Using PurgeCSS:</b> Optimization can be performed using PurgeCSS. As a result, the file size is highly reduced.

4. <b>Building Complex Responsive Layouts Freely:</b> It uses a mobile first approach and thus makes it easier to make responsive websites easily.Several complex responsive layouts are created using this particular framework.

5. <b>Facilitates Fluid Community Interaction:</b> A very important feature of this responsive website is that we can interact with other developers through the tailwind CSS community. As a result, we will be able to take help, help others as well as share ideas making out work easier and more creative.

Few of the important features of Tailwind CSS are its components which includes:

- Forms
- Navigations
- Pages
- Buttons
- Headers
- Badges 

<i>In addition to this, it also has dark mode----light mode features.</i>

I can conclude by saying that we gained a lot of knowledge about the implementation of CSS, as well as about its various important classes, and several of its interesting features.