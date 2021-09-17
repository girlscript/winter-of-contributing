# Deploying Site on Netlify

![Netlify Page](https://miro.medium.com/max/560/1*WMA_NYFfvZIpx_uvQxQQEA.jpeg)

`Netlify` is an all-in-one platform for automating modern web projects.It has **continuous integration**, and deployment pipeline with a **single workflow**.

It Provides `Atomic Deploy` and inhibit `Mixed content`

**_Atomic Deploy_** - Atomic Deployment is essentially a script that allows your web application to be updated from Git so that it continuously runs, while the code updates in the background, ensuring zero downtime on your server during the entire process.

**_Mixed Content_** - This specific error occurs when both HTTP and HTTPS assets are being loaded from a particular web page, which was requested to be fetched as HTTPS.

There are two ways to `Deploy Site on Netlify`

1. Creating deploys by connecting a Git repository for `continuous deployment`
2. Publishing a site folder with `drag and drop`

## First Step

**_Create your account on Netlify_**
https://www.netlify.com/

![Create account](https://static-assets.codecademy.com/Courses/Deploy-with-Heroku-and-Netlify/netlify_email_signup2.jpeg)

## First way

### Using Git Repository

On Dashboard go to Team Overview --> New site from Git
Follow Three easy steps now to get your site on Netlify.

![Steps](https://cdn.netlify.com/0a36819500c2254f84301d10e6ecbd1e0f20f143/c7374/img/blog/create-new-site.png)

1. Connect to git provider (for eg `Github` or `GitLab` or `Bitbucket` ).
   `It will ask for authorization --> Enable that`
2. Pick a Repository
3. Keep the default Site settings and Deploy!

Link for the site will be displayed as soon as you complete the above steps
Kudos! you have deployed your first site.

`Perks` of Using `Git Repo Method`
Provides **_Continous Deployment_** ie. any changes pushed to Git Repo will be automatically deployed to site ensuring zero downtime on the server.

## Second way

### Using Drag and Drop

![Drag and Drop](https://miro.medium.com/max/1838/1*54JxNQqYGbMh2fY-QVedJg.png)
On Dashboard
Go to `Sites`
Under the _search site_ panel you will see a blank space saying
`Drag abd Drop your site folder here`

Click on it and select the folder from local files
Kudos! the **site is deployed** --> Link will be displayed on Dashboard itself.

_Tip : Prefer 1st way instead 2nd because `continous deployment` is an ultimate feature. Hence it's good to have a Github Repo for your site but not necessary for just simple deploying_

# Domain name

![Domain settings](https://cdn.netlify.com/7e78f0f9764d7ddec2dc53babcc40707b55ab5a1/c1b2f/img/blog/domains-settings@2x.png)
Once the site is deployed using any of the two ways!
Go to `Domain Settings`
By default we are provided with netlify as a subdomain.
We can have a custom domain under as a `paid perk`.

We can change the name of Website for `complete free`
Under custom names select ...(3 dots) and edit the name of your website. `for eg my_first_website.netlify.app`.
