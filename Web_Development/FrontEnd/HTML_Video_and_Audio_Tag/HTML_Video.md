# HTML Video Tag 

## Video Tag 
The video tag is a tag provided by HTML through which a programmer can add video on their HTML page to make your HTML page more beautiful.

We can add multiple source for video and the browser uses the first source that is supported by the browser.

It is not a self-closing tag.

The text added between the video tag is displayed only when the video sources is not supportedby the browser. 

Video tag contains many attributes for different features.

### Attributes

- src - Source of the video.
- autoplay - This autoplays video.
- controls - Video controls are displayedon website.
- height - Height of the video.
- width - Width of the video.
- loop -  This loops the video i.e. video is played again after it finishes.
- muted - Mutes the audioof the video.

### Example

```
<video width="520" height="520" controls> 
  <source src="movie.mp4" type="video/mp4">
  <source src="movie.ogg" type="video/ogg">
  Your browser does not support the video tag.
</video>
```
### References
- [W3schools](https://www.w3schools.com/tags/tag_audio.asp)
- [MDN](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/video)
