# Transpile and Transpilers

## What is Transpiling
As we all know, [ECMAScript](../ECMAScript/README.md) brings updates every year since 2015 with some major as well as minor changes. Likewise, new JavaScript versions also bring syntaxial updates as well which is not possible to be [polyfilled](../Polyfills/README.md) as it would simply not get executed and will throw errors in old JavaScript engines, this is where a transpiler comes into play.

<br>

  ### <p align=center>Transformation + Compiling = Transpiling</p>
  
<br>
<br>

> ### **Transpiler is a tool that transforms code with newer syntax into older code equivalents and this process is called *Transpiling*.**

## Good practise while transpiling

By development practise, while Transpiling it is necessary to write code that follows the newer syntax but while deploying the project, use a transpiler similar to minifier or a linter to deploy the transpiled old syntax friendly program.

> Why should we do so, if we have transpiled code that is supported by every browsers?

This is because of the following given points below : 
*  Since newer versions of code are simply better, more readable and easily maintainable with respect to the older versions. Hence to achieve a better result, we should use this
* Transpiling only for older browsers, while serving the newer syntax to the updated browsers, we can get the advantage of browser performance optimizations.
* Using newer syntax is reliable in long run, as older syntax are getting too older and might return some error.

## Transpiling the code

Writing some code that is not understandable by latest browsers and transpiling that code, so that it becames available for every browsers.

Raw Code :

```js
    const person = {
        address :{
  	    street :"1234"
        }
    }
console.log(person?.address?.street)
// optional chaining (?.) is not supported by many browsers
```

Transpiled code :

```js
    "use strict";
    var _person$address;

    const person = {
        address: {
            street: "1234"
            }
        };

    console.log(person === null || person === void 0 ? void 0 : (_person$address = person.address) === null || _person$address === void 0 ? void 0 : _person$address.street);
```

## Popular Transpilers

After learning almost everything about transpiler, it would be very odd if we left without knowing some famous transpiler. Here are some of the best and most famous transpilers
* [Babel](https://babeljs.io/)
* [Traceur](https://github.com/google/traceur-compiler)

## Summary  

Transpiling means to convert newer syntax code into older equivalent code which is supportable by each and every browsers.

## Resources
You can try above code [here](https://babeljs.io/repl#?browsers=defaults%2C%20not%20ie%2011%2C%20not%20ie_mob%2011&build=&builtIns=false&corejs=3.6&spec=false&loose=false&code_lz=Q&debug=false&forceAllTransforms=false&shippedProposals=false&circleciRepo=&evaluate=false&fileSize=false&timeTravel=false&sourceType=module&lineWrap=true&presets=env%2Creact%2Cstage-2&prettier=false&targets=&version=7.15.8&externalPlugins=&assumptions=%7B%7D)

## Next step
To learn setup of babel in your repository, [click me](../Babel/README.md)


*Hope you enjoyed and gained some knowledge regarding transpiling*

__Contributor__ : [Harsh Anand](https://github.com/its-me-Harsh-Anand)