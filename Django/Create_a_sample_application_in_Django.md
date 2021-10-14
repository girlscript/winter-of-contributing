# Create a sample application in Django

The project name and applications name in this tutorial are completely arbitrary.<br/> You can use the names you prefer.  

Before going through this tutorial, you are advised to check if you have activated your virtual environment and installed Django in it.  

<hr/>

## Step 1: Create a django project

Lets say you want to create a django project named `myfirstproject`.

First open Terminal or PowerShell or cmd<br/>
Navigate to your preferred directory through `cd` command <br/>
Now use the following command.
```
django-admin startproject myfirstproject
```

After executing the above command, some new files should be created like this.

```
myfirstproject/
    manage.py
    myfirstproject/
        __init__.py
        settings.py
        urls.py
        asgi.py
        wsgi.py
```
<hr/>

## Step 2: Create an app
After creating the Django Project, you should go ahead with creating your first app named `firstapp` in Django. But first change directory to your Django Project `myfirstproject`

```
cd myfirstproject
python manage.py startapp firstapp
```

After executing the above command, some more new files should be created and the project directory should start looking like this

```
myfirstproject/
    firstapp/
        __init__.py
        admin.py
        apps.py
        migrations/
            __init__.py
        models.py
        tests.py
        views.py
    manage.py
    myfirstproject/
        __init__.py
        settings.py
        urls.py
        asgi.py
        wsgi.py

```
<hr/>

## Step 3: Install your app into your project

Now it's time for you to include your new application `firstapp` into your project.<br/>
To do so, open `myfirstproject/myfirstproject/settings.py`.
Find the `INSTALLED_APPS`.
It should look like this.

```
INSTALLED_APPS = [
    'django.contrib.admin',
    'django.contrib.auth',
    'django.contrib.contenttypes',
    'django.contrib.sessions',
    'django.contrib.messages',
    'django.contrib.staticfiles',
]   
```

Add your application name `firstapp` in it. like this

```
INSTALLED_APPS = [
    'django.contrib.admin',
    'django.contrib.auth',
    'django.contrib.contenttypes',
    'django.contrib.sessions',
    'django.contrib.messages',
    'django.contrib.staticfiles',
    'firstapp',
]   
```
<hr/>

## Step 4: Create a view function in your application

Find `myfirstproject/firstapp/views.py`
and paste the below code inside the file.

```
from django.http import HttpResponse

def index(request):
    return HttpResponse("Hello, Django!")
```

Here we are using the string `Hello, Django!` as response to successful request to server. You can use any string you like or even use JsonResponse. It is like `Hello, World!`, the content does not matter but functioning does. <br/>
The same rule applies to function name `index`. you can change if you like but you would have to change while importing and using the function in `path` in next step.

<hr/>

## Step 5: Create urls.py in your application

Now go ahead and make a `urls.py` in `firstapp` folder that is `myfirstproject/firstapp/urls.py`.

```
myfirstproject/
    firstapp/
        __init__.py
        admin.py
        apps.py
        migrations/
            __init__.py
        models.py
        tests.py
        urls.py
        views.py
    manage.py
    myfirstproject/
        __init__.py
        settings.py
        urls.py
        asgi.py
        wsgi.py
```
Paste the below code inside the file.
```
from django.urls import path

from . import views

urlpatterns = [
    path('', views.index, name='index'),
]
```

Here if you have a different name for your view function, you should import and use that in first argument for `path`.<br/>
<hr/>

## Step 6: Include your urls.py in project urls.py

Find `myfirstproject/myfirstproject/urls.py` and <br/>
paste the line `path('myapp/', include('firstapp.urls')),` in `urlpatterns`.<br/>
Also import `include` in code as mentioned below.

```
from django.contrib import admin
from django.urls import include, path

urlpatterns = [
    path('myapp/', include('firstapp.urls')),
    path('admin/', admin.site.urls),
]
```

Here too, the first argument of `path` is arbitrary and you can use whatever you like .<br/>
Just be known, you would need to adjust accordingly in next steps if you do so. you can even use `""` (empty string) if you want to .
<hr/>

## Step 7: Run server

The project is ready to be served. <br/>
To start the server use the below command.

```
python manage.py runserver
```
When started the server, the terminal will give an output like
```
October 02, 2021 - 16:00:42
Django version 3.2.7, using settings 'myfirstproject.settings'
Starting development server at http://127.0.0.1:8000/
Quit the server with CONTROL-C.
```
And the server is started.

### Optional Steps

Don't worry if it is giving some warnings about migrations.<br/>
You can just close the server by `CONTROL-C` or `CTRL-BREAK` whatever is mentioned in terminal output.<br/>
run the below command and restart the server
```
python manage.py makemigrations
python manage.py migrate
```

If you want to run server with different port, use this command
```
python manage.py runserver 8080
```
<hr/>


## Step 8: Go to url

Open any browser (Google Chrome, Safari or anyone)<br/>
Copy the url link showed in terminal in previous step (`http://127.0.0.1:8000/`)<br/>
Add the first parameter used in `path` in Step 6 (`myapp/`)<br/>
So the final link becomes `http://127.0.0.1:8000/myapp/`<br/>
Copy and paste this link in your browser.

When opened the link `http://127.0.0.1:8000/myapp/`,<br/> you will see the response returned by index function in Step 4 that for this tutorial is  `Hello, Django!`
<hr/>

## Congratulations !! you have created your first Django project successfully.
<hr/>
