from django.contrib import admin
from django.urls import path
from . import views

urlpatterns = [
    path('admin/', admin.site.urls),
    path("", views.index, name='home'),
    path("transaction", views.transaction, name='transaction'),
    path('customer_details', views.customer_details, name='customer_details'),
    path("view", views.view, name='view'),
]