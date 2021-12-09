# Web API with DRF

Django REST framework, working alongside Django web framework is a powerful and flexible toolkit for building a window into a database known as Web APIs. 

## REST API

**Representational State Transfer** (REST), a standard architecture proposed in 2000, builds REST APIs to leverage with HTTP protocol, facilitating request-response cycle and transferring data. In order for an API to be considered RESTful, it has to satisfy given conditions:

- *Stateless* client-server communication
- Supports key options like `GET` , `POST` , `PUT` , `DELETE` , `PATCH`
- *Cacheable* data streamlining interactions
- Retrieval of requested information in `JSON` or `XML`

## Django REST Framework

**Django REST Framework** (DRF) is a feature-rich Python library build to unveil the functionality of Django application by transforming them into web APIs. The basic architecture of DRF API is composed of *Serializer* , *Viewset* and *Router*. 

## How to extend a Django application into a web API with DRF?

To get started, let's take an example of a simple Library website.

### 		<u>Set up Django</u>

Make a dedicated directory, install Django and enter into virtual environment and create a traditional Django project, let's say *my_library*, verify that it works and thereby, add an app *novels* by following the given commands.

```python
$ pipenv install django
$ pipenv shell 
(my_library) $ django-admin startproject my_library .
(my_library) $ python manage.py migrate
(my_library) $ python manage.py runserver
(my_library) $ python manage.py startapp novels
```

Now, add the *novels* app at the bottom of INSTALLED_APPS configuration in `settings.py` file.

```python
#my_library/settings.py
INSTALLED_APPS = [..... 'novels.apps.NovelsConfig',]
```

Then, sync the database by running the following command.

```python
(my_library) $ python manage.py migrate
```

### <u>Models</u>

```python
#novels/models.py
from django.db import models
class Novel(models.Model):
    title = models.Charfield(max_length=150)
    author = models.Charfield(max_length=100)
    def __str__(self):
        return self.title
```

Whenever we define or alter the database model, we need to migrate those changes.

```python
(my_library) $ python manage.py makemigrations novels
(my_library) $ python manage.py migrate
```

### <u>Admin</u>

Create a superuser account following the later prompts and register the app in `admin.py`.

```python
(my_library) $ python manage.py createsuper
```

```python
#novels/admin.py
from django.contrib import admin
from .models import Novel
admin.site.register(Novel)
```

Now, run the local server, navigate to http://127.0.0.1:8000/admin , login with the superuser credentials and enter data into the panel. (Views and URLs configurations are mentioned in the later section.)

### <u>Set up Django REST Framework</u>

Quit the local server, install and add **DRF **as a third-party app. Also, create a dedicated API app.

```python
(my_library) $ pipenv install djangorestframework
(my_library) $ python manage.py startapp api
```

```python
#my_library/settings.py
INSTALLED_APPS = [..... 'rest_framework', 'api.apps.ApiConfig',]
```

### <u>Serializers</u>

Serialization is the process of converting a `model` into `JSON` and to get started with rest framework, we need to serialize the data which is easy to consume over the internet so that API user can parse it. So, begin by creating a `serializers.py` file in api app.

```python
# api/serializers.py
from rest_framework import serializers
from novels.models import Novel
class NovelSerializer(serializers.ModelSerializer):
	class Meta:
		model = Novel
		fields = ('title', 'author')
```

### <u>Views</u>

Following the generic class-based views and `ListAPIView` (read-only endpoint), display the content by updating `views.py` file in novels app and api app.

```python
# novels/views.py
from django.views.generic import ListView
from .models import Novel
class NovelListView(ListView):
	model = Novel
	template_name = 'novels.html'
```

```python
# api/views.py
from rest_framework import generics
from novels.models import Novel
from .serializers import NovelSerializer
class NovelAPIView(generics.ListAPIView):
	queryset = Novel.objects.all()
	serializer_class = NovelSerializer
```

*Note*: Create `novels.html` in novels folder which in turn is supposed to be created in *templates* folder within *novels* app. Furthermore, update the file as per requirement.

### <u>URLs</u>

In order to point the URLs at the correct viewsets, we need to take take the configurations of traditional Django app's URLs as well as API endpoints by creating `urls.py` file in both novels and api app.

```python
#my_library/urls.py
from django.contrib import admin
from django.urls import path, include
urlpatterns = [ path('admin/', admin.site.urls),
				path('', include('novels.urls')),
				path('api/', include('api.urls')), ]
```

```python
#novels/urls.py
from django.urls import path
from .views import NovelListView
urlpatterns = [ path('', NovelListView.as_view(), name='home'), ]
```

```python
# api/urls.py
from django.urls import path
from .views import NovelAPIView
urlpatterns = [ path('', NovelAPIView.as_view()), ]
```

### <u>Testing API</u>

Now, it's all set to test how API endpoint looks like. Start up the local server and navigate to http://127.0.0.1:8000/api/.

### <u>References</u>

1. https://www.djangoproject.com/
2. https://www.django-rest-framework.org/
3. Django for APIs by William S. Vincent.







### 			



