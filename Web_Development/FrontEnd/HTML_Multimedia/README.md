# HTML Multimedia
Multimedia on the web is sound, music, videos, movies, and animations.
It can be anything you can hear or see, such as photos, music, sound, videos, records, films, animations, and so on. Web sites frequently incorporate multimedia content of various sorts and formats.


## Multimedia Tags
HTML allows adding different multimedia files on your website by various multimedia tags. These tags include:


* `<audio>` for displaying a audio file on the web page,
* `<video>` for displaying a video file on the web page,
* `<embed>` for embedding multimedia files on the web page,
* `<object>` for embedding multimedia files on the web page.
* `<iframe>` for embedding other web pages



## Multimedia Formats
Media files include multimedia components such as audio and video. The file extension can be used to determine the file type.
Multimedia files have formats and different extensions: .mp3, .mp4, .mpg, .swf, .wav, .mpg, .wmv, and .avi.


## The HTML Video Element

-------

To show a video in HTML, use the `<video>` element:
  
```html
<video width="320" height="240" controls>
  <source src="movie.mp4" type="video/mp4">
  <source src="movie.ogg" type="video/ogg">
Your browser does not support the video tag.
</video>
```

### HTML `<VIDEO>` AUTOPLAY

For starting a video automatically make use of the autoplay attribute:

```html
<video width="320" height="240" autoplay>
  <source src="movie.mp4" type="video/mp4">
  <source src="movie.ogg" type="video/ogg">
Your browser does not support the video tag.
</video>
```

### How it works:-
  
The controls attribute is used to add video controls, like play, pause, and volume.
It is a good method to always use width and height attributes.
If height and width are not mentioned, the browser will not know the size of the video. The effect of this is that page will be changing (or flicker) while the video gets loaded.
Text between the <video> and </video> tags will only get displayed in browsers which do not support the <video> element.
Multiple <source> elements can be used to link different video files. The browser will be using the first recognized format.
  
  
  
  
### Browser Support:-
  
  
| BROWSER | MP4  | WebM  |  OGG  |
| :----- | :- | :- | :- |
| Internet Explorer | YES | NO | NO |
| Chrome | YES | YES | YES |
| Firefox | YES | YES | YES |
| Safari | YES | NO | NO |
| Opera | YES(from Opera 25) | YES | YES |
  
  
  
### HTML5 VIDEO TAGS:-
  
| Tag | Description  |
| :----- | :- |
| `<video>` | It is used to define a video or movie  |
| `<source>` |It is used to define multiple media resources for various media elements, such as `<video>` and <audio>  |
| `<track>` | It is used to define text tracks in media players  |
  
  
-------
  
  
## The HTML Audio Element
  
Before the arrival of HTML5, there was no standard present inorder to play audio files on a web page.
Before the arrival of HTML5, audio files can be played with a help of a plug-in (like flash).
The HTML5 `<audio>` element has specified a standard method to embed audio in a web page.
  
To play an audio file in HTML, use the `<audio>` element:
  
```html
<audio controls>
  <source src="horse.ogg" type="audio/ogg">
  <source src="horse.mp3" type="audio/mpeg">
Your browser does not support the audio element.
</audio>
```
  
  
### How it works:-
  
The controls attribute is used to add audio controls, like play, pause, and volume.
Text between the <audio> and </audio> tags will be displayed in browsers which does not support the <audio> element.
Multiple <source> elements can be linked to different audio files. The browser will be using the first recognized format.


### Browser Suppor:-
  
  
| BROWSER | MP4  | WebM  |  OGG  |
| :----- | :- | :- | :- |
| Internet Explorer | YES | NO | NO |
| Chrome | YES | YES | YES |
| Firefox | YES | YES | YES |
| Safari | YES | YES | NO |
| Opera | YES(from Opera 25) | YES | YES |
  
  
### HTML Audio- Metho, Properties and Events:-

HTML5 is used to define DOM methods, properties, and events for the <audio> element.
This will allow you to load, play, and pause audios, and also set time duration and volume.
Other DOM events are also available which can notify you regarding the audio ie when it will begin to play, is paused, etc.
To have a look at full DOM reference, you can go to DOM Reference of our HTML5 Audio/Video.

  
  
### HTML5 AUDIO TAGS:-
  
| Tag | Description  |
| :----- | :- |
| `<audio>` | Defines sound content  |
| `<source>` |Defines multiple media resources for media elements, such as `<video>` and `<audio>` |
  
Multimedia will be handled more easily in the future thanks to HTML5.

------------
  
# Embed Multimedia

* `<embed>`
* `<object>`
* `<bgsound>`

Embed multimedia is nothing but adding media files(video, audios) to the HTML document. HTML allows adding multimedia to the HTML page. 
There are three ways of adding multimedia to HTML document.
  
| Tag | Description  |
| :----- | :- |
| `<embed>` | Embedding an external application or content into the current HTML documents |
| `<object>`| Embedded object or external object in an HTML documents |
| `<bgsound>`| used to insert a background audio track in an HTML Page | 

  
## `<embed>`
 
  
Embedding an external application or content into the current HTML documents.
The `<embed>` tag is used to insert an external application or content into an HTML document.
  
The tag can be specified like <embed src="" type=""> with the URL of the embedded resource added to the src attribute. 
Most of the browsers have supported the <embed> tag for a long time. <embed> tag has no content and therefore does not warrant a closing tag.

### Syntax

```html
  <embed>.. text here.. </embed>
```
  
Below media types can be used inside embed tag.  
 
* .swf files  - Macromedia's Flash program.
* Avi files   - Audio Video Interleaved.
* wmv files  - Microsoft's Window's Media Video file types.
* .mov files  - Apple's Quick Time Movie format.
* .mpeg files  - Moving Pictures Expert Group.
  
  
## Operational Attributes -
  
| Attribute | Description  | values  |
| :----- | :- | :- |
| height | Specifies the height of the plug-in.  | Number in pixels. |
| src | Specifies the embedded resource location. | URL |
| type | Specifies the linked resource type | type |
| width | Specifies the width of the plug-in.  | Number in pixels. |

  
  
### Example-
 
```html
  <!DOCTYPE html>
  <html>
    <head>
      <title>Embed tag example..</title>
    </head>
    <body>
      <embed src="img/logo.png" height="120px" weight="300px">
    </body>
  </html>
  ```

  ---------------
  
## `<object>`
  
Embedded object or external object in an HTML documents. The <object> tag represents an embedded object in an HTML document.
External object can be an image, external resource and plugin etc,. The tag can be specified like `<object type=""></object>` or `<object data=""></object>`.

Type and data attributes are mandatory and atleast one of the attribute is needed along with `<object>` tag. `<object>` tag can be used to embed multimedia also in to the HTML document. `<object>` tag can be used to embed another webpage also in to the HTML document.
  
An `<object>` element should be coded inside the `<body>` element. 
The text between the `<object>` and `</object>` is an fallback text. Objects are no longer appear inside the `<head>` element of a document in HTML5.


 ### Syntax

```html
  <object>…. </object>
``` 
  
### Example

```html
  <!DOCTYPE html>
  <html>
    <head>
      <title>Object tag example..</title>
    </head>
    <body>
      <embed height="120px" weight="300px" data="img/logo.png">
      Browser do not support object tag
    </body>
  </html>
```
  
--------------
  
## `<bgsound>`

The `<bgsound>` element was used to insert a background audio track in an HTML Page.
The `<bgsound>` element was introduced by Microsoft into the Internet Explorer browser. 
  
So no other browsers are supports the <bgsound> tag. It allowed web designers to add a background audio loop to a website in internet explorer.
It is no longer supported.
  
This feature is non-standard and is not on a standards track.
The `<audio>` element can be used to add background sounds instead of `<bgsound>` tag. But it has autoplay attribute and can’t be disabled.
  

## Operational Attributes -
  
| Attribute | Description  | 
| :----- | :- | 
| Balance |Defines the volume divided between the speakers.The values in between -10000 to +10000  | 
| loop | The attribute indicates the number of times a sound is to be playedThe values are numbers or “infinite” | 
| src | Specifies the URL of the sound file. | 
| volume | Specifies the loudnessThe value is between -10000 and 0 |
  
  
### Syntax

```html
  <bgsound>…. </bgsound>
``` 
  
### Example

```html
  <!DOCTYPE html>
  <html>
    <head>
      <title>Bgsound tag example..</title>
    </head>
    <body>
      <bgsound src="audio/new.png">
    </body>
  </html>
``` 
  
  
  
  
  








