# HTML Multimedia
##### Multimedia on the web is sound, music, videos, movies, and animations.

--------------------------
<br>

### What is Multimedia?


It can be anything you can hear or see, such as photos, music, sound, videos, records, films, animations, and so on. Web sites frequently incorporate multimedia content of various sorts and formats.
<br>

### Multimedia Tags
HTML allows adding different multimedia files on your website by various multimedia tags. These tags include:


* ```<audio>``` for displaying a audio file on the web page,
* ```<video>``` for displaying a video file on the web page,
* ```<embed>``` for embedding multimedia files on the web page,
* ```<object>``` for embedding multimedia files on the web page.
* ```<iframe>``` for embedding other web pages


<br>

### Multimedia Formats
Media files include multimedia components such as audio and video. The file extension can be used to determine the file type.
Multimedia files have formats and different extensions: .mp3, .mp4, .mpg, .swf, .wav, .mpg, .wmv, and .avi.

---------------------



### Video Formats 
<br>

| FORMAT | FILE  | DESCRIPTION  |
| :----- | :- | :- |
| MPEG | .mpg .mpeg | The Moving Pictures Expert Group came up with this format. It was the first widely used video format on the internet. HTML5 does not support this. |
| AVI(Audio Video Interleave) | .avi | This format was created by Microsoft. It is commonly found in television gear and video cameras. It runs smoothly on Windows PCs but not in web browsers. |
| WMV(Windows Media Video) | .wmv | This format has been developed by Microsoft. It is normally used in TV hardware and video cameras. It plays well on Windows computers, but not in web browsers. |
| QuickTime | 	.mov | This format was created by Apple. It is commonly found in television gear and video cameras. It works fine on Mac machines but not in web browsers. |
| RealVideo | .rm .ram | Real Media created this format, which enables for low-bandwidth video streaming. It's still used for Internet TV and online video, but it doesn't work in web browsers. |
| Flash | .swf .flv | This format was created by Macromedia. To play on a web browser, it is frequently necessary to install a plug-in. |
| OggTheora Ogg | .ogg | This format was created by the Xiph.Org Foundation. HTML5 is compliant. |
|WebM| .webm | Mozilla, Opera, Google, and Adobe collaborated to create this format. HTML5 is compliant. |
|MPEG-4 or MP4| .mp4 | The Moving Pictures Expert Group came up with this format. It is commonly found in television gear and modern video cameras. YouTube has recommended this video. All HTML5 browsers support it. |

<br>

## Audio Formats
The newest format for compressed recorded music is MP3. This term is synonymous with digital music.
</br>
| FORMAT | FILE  | DESCRIPTION  |
| :----- | :- | :- |
| MIDI (Musical Instrument Digital Interface) | .mid .midi | This is the standard format for all electronic music players (e.g. synthesisers and PC sound cards). MIDI files include digital notes that can be played by electronics, but no sound. It works great on musical instruments and PCs, but not on web browsers. |
| RealAudio | .rm .ram | Allows for low-bandwidth audio streaming. It does not work on web browsers. |
| WMA | .wma | Microsoft created this format, which is often used in music players. It runs smoothly on Windows PCs but not in web browsers. |
| AAC | 	.aac | Apple created this format as the default format for iTunes. It works fine on Mac machines but not in web browsers. |
| WAV | .wav | This format was created by IBM and Microsoft. It works nicely on Windows, Linux, and Macintosh computers. HTML5 is compliant. |
| Ogg | .ogg .flv | This format was created by the Xiph.Org Foundation. HTML5 is compliant. |
| MP3 | .mp3 | This is the most common music player format. The format offers great quality and good compression (compact files). Supported by all browsers. |
|MP4| .mp4 | This is a video format, although it may also be used for audio. MP4 video is the internet's future video standard, with all browsers automatically supporting MP4 audio. |

---------
<br>
  
### Browser Support
The main browsers have taken varied approaches to audio, video, and animation. They accept a variety of formats, although some of them require plug-ins to function.

Multimedia will be handled more easily in the future thanks to HTML5.

</br>

### The HTML Video Element

To show a video in HTML, use the <video> element:
```sh
<video width="320" height="240" controls>
  <source src="movie.mp4" type="video/mp4">
  <source src="movie.ogg" type="video/ogg">
Your browser does not support the video tag.
</video>
```

### The HTML Audio Element
To play an audio file in HTML, use the <audio> element:
```sh
<audio controls>
  <source src="horse.ogg" type="audio/ogg">
  <source src="horse.mp3" type="audio/mpeg">
Your browser does not support the audio element.
</audio>
```


