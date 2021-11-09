With the high use of web devices, their sizes and specifications vary, and the displays they use could be different. Pixel density of the devices that may be different on one device from others and this density is known as Pixel Per Inch(PPI) or Dots Per Inch(DPI). The most popular  display is the one known as a "Retina Display" on the latest Apple MacBook Pro notebooks, and recently iMac computers. Due to the difference in pixel density between a "Retina" and "Non-Retina" displays, some images that have not been made with a High-Resolution Display in mind could look "pixelated" when rendered on a High-Resolution display.

The simplest way to make your images properly appear on High-Resolution Displays, such as the MacBook Pros "retina display" is to define their width and height values as only half of what the original file is. Here is an example of an image that is only using half of the original height and width:

### Display Resolution
The display resolution or display modes of a digital television, computer monitor or display device is the number of distinct pixels in each dimension that can be displayed. ... In digital measurement, the display resolution would be given in pixels per inch (PPI).

There are two types of display resolution we can define :-

1) Low Display Resolution : The display in which Pixels per inch has low value is called low display resolution .It is Less sharper as compare to high resolution.
2) High Display Resolution : The display in which Pixels per inch has higher value as compared to other is called the high display resolution and it is more clear.

 Here is an example of an image that is only using half of the original height and width:

```css
<style>
  img { height: 250px; width: 250px; }
</style>
<img src="coolPic500x500" alt="A most excellent picture">
```

### Reference

1. [FreeCodeCamp](https://www.freecodecamp.org/learn/responsive-web-design/responsive-web-design-principles/use-a-retina-image-for-higher-resolution-displays)
2. [wikipedia](https://en.wikipedia.org/wiki/Display_resolution)
