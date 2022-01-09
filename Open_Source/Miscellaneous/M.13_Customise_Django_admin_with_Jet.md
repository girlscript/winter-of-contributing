# Everything you should know about Django-JET 🚀

As we are talking about open source , Django being one , is high-level python backend framework which is not only open source but also offers us a  number of features which serves as crucial part for an application . It is Built and forged by skilled and experienced developers.

#

<a href="https://ibb.co/xjmyKBV"><img src="https://i.ibb.co/QN8Z7Ts/ezgif-com-gif-maker.png" alt="ezgif-com-gif-maker" border="0"></a><br /><a target='_blank' href='https://imgbb.com/'></a><br />

### About Django Admin Panel
-  Django with its features of scalability and security provides an automatic admin interface.
- It scrutinize the meta-data from our models file to provide a speedy,model-centric interface where trusted users can manage content on our site.
- The panel’s recommended use is limited to an organization's internal management tool.

##### *How about customizing our admin panel to make it look appealing and handy for the users and employes?*
##### *So here is the catch, Jet-a modern responsive template for Django admin .*
####
 



## Installation


##### 1.  Firstly activate your virtual env in which you want to work or have installed Django.
###### Install Django


#
```sh
pip install django
```
###### Activate Virtual Environment
#

```sh
source envname/bin/activate
```

##### 2. Install Django Jet
#
```sh
pip install django-3-jet
```
##### 3. Add JET application to the INSTALLED_APPS  
Add 'jet' to installed apps settings of django project in settings.py file.

```python
INSTALLED_APPS = [
    'jet',
    'django.contrib.admin',
    ]
```
###### Note: Make sure to keep 'jet' above 'django.contrib.admin'
#
###### Important: Make sure that *'django.template.context_processors.request'* is enabled in templates portion of *settings.py* file in your project.
#
##### 4. Add related urls and routing in the the Urls.py file 
Urls and routing play a very important role in django hence make sure to jet in urls.py file of your project as it needed for related-lookups and autocompletes.

```python
urlpatterns = [
    path('jet/',include('jet.urls', 'jet')),
    path('admin/', admin.site.urls),
   ]
```
##### 5. Migrate the changes
To get things working in django, it is very necessary to migrate it for creating database tables. 
```python
python manage.py migrate jet
```
#
## Dashboard Installation

Dashboard is located in a separate application hence just installing jet wont make things work .
To enable dashboard activation follow certain steps enlisted below.
##### 1. Add JET DASHBOARD application to the INSTALLED_APPS  
Add 'jet.dashboard' to installed apps settings of django project in *settings.py* file.
###### Note: This ‘jet.dashboard’ should be before ‘jet’
#
```python
INSTALLED_APPS = [
    'jet.dashboard',
    'jet',
    'django.contrib.admin',
]
``` 

##### 2. Add JET DASHBOARD application to the INSTALLED_APPS  
Add 'jet.dashboard' to installed apps settings of django project in *settings.py* file.

```python
INSTALLED_APPS = [
    'jet.dashboard',
    'jet',
    'django.contrib.admin',
]
```
##### 3. Add related urls and routing in the the Urls.py file 
Urls and routing play a very important role in django hence make sure to jet in urls.py file of your project as it needed for related-lookups and autocompletes.

```python
urlpatterns = [
    path('jet/',include('jet.urls', 'jet')),
    path('jet/dashboard/', include('jet.dashboard.urls', 'jet-dashboard')), 
    path('admin/', admin.site.urls),
]
```
##### 5. Migrate the changes
To get things working in django, it is very necessary to migrate it for creating database tables. 
```python
python manage.py migrate jet dashboard 
```

##### 6. Install Feed Parser
A feed parser is required to fetch and parse a feed to render it from a template and give final touches to your panel.

```python
pip install django-feedparser
```
#
And Voila ! Its here
#
<a href="https://ibb.co/p1yCLkV"><img src="https://i.ibb.co/GdTg5rY/dash.png" alt="dash" border="0"></a>

