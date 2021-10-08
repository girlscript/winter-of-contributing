# Vue Components Example

Here in this code example I have created a simple into card component which is every commonly used in website as shown below:
``````
Vue.component('IntroCard',{
  
    template: `
    <div>
    <div class="card">
      <div class="card-header">
        <img :src="img" alt="">
      </div>
      <div class="card-body">
       <p>
        Lorem ipsum dolor sit, amet consectetur adipisicing elit. Esse nesciunt ullam tempora veniam eos ratione. 
       </p>
       </div>
    </div>
</div>
    `,
    props: {
        img: {
            type: String,
            default: '../assets/../assets/images(2).jpg'
        }

    }
      
})

``````
In the above code "Intro Card" is the "component-name". In the template I have added the body of the card. In the props object I have one prop "img" which will be the src of the image to be added in the component. I have also assigned it a "default" value in case no data is passed to component.

Now we will use the IntroCard component in our project as shown below:

`````
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="./style.css">
</head>
<body>
     <div id="app">
         <h1>Meet Our Team</h1>
         <div class="app-body">                
                <intro-card></intro-card>           
         </div>        
    </div>
     <script src="https://cdn.jsdelivr.net/npm/vue@2.6.14/dist/vue.js"></script>
     <script src="./index.js"></script>
</body>
</html>

`````
Now, look in the above code I have called the IntroCard component in the "app div" which is our application body. The output of this above code is:

<div style="display: flex; justify-content: center; align-items: center; margin-bottom: 10px;">
    <img src="../assets/Output(1).png" style="height: 400px; width: auto; border-radius: 10px;">
</div>

Now, we will use the component again but this time we will pass the src of the image in the component as shown below:


````
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="./style.css">
</head>
<body>
     <div id="app">
         <h1>Meet Our Team</h1>
         <div class="app-body">
                
                <intro-card></intro-card>
                <intro-card img="../assets/images(3).jpg"></intro-card>
                          
         </div>        
    </div>
     <script src="https://cdn.jsdelivr.net/npm/vue@2.6.14/dist/vue.js"></script>
     <script src="./index.js"></script>
</body>
</html>

````

Here in the above code, in the component tag we have passed the src of the image in the "img prop" of the component. The output of the above code is:

<div style="display: flex; justify-content: center; align-items: center; margin-bottom: 10px;">
    <img src="../assets/Output(2).png" style="height: 400px; width: auto; border-radius: 10px;">
</div>


We can use the components as many times as we want in the project as shown below:


``````

 <div id="app">
         <h1>Meet Our Team</h1>
         <div class="app-body">
                <intro-card img="../assets/images(1).jpg"></intro-card>      
                <intro-card></intro-card>
                <intro-card img="../assets/images(3).jpg"></intro-card>           
         </div>        
    </div>

``````


Output of the above code will be:


<div style="display: flex; justify-content: center; align-items: center; margin-bottom: 10px;">
    <img src="../assets/Output(3).png" style="height: 400px; width: auto; border-radius: 10px;">
</div>


Now observe the output all the images are different in each card this is because we have passed the "src" of the other two images by ourself whereas in the "second card" the default value of the prop was used in the component.


 If we have not used the components in the project the code would have looked this this:


``````
<div id="app">
         <h1>Meet Our Team</h1>
         <div class="app-body">
            
            <div class="card">
                <div class="card-header">
                  <img src="../assets/images(1).jpg" alt="">
                </div>
                <div class="card-body">
                 <p>
                  Lorem ipsum dolor sit, amet consectetur adipisicing elit. Esse nesciunt ullam tempora veniam eos ratione. 
                 </p>
                 </div>
            </div>


            <div class="card">
                <div class="card-header">
                  <img src="../assets/images(2).jpg" alt="">
                </div>
                <div class="card-body">
                 <p>
                  Lorem ipsum dolor sit, amet consectetur adipisicing elit. Esse nesciunt ullam tempora veniam eos ratione. 
                 </p>
                 </div>
              </div>


              <div class="card">
                <div class="card-header">
                  <img src="../assets/images(3).jpg" alt="">
                </div>
                <div class="card-body">
                 <p>
                  Lorem ipsum dolor sit, amet consectetur adipisicing elit. Esse nesciunt ullam tempora veniam eos ratione. 
                 </p>
                 </div>
              </div>  
            
         </div>        
    </div>

``````

Now as you can see how much our duplicate code has been removed by using the components in our application. This is one of the biggest advantage of using components.

This is a small example of how we can reuse the components in our code based on the needs of our project. 

I hope you were able to understand how to create and use the components in Vue.js.   