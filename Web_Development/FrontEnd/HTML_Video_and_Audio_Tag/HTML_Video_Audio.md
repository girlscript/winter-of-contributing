# HTML Video Tag 

The video tag is a tag used by a programmer to add video on their HTML page to make the HTML page more beautiful and interactive.  
We can add multiple source for a video and the browser uses the first source that is supported by the browser.  
It is not a self-closing tag.  
The text which is added between the video tag is displayed on the web page only when all video sources in video tag is not supported by the browser.   
Video tag can contain many attributes for different uses.  
Given below is the most commonly used attributes with the video tag.  

### Attributes

- src - Source of the video to be added.
- autoplay - This autoplays video.
- controls - Video controls are displayed on web page for the user.
- height - Height of the video to be displayed.
- width - Width of the video to be displayed.
- loop -  This loops the video i.e. video is played again after it finishes.
- muted - Mutes the audio of the video.

### Example
```
 <video width="520" height="520" controls> 
  <source src="movie.mp4" type="video/mp4">
  <source src="movie.ogg" type="video/ogg">
  Your browser does not support the video tag.
</video>
```

# HTML Audio Tag 

The Audio tag is a tag used by a programmer to add audio on their HTML page to make the HTML page more interactive and engaging.  
We can add multiple source for a audio and the browser uses the first source that is supported by the browser.  
It is not a self-closing tag.  
The text which is added between the audio tag is displayed on web page only when all the audio sources is not supported by the browser.   
Audio tag can contain many attributes for different uses.   
Given below is the most commonly used attributes with the audio tag.  

### Attributes

- src - Source of the audio to be played.
- autoplay - This autoplays audio.
- controls - Audio controls are displayed on website for the user.
- loop -  This loops the audio i.e. audio is played again after it finishes.
- muted - Mutes the audio of the audio.

### Example
```
<audio controls>
  <source src="music.ogg" type="audio/ogg">
  <source src="music.mp3" type="audio/mpeg">
  Your browser does not support the audio tag.
</audio>
```

### References

- [W3schools](https://www.w3schools.com/tags/tag_audio.asp)
- [MDN](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/video)
