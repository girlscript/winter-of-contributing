# ***What is React.js?***
React.js is a JavaScript library using for the speedy creation of user interfaces. It is an important frontend creation tool in the form of a frame work where the user interface is already structured in the form of a bunch of independent, re-usable and isolated components (here, JavaScript objects), so that the developers can integrate it later into a complex and larger user interface.

React.js works in accordance to the algorithm of Tree Data Structure. It has a root component, say, ‘App’, where all the child components are rendered by importing each one of them.

E.g. :The frontend of a banking website given below (Fig : 1) is made using React.js. The entire website had been broken down into components like Navbar, HeroSection, Footer, etc and then integrated into the parent file named ‘index.js’.

![financizy ss](https://user-images.githubusercontent.com/79986094/133939494-c746bb7d-9426-4c4a-8f0f-1de740759552.png)

***Fig : 1***

![react js ss (2)](https://user-images.githubusercontent.com/79986094/133939513-87b6ab3d-6952-492f-9b71-ba6d6d06311e.png)

***Fig : 2***

# ***Why React.js?***
  1. It is one of the most popular and gradually evolving libraries which is 	also convenient to use among professional developers and used by top 	tech companies like, Facebook, Netflix, Google, etc.
  2. The ready-made framework requires less and hassle-free coding.
  3. Nowadays, React.js has become a hugely demanding skill for frontend developers and is hence a gateway towards highly paying jobs.
  4. Since react introduces the concept of destructuring a project into components, it becomes easier for multiple developers to contribute on the same project where each developer works on, say, one component.

# ***Advantages of using React.js***
  1. The use of re-usable, isolated and independent components make (i.e., 	the idea of breaking a larger problem into smaller sub-problems) helps 	to solve a huge and complex problem statement easily.
  2. The high demand of this skill by top tech companies sets the 	developers who know React at a position where they can opt for 	high paying jobs.
  3. Knowledge of JavaScript (more precisely, JSX) is  enough to build a 	React project.
  4. React keeps a Vitual Dom in its memory. Unlike the browser/real dom, 	this virtual dom is cheap to create. When we change the state of a 	component, we get a new react element. React.js will then compare this 	newly made element (reacts to the state change, hence the name react) 	and its child components to the previous state. It figures out the change 	and then it will update a part of the real dom to keep it in sync with the 	virtual dom. React makes the users work with the virtual dom and its 	features, unlike the real dom in browser in vanilla JavaScript.

# ***Disadvantages of using React.js***
  1. Due to the high pace of development and the subsequent poor 	documentation, it becomes difficult for the developers to decipher the 	framework.
  2. Knowledge of Node.js is necessary (since it is used to initialise the 	react library:  `npm-create -react -app myFirstReactProject`).
  3. The project thus created using React.js has a large size due to the    	presence of ‘node modules’ directory which contain various third party 	packages. These packages are retrievable online when mentioned in 	the ‘package.json’ file and hence has to be ignored using .gitignore 	during deployment.
  4. React.js, as far as fullstack development is considered, is not an all-in-	all tool.  That is, one still needs to learn some other technology to build 	the backend of the website, since React.js can be used to build the 	frontend part only.
