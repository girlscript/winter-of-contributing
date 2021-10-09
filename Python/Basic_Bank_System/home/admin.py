from django.contrib import admin
from .models import customer, transaction_details

# Register your models here.
admin.site.register(customer)
admin.site.register(transaction_details)