

Animations can add visual cues that notify users about what's going on in your app. They are especially useful when the UI changes state, such as when new content loads or new actions become available. Animations also add a polished look to your app, which gives it a higher quality look and feel.

Android includes different animation APIs depending on what type of animation you want, so this page provides an overview of the different ways you can add motion to your UI.

To better understand when you should use animations, also see the material design guide to motion.


### **Types of animation in Android Studio**

## **Animate bitmaps**

When you want to animate a bitmap graphic such as an icon or illustration, you should use the drawable animation APIs. Usually, these animations are defined statically with a drawable resource, but you can also define the animation behavior at runtime.
![image](https://developer.android.com/training/animation/videos/drawable-animation.gif)


For example, animating a play button transforming into a pause button when tapped is a nice way to communicate to the user that the two actions are related, and that pressing one makes the other visible.


## **Animate UI visibility and motion**

When you need to change the visibility or position of views in your layout, you should include subtle animations to help the user understand how the UI is changing.


To move, reveal, or hide views within the current layout, you can use the property animation system provided by the android.animation package, available in Android 3.0 (API level 11) and higher. These APIs update the properties of your View objects over a period of time, continuously redrawing the view as the properties change. For example, when you change the position properties, the view moves across the screen, or when you change the alpha property, the view fades in or out.

To create these animations with the least amount of effort, you can enable animations on your layout so that when you simply change the visibility of a view, an animation applies automatically. For more information, see Auto Animate Layout Updates.

To learn how to build animations with the property animation system, read the Property Animation Overview. Or see the following pages to create common animations:



* Change a view visibility with a crossfade
* Change a view visibility with a circular reveal
* Swap views with a card flip
* Change the view size with a zoom animation


### **Physics-based motion**

Whenever possible, your animations should apply real-world physics so they are natural-looking. For example, they should maintain momentum when their target changes, and make smooth transitions during any changes.

To provide these behaviors, the Android Support library includes physics-based animation APIs that rely on the laws of physics to control how your animations occur.
![image](https://developer.android.com/images/guide/topics/graphics/targetchange_pba.gif)


Two common physics-based animations are the following:



* Spring Animation
* Fling Animation

Animations not based on physics—such as those built with ObjectAnimator APIs—are fairly static and have a fixed duration. If the target value changes, you need to cancel the animation at the time of target value change, re-configure the animation with a new value as the new start value, and add the new target value. Visually, this process creates an abrupt stop in the animation, and a disjointed movement afterwards, as shown in figure 3.

Whereas, animations built with physics-based animation APIs such as DynamicAnimation are driven by force. The change in the target value results in a change in force. The new force applies on the existing velocity, which makes a continuous transition to the new target. This process results in a more natural-looking animation, as shown in figure 4
