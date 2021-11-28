# HTML Audio Tag 

The Audio tag is a tag provided by HTML through which a programmer can add audio on their HTML page to make your HTML page more beautiful.  
We can add multiple source for audio and the browser uses the first source that is supported by the browser.  
It is not a self-closing tag.  
The text added between the audio tag is displayed only when the audio sources is not supportedby the browser.   
Audio tag contains many attributes for different features.  

### Attributes
- src - Source of the audio.
- autoplay - This autoplays audio.
- controls - Audio controls are displayedon website.
- loop -  This loops the audio i.e. audio is played again after it finishes.
- muted - Mutes the audioof the audio.

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
