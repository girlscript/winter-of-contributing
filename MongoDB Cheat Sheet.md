# **What is MongoDb**
* MongoDb is an open source document database
* Leading NoSql database
* MongoDb written in c++
* MongoDb concepts needed to create and deploy a highly scalable and performance-oriented database

# **Why MongoDb** 
* This database increase his demand over time and easy to use
* As a javascript developer MongoDb is easy to understand 
* MongoDb is over production database

## **Advantages of MongoDb:** 

* These databases have dynamic schema
* NoSql databases are either key-value pairs, document based, graph databases or wide column stores.
* MongoDb store data in JSON like documents that can vary in structures.

## **Disadvantages of MongoDb:**
* These database not good for complex queries 


# **MongoDB Cheat Sheet:**

## **1. Database Commands**
* View all databases
 > show dbs                                                                              
* Create a new or switch databases 
> use dbName

* View current Database
> db

* Delete Database 
> db.dropDatabase()

## **2. Collection Commands**
* Show Collections
> show collections
* Create a collection named 'comments'
> db.createCollection('comments')

* Drop a collection named 'comments'
> db.comments.drop()

## **3. Row(Document) Commands**
* Show all Rows in a Collection 
> db.comments.find()

* Show all Rows in a Collection (Prettified)
> db.comments.find().pretty()

* Find the first row matching the object
> db.comments.findOne({name: 'Harry'})

 
* Insert One Row
> db.comments.insert
({
({ 'name': 'Harry',
    'lang': 'JavaScript',
    'member_since': 5
})

* Insert many Rows
> db.comments.insertMany
([
    {
    'name': 'Harry',
    'lang': 'JavaScript',
    'member_since': 5
    }, 
    {'name': 'Rohan',
    'lang': 'Python',
    'member_since': 3
    },
    {'name': 'Lovish',
    'lang': 'Java',
    'member_since': 4
    }
])

* Search in a MongoDb Database
> db.comments.find({lang:'Python'})

* Limit the number of rows in output
> db.comments.find().limit(2)

* Count the number of rows in the output
> db.comments.find().count()
 
* Update a row

> db.comments.update({name: 'Shubham'},

{'name': 'Harry',
    'lang': 'JavaScript',
    'member_since': 51
}, {upsert: true})

* Mongodb Increment Operator

> db.comments.update({name: 'Rohan'},
{$inc:{
    member_since: 2
}})

* Mongodb Rename Operator

> db.comments.update({name: 'Rohan'},
{$rename:{
    member_since: 'member'
}})

* Delete Row 
> db.comments.remove({name: 'Harry'})

* Less than/Greater than/ Less than or Eq/Greater than or Eq
> 1. db.comments.find({member_since: {$lt: 90}})
> 2. db.comments.find({member_since: {$lte: 90}})
> 3. db.comments.find({member_since: {$gt: 90}})
> 4. db.comments.find({member_since: {$gte: 90}})
 
