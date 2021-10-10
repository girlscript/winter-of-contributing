# Firebase Hosting

<p align = "center">
  <img src="https://miro.medium.com/max/1300/1*5n0uJ3CTF8MiKJJhNkNJMA.png">
</p>

<br>
<br>

## What is Firebase Hosting?

Firebase Hosting is a fully-managed content and microservices hosting solution. SSD storage and a worldwide CDN back up the service (content delivery network). 
Firebase Hosting has zero-configuration SSL, ensuring that content is served securely at all times. Firebase Hosting is a developer-friendly online content hosting service. 
You can easily deploy web apps and serve both static and dynamic content to a global CDN with a single command (content delivery network). To create and host microservices on 
Firebase, use Firebase Hosting with Cloud Functions or Cloud Run.

## Key capabilities

<table>
<tbody><tr>
  <td>Serve content over a secure connection</td>
  <td>
    The contemporary internet is safe. Firebase Hosting has zero-configuration SSL, ensuring that content is served securely at all times.
  </td>
</tr>
<tr>
  <td>Host static and dynamic content plus microservices</td>
  <td>
    From your CSS and HTML files to your Express.js microservices or APIs, Firebase Hosting can host any type of content.
  </td>
</tr>
<tr>
  <td>Deliver content fast</td>
  <td>
    Each file you upload is cached and provided as gzip or Brotli on SSDs at CDN edges across the world. We choose the optimum compression strategy for your material automatically. 
    The material is provided quickly no matter where your users are.
  </td>
</tr>
<tr>
  <td>Emulate and even share your changes before going live</td>
  <td>
    <p>Interact with a simulated backend while seeing and testing your changes on a locally hosted URL.
    </p>
    <p>Using temporary preview URLs, share your modifications with your coworkers.
For quick revisions of your evaluated material, hosting also includes a GitHub interface.
    </p>
  </td>
</tr>
<tr>
  <td>Deploy new versions with one command</td>
  <td>
    <p>You can get your app up and running in seconds with the Firebase CLI. Adding deployment targets to your build process is simple using command line tools.
    </p>
    <p>And if you need to undo the deploy, Hosting provides one-click
      rollbacks.
    </p>
  </td>
</tr>
</tbody></table>

## How does it work?

Firebase Hosting is designed specifically for today's web developers. With the emergence of front-end JavaScript frameworks like Angular and static generation tools like 
Jekyll, websites and applications are more powerful than ever. Hosting provides you the infrastructure, tools, and tooling you need to create and manage websites and 
applications, whether it's a basic app landing page or a sophisticated Progressive Web App (PWA).

You may deploy files from local folders on your PC to our Hosting servers using the Firebase CLI. You may use Cloud Functions for Firebase or Cloud Run to serve dynamic content
and host microservices on your sites in addition to delivering static information. Our global CDN's closest edge server serves all material through an SSL connection.

You may also preview and test your modifications before releasing them to the public. You may simulate your app and backend resources at a locally hosted URL using the Firebase
Local Emulator Suite. You may also use a temporary preview URL to publish your modifications and set up a GitHub integration for quick iterations throughout development.

You can develop complex PWAs with Firebase Hosting's lightweight hosting setup choices. You may quickly set up custom headers, modify URLs for client-side routing, and even deliver translated content.

Firebase provides many domain and subdomain choices for delivering your content:
  - Every Firebase project comes with free subdomains on the ```web.app``` and ```firebaseapp.com``` domains by default. The deployed content and settings are the same on each of these sites.
  - If you have connected sites and applications that provide distinct content but use the same Firebase project resources, you may build several sites (for example if you have a blog, admin panel, and public app).
  - If you have connected sites and applications with distinct content but the same Firebase project resources, you may build several sites (for example if you have a blog, admin panel, and public app).

<p align="center">
<img src="https://github.com/mayankkuthar/Reference-Images/blob/main/firebase_hosting.png?raw=true">
</p>

## How to Implementation it?

<table>
<tbody><tr>
  <td>1.</td>
  <td>Install the Firebase CLI</td>
  <td>
    Setting up a new Hosting project, running a local development server, and deploying content is simple using the Firebase CLI.
  </td>
</tr>
<tr>
  <td>2.</td>
  <td>Set up a project directory</td>
  <td>
    <p>Add your static assets to a local project directory, then run
      ```firebase init``` to connect the directory to a
      Firebase project.
    </p>
    <p>You may also set up Cloud Functions or Cloud Run for your dynamic content and microservices in your local project directory.
    </p>
  </td>
</tr>
<tr>
  <td>3.</td>
  <td>View, test, and share your changes before going live <em>(optional)</em></td>
  <td>
    <p>Run ```firebase emulators:start``` to emulate
      Hosting and your backend project resources at a locally hosted URL.
    </p>
    <p>To view and share your changes at a temporary preview URL, run
      ```firebase hosting:channel:deploy``` to create
      and deploy to a preview channel. Set up the
      GitHub integration for
      easy iterations of your previewed content.
    </p>
  </td>
</tr>
<tr>
  <td>4.</td>
  <td>Deploy your site</td>
  <td>
    When things are looking good, run
    ```firebase deploy``` to upload the latest snapshot to
    our servers. If you need to undo the deploy, you can roll back with just one
    click in the Firebase console.
  </td>
</tr>
<tr>
  <td>5.</td>
  <td>Link to a Firebase Web App <em>(optional)</em></td>
  <td>
    You may use Google Analytics to collect use and behaviour data for your app and Firebase Performance Monitoring to obtain insight into its performance characteristics by integrating your site to a Firebase Web App.
  </td>
</tr>
</tbody></table>
