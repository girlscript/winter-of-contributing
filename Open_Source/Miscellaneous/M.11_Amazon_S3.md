
# Amazon S3

<p  align="center" width="100%">
<img  width="700"  height="250"  src="https://user-images.githubusercontent.com/30996989/133883882-d5b85730-0f84-46ad-a653-96473a9f86bb.png" >
</p>

Amazon Web Services (AWS), is subsidiary of Amazon. It is similar to Google Cloud Platform, Microsoft Azure etc. They provide cloud computing facilities and APIs to individuals, companies and governments as well. Amazon S3 (Amazon Simple Storage Service) is an object storage service provided by Amazon.

## What is it? Why would people need it?

Amazon S3 offers industry-leading scalability, data availability, security and also performance. Therefore it would mean that customers of all sizes and from various industries can use this service to store and protect any amount of data for a range of use cases. Moreover, the easy-to-use management features enables to organize data and configure finely-tuned access controls quiet effortlessly. It is designed for maximum durability.

## Benefits

- Industry leading performance, scalability, availability, and durability

With Amazon S3, it is possible to scale the storage resources up or down to meet the fluctuating demands. All this is done without upfront investments or procurement cycles. Amazon S3 is designed for 99.999999999% (11 9’s) of data durability because it automatically creates and stores copies of all S3 objects across multiple systems. 

You may read more on *Durability and Data Protection*  [here](https://aws.amazon.com/s3/faqs/##Durability_.26_Data_Protection).

- Wide range of cost-efficient storage classes

Whats better than saving overall cost and have amazing performance at the same time! Yes, this is very much possible with the help of *S3 Storage Classes*. It supports different data access levels at corresponding rates. The data usage pattern can be analyzed using *S3 Storage Class Analysis*. There are several other features such as :

-  *S3 Lifecycle* policy : To configure and execute transfer of storage classes.

-  *S3 Intelligent-Tiering* : To store data with changing or unknown patterns.

-  *S3 Outpost* : - To meet data residency requirements, and store data on-premise. 

You may read more on *S3 Storage Classes*  [here](https://aws.amazon.com/s3/storage-classes/).

- Unmatched security, compliance, and audit capabilities

It is possible to secure data from unauthorized access with encryption features and access management tools. In a nut shell, S3 is the only object storage service that allows blocking of public access to all of the objects at the bucket or the account level with the help of *S3 Block Public Access*. 

You may read more on *S3 security*  [here](https://aws.amazon.com/s3/features/##Access_management_and_security).

- Easily manage data and access controls

S3 comes with robust capabilities for managing access, cost, replication and data protection. The Access Points in S3 makes it easy to manage data access with specific permission using a shared data set.

You may read more on *S3 Storage Management* features [here](https://aws.amazon.com/s3/features/##Storage_management_and_monitoring).

- Query-in-place and process on-request

One could run big data analytics on S3 objects with query-in-place service. Following are some of the important features in process requesting and querying :

-  *Amazon Athena* : To query S3 data with standard SQL expressions.

-  *Amazon Redshift* : To analyze data stored across the AWS data warehouse.

-  *S3 Select* : To retrieve subsets of object data.

-  *S3 Object Lambda* : Add own code to S3 GET requests. \\

You may rad more on *query in place*  [here](https://aws.amazon.com/s3/features/##Query_in_place).

- Most supported cloud storage service

It is possible to store and protect data in Amazon S3 by working with a partner from the *AWS Partner Network(APN)*.

APN is one of the largest community of technology and consulting cloud services providers. They recognizes migration partners that transfer data to Amazon S3 and storage partners that offer S3-integrated solutions for primary storage, backup and restore, archive, and disaster recovery. \\

You may read more on *APN*  [here](https://aws.amazon.com/backup-recovery/partner-solutions/?partner-solutions-cards.sort-by=item.additionalFields.partnerNameLower&partner-solutions-cards.sort-order=asc&awsf.partner-solutions-filter-partner-type-storage=*all&awsf.partner-solutions-filter-partner-usecase-storage=*all&awsf.partner-solutions-filter-partner-location-storage=*all)

  
## Features of S3

1. S3 Object Lambda

Add own code to process data retrieved from S3 before returning it to an application.

![S3 Object Lambda](https://user-images.githubusercontent.com/30996989/133885265-13cbecbb-b756-42e9-91a8-152d8865912a.PNG)

2. S3 Storage Lens

Gain organization-wide visibility into storage usage, activity trends, and receive actionable recommendations.

![S3 Storage Lens](https://user-images.githubusercontent.com/30996989/133885312-65a49144-2b20-49fe-96c5-5d6229066500.PNG)

3. S3 Intelligent-Tiering

Optimize storage costs

![S3 Intelligent-Tiering](https://user-images.githubusercontent.com/30996989/133885354-4096da1d-bc00-4841-8263-a10b631e4e49.PNG)

4. S3 Access Points

Easily manage access for shared data sets

![S3 Access Points](https://user-images.githubusercontent.com/30996989/133885373-29f1883e-5e39-40a6-b026-036f5ac91de5.PNG)

5. S3 Batch Operations

Manage tens to billions of objects at scale

![S3 Batch Operations](https://user-images.githubusercontent.com/30996989/133885403-57a26fae-f2cb-48aa-bb9e-9dcdd08f5eec.PNG)

6. S3 Block Public Access

Block all public accesses to S3 data

![S3 Block Public Access](https://user-images.githubusercontent.com/30996989/133885427-24c8bd41-332f-437c-a3b6-1c4e48e018db.PNG)<br>
(Source for all images: https://aws.amazon.com/s3/)
  

## How does it work?

In order to store data objects in Amazon S3, buckets are to be created. Here, the *object* could be just any file and any metadata that describes the files. The *bucket* is the container for storing these files. 

Let's look at some of the basics of Amazons S3:

1. Buckets

Every object is contained in the bucket, it needs to have a name and also an AWS Region assigned to it. For examples, suppose an object named images/some_image.png needs to be stored, the first create a bucket name *EXAMPLE-BUCKET* in the US West (Oregon) Region. Next, upload some_image.png onto the bucket. Now this file would be accessible via a URL such as *https://EXAMPLE-BUCKET.s3.us-west-2-amazonaws.com/images/some_image.png*. Keep in mind that once a bucket has been named, it cannot be renamed. 

Following are the bucket naming rules :

- Must be between 3 and 63 characters long.

- Bucket names can consist only of lowercase letters, numbers, dots (.), and hyphens (-).

- Must begin and end with a letter or number.

- Must not be formatted as an IP address (for example, 192.168.5.4).

- Must not start with the prefix xn--.

- Must not end with the suffix -s3alias. This suffix is reserved for access point alias names.

- Must be unique within a partition. A partition is a grouping of Regions. AWS currently has three partitions: aws (Standard Regions), aws-cn (China Regions), and aws-us-gov (AWS GovCloud [US] Regions).

- Buckets used with Amazon S3 Transfer Acceleration can't have dots (.) in their names.

More on buckets :

- Buckets help in organizing S3 namespace at the highest level

- Helps identify the account responsible for storage and data transfer charges.

- Provides access control options.

- Serves as the unit of aggregation for usage reporting.

  
2. Objects

Its the fundamental entity and consist of object data and also their metadata. The metadata could be a set of name-value pairs that describe the object. It is also possible to specify custom metadata at the time that the object is stores. An object is always uniquely indentified within a bucket by a *key(name)* and *version ID*.

3. Keys

Object key (or key name) is the unique identifier for an object stored within a bucket. Each and every object stored in the bucket has exactly one key. \\

Every object in Amazon S3 can be uniquely addressed through the combination of the web service endpoint, bucket name, key, and optionally, a version. For example, in the URL ``https://DOC-EXAMPLE-BUCKET.s3.us-west-2.amazonaws.com/photos/puppy.jpg``, DOC-EXAMPLE-BUCKET is the name of the bucket and /photos/puppy.jpg is the key.


4. S3 Versioning

S3 Versioning is used to keep multiple variants of an object in the same bucket. With this feature, one could preserve, retrieve and restore every version of every object stored in the bucket. Its then possible to easily recover from both unintended user actions and application failures.


5. Version ID

When S3 Versioning is enabled, a unique version ID is generated for each object in the bucket. If some objects were already existing in the bucket before versioning was enabled, then those objects would be assigned 'null' as their version IDs. If modifications are done on these already existing files, then a new version ID is assigned to the new version of those objects.


6. Bucket policy

A bucket policy is a resource-based AWS Identity and Access Management (IAM) policy that can be used to grant access permissions to the bucket and the objects in it. Only the bucket owner can associate a policy with a bucket. The permissions attached to the bucket apply to all of the objects in the bucket that are owned by the bucket owner. Bucket policies are limited to 20 KB in size.
  

7. Access control lists (ACLs)

ACLs are access control mechanism that predates resource based policies. ACLs can be used to grant read and write permissions for individual buckets and objects to authorized users. Each bucket and object has an ACL attached to it as a sub-resource. The ACL defines which AWS accounts or groups are granted access and the type of access.
<br> It is always better to use bucket policies and access point policies than ACLs.


8. S3 Access Points

Amazon S3 Access Points are named network endpoints with dedicated access policies that describe how data can be accessed using that endpoint. Access Points simplify managing data access at scale for shared datasets in Amazon S3. Access Points are named network endpoints attached to buckets that you can use to perform S3 object operations, such as *GetObject* and *PutObject*.

9. Regions

It is necessary to choose a geographical AWS Region while creating a buckets. These regions are locations of servers where you want to host the bucket. It is ideal to choose a location that is close to the area where to want to provide a service. It helps to optimize latency, minimize costs, or address regulatory requirements.

## Accessing Amazon S3

There exists multiple means for connecting to Amazon S3. These includes :

1. AWS Management Console

This is a web based interface and could be accessed through the AWS website.

2. AWS CLI

Download the AWS Command Line, and then you could use this for provising commands to a broad set of AWS service. The AWS CLI is supported in Linux, Windows and macOS.

3. AWS SDK

AWS provides SDKs (software development kits) that consist of libraries and sample code for various programming languages and platforms (Java, Python, Ruby, .NET, iOS, Android, and so on). The AWS SDKs provide a convenient way to create programmatic access to S3 and AWS. Amazon S3 is a REST service. Its possible to send requests to Amazon S3 using the AWS SDK libraries which wrap the underlying Amazon S3 REST API and simplify your programming tasks.

4. Amazon S3 REST API

The architecture of Amazon S3 is designed to be programming language-neutral, using AWS-supported interfaces to store and retrieve objects.S3 and AWS is accessible programmatically by using the Amazon S3 REST API. The REST API is an HTTP interface to Amazon S3. With the REST API, the standard HTTP requests can be used to create, fetch, and delete buckets and objects.

  
## Hands-On Amazon S3

To start working with Amazon S3, you need to have already set up an AWS account. Once you've an account ready to use, you need to create an IAM user. Following are the steps to create an administrator user for yourself and add the user to an administrators group :

1. Sign-in to the IAM console as the account owner by choosing *Root user* and entering your AWS account email address. Enter your password in the next page.

2. In the navigation pane, choose Users and then choose Add user.

3. For User name, enter *Administrator*.

4. Select the check box next to *AWS Management Console* access. Then select Custom password, and then enter your new password in the text box.

5. Choose Next: Permissions

6. Under *Set permissions*, *choose Add user to group*.

7. Choose Create group.

8. In the Create group dialog box, for Group name enter Administrators.

9. Choose Filter policies, and then select AWS managed - job function to filter the table contents.

10. In the policy list, select the check box for Administrator Access. Then choose Create group.

11. Back in the list of groups, select the check box for your new group. Choose Refresh if necessary to see the group in the list.

12. Choose Next: Tags.

13. Choose Next: Review to see the list of group memberships to be added to the new user. When you are ready to proceed, choose Create user.


Now that you've completed the previous steps, proceed to sign-in as an IAM user. Before you sign in as an IAM user, you can verify the sign-in link for IAM users in the IAM console. On the IAM Dashboard, under IAM users sign-in link, you can see the sign-in link for your AWS account. The URL for your sign-in link contains your AWS account ID without dashes (‐). Copy the sign-in link. 

###  To sign in as an AWS user

1. Sign out of the AWS Management Console.

2. Enter your sign-in link.

3. Enter the IAM user name and password that you just created.

  

###  Let's *create* your first bucket!

1. Open the Amazon S3 console at `https://console.aws.amazon.com/s3/`

2. Choose *Create Bucket*

3. Name the bucket (Keep in mind the naming conventions we had discussed previously)

4. Choose a *Region* (preferrably one that's close to your geographical location)

5. Leave the rest of the fields as default

6. Click on *Create Bucket*

Congratulations! Now you've created a bucket! :sparkles:


###  To *upload* an object to your bucket :

1. In the *Buckets* list, choose the name of the bucket that you just created.

2. On the *Objects* tab, choose *Upload*.

3. Under *Files and folders*, choose *Add files*.

4. Choose a file to upload, and then choose *Open*.

5. Select *Upload*

### To *delete* an *object*:

1. In the Buckets list, *choose* the name of the *bucket* that you want to delete an object from.

2. Select the *check box* to the left of the names of the objects that you want to delete.

3. Choose *Actions* and choose *Delete* from the list of options that appears.

4. Alternatively, choose *Delete* from the options in the upper right.

5. Type permanently delete if asked to confirm that you want to delete these objects.

6. Select *Delete objects* in the bottom right and Amazon S3 deletes the specified objects.

###  To *delete bucket*:

1. In the Buckets list, select the bucket you want to delete.

2. Select *Delete*

3. To confirm deletion, in *Delete bucket*, type the name of the bucket.

4. To delete your bucket, choose *Delete bucket*.


Awesome! You've now learnt the basics of Amazon S3! More on AWS features could be found at [AWS Documentation](https://docs.aws.amazon.com/index.html). Happy learning! :sparkles:
