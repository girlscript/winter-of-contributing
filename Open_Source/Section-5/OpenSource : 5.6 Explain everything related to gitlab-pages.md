![GITLAB](https://github.com/Ash-KODES/DATA/blob/main/gitlab.png?raw=true)
    
# GITLAB PAGES  

With GitLab Pages, you can publish static websites directly from a repository in GitLab.

- Use for any personal or business website.

- Use any Static Site Generator (SSG) or plain HTML.

- Create websites for your projects, groups, or user account.

- Host your site on your own GitLab instance or on GitLab.com for free.

- Connect your custom domains and TLS certificates.

- Attribute any license to your content.

To publish a website with Pages, you can use any SSG, like Gatsby, Jekyll, Hugo, Middleman, Harp, Hexo, and Brunch, just to name a few. You can also publish any website written directly in plain HTML, CSS, and JavaScript.

Pages does not support dynamic server-side processing, for instance, as .php and .asp requires.

------

## GETTING STARTED WITH GITLAB PAGES
#### To create a GitLab Pages website:
| Parameter                                    | Description                                                  |
| :--------                                    | :-------------------------                                   |
| `Create a .gitlab-ci.yml file from scratch`  |Add a Pages site to an existing project. Learn how to create and configure your own CI file.                                  |
| `Use a .gitlab-ci.yml template`              |Add a Pages site to an existing project. Use a pre-populated CI template file.
| `Fork a sample project`                      |Create a new project with Pages already configured by forking a sample project.
|`Use a project template`                      |Create a new project with Pages already configured by using a template.

#### To update a GitLab Pages website:
| Parameter                                    | Description                                                  |
| :--------                                    | :-------------------------                                   |
| `GitLab Pages domain names, URLs, and base URLs`  |Learn about GitLab Pages default domains.                                |
| `Explore GitLab Pages`              |Requirements, technical aspects, specific GitLab CI/CD configuration options, Access Control, custom 404 pages, limitations, FAQ.
| `Custom domains and SSL/TLS Certificates`                      |Custom domains and subdomains, DNS records, and SSL/TLS certificates.
|`Let’s Encrypt integration`                      |Secure your Pages sites with Let’s Encrypt certificates, which are automatically obtained and renewed by GitLab.
|`Redirects`                                      |Set up HTTP redirects to forward one page to another.

---------

## How it works

To use GitLab Pages, you must create a project in GitLab to upload your website’s files to.

 These projects can be either public, internal, or private.

GitLab always deploys your website from a very specific folder called public in your repository. When you create a new project in GitLab, a repository becomes available automatically.

To deploy your site, GitLab uses its built-in tool called GitLab CI/CD to build your site and publish it to the GitLab Pages server. The sequence of scripts that GitLab CI/CD runs to accomplish this task is created from a file named .gitlab-ci.yml, which you can create and modify. A specific job called pages in the configuration file makes GitLab aware that you’re deploying a GitLab Pages website.

You can either use the GitLab default domain for GitLab Pages websites, *.gitlab.io, or your own domain (example.com). In that case, you need administrator access to your domain’s registrar (or control panel) to set it up with Pages.

The following diagrams show the workflows you might follow to get started with Pages.

![gitlab pages working](https://github.com/Ash-KODES/DATA/blob/main/gitlab%20pages%20working.png?raw=true)

-------
## Access to your Pages site
If you’re using GitLab Pages default domain (.gitlab.io), your website is automatically secure and available under HTTPS. If you’re using your own custom domain, you can optionally secure it with SSL/TLS certificates.

If you’re using GitLab.com, your website is publicly available to the internet. To restrict access to your website, enable GitLab Pages Access Control.

If you’re using a self-managed instance (Free, Premium, or Ultimate), your websites are published on your own server, according to the Pages settings chosen by your sysadmin, who can make them public or internal.

------
## Security for GitLab Pages
If your username is foo, your GitLab Pages website is located at foo.gitlab.io. GitLab allows usernames to contain a ., so a user named bar.foo could create a GitLab Pages website bar.foo.gitlab.io that effectively is a subdomain of your foo.gitlab.io website. Be careful if you use JavaScript to set cookies for your website. The safe way to manually set cookies with JavaScript is to not specify the domain at all:

![gitlab pages security](https://github.com/Ash-KODES/DATA/blob/main/security%20in%20gitlabpages.png?raw=true)
This issue doesn’t affect users with a custom domain, or users who don’t set any cookies manually with JavaScript.

----------
