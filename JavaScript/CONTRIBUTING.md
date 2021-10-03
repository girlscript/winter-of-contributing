# Contribution Guide for JavaScript
JavaScript is a lovely domain choice for GWoC, and the contributors
and mentors thereof are welcomed! The following guide will help you
get yourself started.

## Understanding
- [GirlScript Winter of Contributing](https://gwoc.girlscript.tech/) is a three-month newly established initiative by GirlScript Foundation to be conducted during winters.
- It encourages individuals to share their knowledge and ideas to develop technical skills and gain valuable experience in the field of tech education.
- Over the course of the program, participants can contribute to a variety of themes under the guidance of an expert facilitator.
- In simple words, it is an open source contribution contest
  that is completely content and documentation-based. More
  specifically, it targets sharing knowledge content for coders.
  
## Roadmap for JavaScript
The most recently updated roadmap for this domain in particular is mentioned
here: [Roadmap](https://github.com/paramsiddharth/gwoc-js-roadmap/releases/latest/download/JavaScript.Roadmap.for.GWoC.pdf).

## Setting Up
- For most of the JavaScript related learnings and activities, you'll
  need to be able to run JavaScript on your local machine, which is
  either through a web browser or the command-line (Node).
- Depending on your choice of contribution, you'll need to make a choice
  on what you move forward with. Regardless, having the following is
  recommended to start:
  - A [Node.js](https://nodejs.org/en/) environment set up locally, preferrably the current LTS or
    using NVM<sup>\[[Linux/Mac](https://github.com/nvm-sh/nvm)\]\[[Windows](https://github.com/coreybutler/nvm-windows)\]</sup>.
  - **Atleast one** of the following two:
    1. A [Chromium](https://www.chromium.org/Home)-based browser: [Microsoft Edge](https://www.microsoft.com/en-us/edge), [Google Chrome](https://www.google.com/intl/en_in/chrome/), or [Brave](https://brave.com/).
    2. [Mozilla Firefox](https://www.mozilla.org/en-US/firefox/new/).

  A set up is required for doing the exercises on your own for which you'll
  make contributions, either in the form of document, video, or audio.
- Having [VSCode](https://code.visualstudio.com/download), [Sublime](https://www.sublimetext.com/), or any other IDE with a Markdown extension
  set up is largely recommended for the contributions, though
  [GitHub](http://github.com/) may be used directly for documents.
- [Git](https://git-scm.com/) must be installed ([Git-Bash](https://git-scm.com/download/win) on Windows) for managing the
  contributions.
- The following are popular choices for audio/video contributions:
  - [OBS Studio](https://obsproject.com/) or an alternative will be needed for recording the
  video submissions.
  - [OpenShot](https://www.openshot.org/) is a nice choice for a free open source video editor.
  - [Audacity](https://www.audacityteam.org/download/) or an alternative will be needed for audio submissions.
- For sharing the video contributions, one of the following platforms is recommended:
  - [YouTube](https://www.youtube.com/)
  - [Vimeo](https://vimeo.com/)
  - [Dailymotion](https://www.dailymotion.com/)
- For sharing the audio contributions, one of the following platforms is recommended:
  - [Audiomack](https://audiomack.com/)
  - [SoundCloud](https://soundcloud.com/)
  - [Google Drive](https://drive.google.com/drive/my-drive)

## Desired Areas of Expertise
- You must have a basic understanding of JavaScript. Lacking
  advanced or intermediate knowledge is acceptable. The purpose
  of this programme is to get most of you started with your
  journey to a professional developement life.

  A good place to get started is [W3C's JavaScript tutorial](https://www.w3schools.com/js/).
- You must be familiar with the usage of Git and GitHub. You
  may get in touch with one of the mentors or the supervisor
  for any help whatsoever.

  A good place to start learning Git from is [here](https://www.youtube.com/watch?v=IHaTbJPdB-s).
- You should have a good grasp over Markdown and how to write
  `.md` documents, because that's what shall comprise most of
  the content repository you'll work with.

  A good place to start learning Markdown is [this video](https://www.youtube.com/watch?v=2JE66WFpaII).
- Having decent video-editing or audio-editing skills would
  be helpful for contributing video/audio content.
- The understanding of software architecture would help
  in creating better explanation of JavaScript's role in
  microservices and applications.
- Linguistic fluency will help you sound better! Aye, we now
  have tools for that, right? Use them to create the best
  content you can. We're here to help wherever needed.

## Starting Up
1. Fork this repository: https://github.com/girlscript/winter-of-contributing
2. Clone it to your local machine using one of the following:
   - If using Git:
     ```bash
     git clone https://github.com/{username}/winter-of-contributing --branch Javascript
     ```
   - If using GitHub CLI:
     ```bash
     gh repo clone {username}/winter-of-contributing -- --branch Javascript
     ```
3. If using Git instead of GitHub CLI, remember to set `upstream`
   as a remote pointing to the parent repository:
   ```bash
   git remote add upstream https://github.com/girlscript/winter-of-contributing
   ```

Before starting a fresh contribution, make sure you pull all
updates from `upstream` to avoid any conflicts.
```bash
git pull -r upstream Javascript
```

Try to (not required) do individual PRs in individual branches:
```bash
git checkout -b sample-branch

... # Make your commits

git push origin sample-branch

... # Make the PR

git checkout Javascript
```

## Project Structure
1. For the naming of directories, we use `Pascal_Snake_Case`,
   which is the unarguable standard to be enforced in the event
   repository. We shall stick to the same.
2. The repository structure will be something like this:
   ```
   -> Winter of Contributing (Javascript branch)
       |
       |
       |- JavaScript
       |      |- README.md <- The main index file
       |      |- Topics/
       |      |    |- 1.Hello_World/
       |      |    |        |- README.md
       |      |    |        |   ^- The content goes here
       |      |    |        |- ...
       |      |    |- 2.History/
       |      |    |        |- README.md
       |      |    |        |- ...
       |      |    |- 3.Strings/
       |      |    |        |- README.md
       |      |    |        |- ...
       |      |    |- ...
   ```
3. For the topic folders, we will follow the following naming convention:
   ```
   {Serial Number}.Title_In_Pascal_Snake_Case.md
   ```
   For example, for the following topic:
   - Serial number: 2
   - Topic name: History of JavaScript

   We will have the following name for the folder:
   ```
   2.History_Of_JavaScript
   2.History_Of_JavaScript/README.md
   ```
   `.md` is the extension. Please note that there is no space
   after the `.` after the serial number.
4. Inside each folder, we will have one `README.md` file, which
   will be the centre of focus of the topic.
   - If the topic is simple enough, the README file will form
     the entirety of the content, including links for video/audio content.
   - If the topic is big enough to have subtopics, each subtopic
     will be an independent directory within the topic directory
     and contain READMEs within itself for its own content.

## Guidelines
1. Pull requests (hereby referred to as PRs) and commits
   must be kept as granular and atomic as possible. PRs with
   too many commits will be squashed before merge. The commit
   messages must be clear and comprehensible.
2. All PRs must be reviewed and approved by **atleast 2** mentors
   before the supervisor gets to go ahead and do the final
   review and merge/close.
3. Any important suggestions must be brought to the immediate notice
   of the mentors and/or the supervisor.
4. All JavaScript (and otherwise) code-blocks present in Markdown must be appropriately represented in the files.
   
   Exempli gratia:
   ```` md
   ```js
   // Your code goes here
   console.log('Hello World!');
   ```
   ````
5. Contributions should be attributed by the author.
   - Document-based contributions may mention the names of the contributors
     at the end of the Markdown file.
   - Video/Audio-based contributions may mention the names of the contributors
     immediately next to where the URLs are mentioned.
6. All contributions in languages besides English (Indian or otherwise) must
   have the Markdown file's basename suffixed with the language's name *in English*,
   following our `Pascal_Snake_Case` convention.

   E. g.
   - `README_Hindi.md`
   - `README_Bajjika.md`
   - `Tutorial_German.md`
   - `Schema_Bhojpuri.md`

   For all cross-language content, the main English README must be present,
   linking the index to all other available for the topic/subtopic.
7. Reviewing non-English content must require approval by **atleast 3**
   mentors before being sent to the supervisor, to ensure
   no abuse of incomprehensibility.
   
Updates (September 16, 2021):
- Each issue will uniquely identify a single topic/sub-topic.
- Every issue must have a checklist representing what kind of contributions are left undone (document, audio, video).
- Since a PR resolves and closes an issue, it'll manually be reopened after each kind of contribution is done. That's just fair, because multiple forms of contributions revolving the same issue would still require changing the same files, which isn't possible.
- For each topic, we'll first accept a document-based contribution before accepting any video/audio contribution.
- As long as we're not out of options, one contributor may contribute to one topic only in one format i. e. Either document, video, or audio, but not multiple.
- Although more issues will be generated, if you find an issue having been assigned to too many contributors already, I recommend you to:
  1. Look for other issues.
  2. Request contribution to the same issue for a different format (document, audio, video).
  3. Create your own issue and request the tag from me (you may reference the roadmap).
- There will be a soft limit on the number of issues a single person may work simultaneously on.

## Issues
You may raise relevant issues within the repository, keeping
the following points in mind:
- The title of the issue must have the `JS: ` prefix.
  
  E. g. `JS: Tutorial for JavaScript Operators`.
- The issue must mention which folder location should be
  created/used.

  E. g. `Topics/5.Operators`.
- A well-defined (not necessarily long) description of the
  topic in focus must be provided.

  E. g. `A tutorial on using operators in JavaScript`.
- Including graphics and references is encouraged.

## Pull Requests
You may create PRs for existing issues within the repository, keeping
the following points in mind:
- The title of the issue must have the `[JS] <Type>:` prefix,
  where `<Type>` is nothing but one of the following (a semantic
  understanding of what the PR is about):
  - `Topic` : Fresh topics.
  - `Fix` : Bug/Typo fixes.
  - `Other` : Everything else.
  
  E. g. `[JS] Topic: Tutorial for JavaScript Operators`.
- The PR must mention which issue(s) is/are being resolved, with
  the `resolves`, `closes`, or `fixes` keyword (case-insensitive) preceding the
  issue number prefixed with a `#`.

  E. g. Assuming the issue number is 3, any of the following works:
  - `Resolves #3`
  - `Closes #3`
  - `Fixes #3`
- A well-defined (not necessarily long) description of the
  updates made must be provided.

  E. g. `Wrote a tutorial on using operators in JavaScript`.
- Citing references and adding graphics is encouraged.

## Ending
The instructions shall be made clearer in our team meetings, which shall be held regularly.

The mentors and supervisor
shall be available for clearing your doubts, helping you out,
and even teaching the desired concepts when needed, to get you
working and developing with full potential.

Stay in touch and keep the team posted. It is nice to stay
up-to-date with the progress. After all, we're building something
beautiful together.

Best of luck! 💕

# Made with ❤ by [Param](https://www.paramsid.com).
