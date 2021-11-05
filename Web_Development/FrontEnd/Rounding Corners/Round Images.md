## Round-Images

With the attribute ``` border-radius: ; ``` we can also round the corners of the images to make it fit into a desired border like in a circle or oval shape, etc. It is similar to when we rounded the corners of a `div` body.

### SYNTAX:

* Firstly put your image in a div tag.
* Then, in your CSS stylesheet:
   
   ```CSS
   div{
     border-radius: Value (in %,length,etc);
     background-image: url('image link or path');
   }

   ```

### PROPER WAY TO ROUND UP AN IMAGE:
* CODE:
```css
div{
    width: 500px;
    height: 500px;
    border: 2px solid #ccc;
    border-radius: 50%; /*Rounds the image into a circle*/
    background-image: url('https://res.cloudinary.com/twenty20/private_images/t_standard-fit/photosp/8cc06a0a-966d-4a08-87ac-5752020312a1/stock-photo-animal-pets-cat-cute-kitten-pet-beautiful-kitty-8cc06a0a-966d-4a08-87ac-5752020312a1.jpg');
     background-position: center center;  /* Positions the image in center */
}
```
* OUTCOME:
   Original Image:

    ![An image of a cat](https://res.cloudinary.com/twenty20/private_images/t_standard-fit/photosp/8cc06a0a-966d-4a08-87ac-5752020312a1/stock-photo-animal-pets-cat-cute-kitten-pet-beautiful-kitty-8cc06a0a-966d-4a08-87ac-5752020312a1.jpg)
    
    Result:

   ![An image of a cat (Rouned)](2021-11-05-20-43-03.png)