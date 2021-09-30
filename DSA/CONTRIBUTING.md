# Contribution Guide for DSA
Please refer to these guidelines and contribute accordingly. The following guide will help you get started.

## Setting Up

  A set up is required for making the contributions, either in the form of document, video, or audio.
- Having [VSCode](https://code.visualstudio.com/download), [Sublime](https://www.sublimetext.com/), or any other IDE with a Markdown extension
  set up is largely recommended for the contributions, though
  [GitHub](http://github.com/) may be used directly for documents.
- [Git](https://git-scm.com/) must be installed ([Git-Bash](https://git-scm.com/download/win) on Windows) for managing the
  contributions.
- The following are popular choices for audio/video contributions:
  - [OBS Studio](https://obsproject.com/) or an alternative will be needed for recording the
  video submissions.
  - [OpenShot](https://www.openshot.org/) is a nice choice for a free open source video editor.
- For sharing the video contributions, one of the following platforms is recommended:
  - [YouTube](https://www.youtube.com/)
  - [Vimeo](https://vimeo.com/)
- For sharing the audio contributions, one of the following platforms is recommended:
  - [SoundCloud](https://soundcloud.com/)
  - [Google Drive](https://drive.google.com/drive/my-drive)

## Pre-requisites
- Good understanding of either one of the languages among **Java, C/Cpp, or Python** is needed.
- You must be familiar with the usage of Git and GitHub. You may refer to the [Open-source Tutorial by GirlScript Organization](https://www.youtube.com/watch?v=KxUj-0R2yxM).
- You should have a good grasp over [Markdown](https://www.youtube.com/watch?v=2JE66WFpaII) and how to write
  `.md` documents.
- Having decent video-editing or audio-editing skills would be helpful for contributing video/audio content.

## Git Workflow
```bash
## It all starts with forking the repository: https://github.com/girlscript/winter-of-contributing

## Clone the repo
$ git clone https://github.com/{username}/winter-of-contributing --branch DSA

## Add upstream remote
$ git remote add upstream https://github.com/girlscript/winter-of-contributing

## Syncing with upstream/main branch
$ git pull upstream

## To create and shift to working branch
$ git checkout -b sample-branch

## Types of additional-fixes:
# wip - Work in Progress; long term work; mainstream changes
# feat - New Feature; future planned; non-mainstream changes
# bug - Bug Fixes
# exp - Experimental; random experiemntal features

# Committing all changes with appropriate commit message and description
$ git commit -m "your-commit-message" -m "your-commit-description"

## To publish working branch to your forked repository
$ git push origin sample-branch

# After making the PR
$ git checkout DSA


## Creating the PR using GitHub UI
# Create Pull Request from the working branch in your forked repository to the DSA branch in the upstream repository
# Link Pull Request to appropriate Issue.

```


**</> After PR Merge/Close </>**

```bash
## Syncing with upstream/main branch
$ git fetch upstream
$ git checkout main
$ git merge upstream/main

## Deleting the branch in local repository
# If PR is merged
$ git branch -d <branch-name>  
# If PR is closed/rejected
$ git branch -D <branch-name>  

## Deleting the branch in remote repository
$ git push origin --delete <branch-name>

```


### References:

- [Fork a repo](https://docs.github.com/en/free-pro-team@latest/github/getting-started-with-github/fork-a-repo)
- [About forks](https://docs.github.com/en/free-pro-team@latest/github/collaborating-with-issues-and-pull-requests/about-forks)
- [Fork-And-Branch workflow](https://blog.scottlowe.org/2015/01/27/using-fork-branch-git-workflow/)
- [Commit message standards](https://chris.beams.io/posts/git-commit/)
- [Configuring a remote for a fork](https://docs.github.com/en/free-pro-team@latest/github/collaborating-with-issues-and-pull-requests/configuring-a-remote-for-a-fork)
- [Syncing a fork](https://docs.github.com/en/free-pro-team@latest/github/collaborating-with-issues-and-pull-requests/syncing-a-fork)


## Project Structure
1. For the naming of directories, strictly use snake_case (underscore_separated) in your file_name and push it in correct folder.
2. The repository structure will be something like this:
- DS(Topic) -> Sub-topics -> Your file
- Analysis of Algorithms -> Topics -> Sub-topics(Your file)

## Code Base
- Make sure you do not copy codes from external sources like GFG, hackerearth, etc because that work will not be considered. **Plagiarism is strictly not allowed.** 
- Use **1 tab or 4 spaces** indentation.
- Add the **description** of your algorithm using multi-line comments at the starting of the code.
- Add **comments** to your code in a **new line** and use single-line comments with **1 tab or 4 spaces** indentation.
- ``.md`` extension is preferred for documentation.


## Issues
  
Keep following points in mind while raising issues within the repository:
- The title of the issue must have the `DSA:` prefix.
- Mention the specific **data structure/algorithm sub-topic** and the **language** which you will implement.
- Your issue can be **closed** if the issue you created already exists. Use the search functionality on Github Issues.
- Once you have decided the sub-topic you want to work upon, shoot an issue and patiently wait for our project maintainer to have a look over it and assign it to you.
- You can **ONLY** work on the issues that have been **assigned** to you.
- Including graphics and references is encouraged.
- If you find an issue having been assigned to too many contributors already, request contribution to the same issue for a different format (document, audio, video).


## Pull Requests
Please note the following points while creating PRs:
- The PR must mention which issue(s) is/are being resolved, with the `resolves`, `closes`, or `fixes` keyword preceding the issue number prefixed with a `#` example `Fixes #3`
- PRs with too many commits will be squashed before merge. The commit messages must be clear and comprehensible.
- PR should be named as your assigned issue.


## End
Supervisors and Mentors will be there to provide help all through the 3-months, all the best!
