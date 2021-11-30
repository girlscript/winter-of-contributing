# Flask for Data Science

## Audio Link: [Flask for Data Science](https://drive.google.com/file/d/1RFqAEdSMyscyUtvRDMjT-GlQ2jK1QW1h/view?usp=sharing)

## What is Flask?
Flask is a web application framework written in Python. It is developed by Armin Ronacher, who leads an international group of Python enthusiasts named Pocco. Flask is based on the Werkzeug WSGI toolkit and Jinja2 template engine. Both are Pocco projects.

## Flask – Environment
## Prerequisite
Python 2.6 or higher is usually required for installation of Flask. Although Flask and its dependencies work well with Python 3 (Python 3.3 onwards), many Flask extensions do not support it properly. Hence, it is recommended that Flask should be installed on Python 2.7.

## Parameters

![image](https://user-images.githubusercontent.com/63282184/143590499-a88f693d-ce2c-4264-9562-c9c0bca802d0.png)

## Debug mode

A Flask application is started by calling the run() method. However, while the application is under development, it should be restarted manually for each change in the code. To avoid this inconvenience, enable debug support. The server will then reload itself if the code changes. It will also provide a useful debugger to track the errors if any, in the application.

The Debug mode is enabled by setting the debug property of the application object to True before running or passing the debug parameter to the run() method.
```
app.debug = True
app.run()
app.run(debug = True)
```

## Flask – Routing
Modern web frameworks use the routing technique to help a user remember application URLs. It is useful to access the desired page directly without having to navigate from the home page.

The route() decorator in Flask is used to bind URL to a function. For example −
```
@app.route(‘/hello’)
def hello_world():
   return ‘hello world’
   
   ```
Here, URL ‘/hello’ rule is bound to the hello_world() function. As a result, if a user visits http://localhost:5000/hello URL, the output of the hello_world() function will be rendered in the browser.

## Flask – Variable Rules
It is possible to build a URL dynamically, by adding variable parts to the rule parameter. This variable part is marked as <variable-name>. It is passed as a keyword argument to the function with which the rule is associated.
  
```
from flask import Flask
app = Flask(__name__)

@app.route('/hello/<name>')
def hello_name(name):
   return 'Hello %s!' % name

if __name__ == '__main__':
   app.run(debug = True)
  
```
   
## Converters & Description
   
![image](https://user-images.githubusercontent.com/63282184/143590914-44d7bd7a-df5a-4c2f-b50e-d368cb4f2eae.png)

## Flask – URL Building
The url_for() function is very useful for dynamically building a URL for a specific function. The function accepts the name of a function as first argument, and one or more keyword arguments, each corresponding to the variable part of URL.
   
## Flask – HTTP methods
   
   ![image](https://user-images.githubusercontent.com/63282184/143591014-e606716f-3e2c-44ec-9c32-12ebecec998c.png)

   
## Advantages of the Flask framework
Flask is considered the best framework for light web application serving, it is a lightweight framework and can also be useful to the developer if he or she chooses a web interface to the default system based UI.

## Disadvantages of flask
As it is easy for an amateur or a beginner to learn and create a web development with flask framework, in the same way, a bad developer will write worse code, or in the case of a young developer in training, it will be easier for him to use low-quality code creating a "bad web application".
