# Unreal C++ Tutorial 
### Player Character Series – Punch – Part 3 - Collision Events

Hey guys,

This is the starter project for the third part of our Player Character series taking about collision events.

The topics we are going to cover in this tutorial are:
* [Delegates – 04:00](https://youtu.be/K9yp5bpEXXQ?t=240) – delegates allow us to defer logic from specific events to our internal methods based on aligning our method signature with what the delegate expects.
* [OnComponentHit – 05:00](https://youtu.be/K9yp5bpEXXQ?t=299) – OnComponentHit provides is with information when a block event occurs between two entities in the world.
* [FHitResult – 15:00](https://youtu.be/K9yp5bpEXXQ?t=900) – the FHitResult struct contains a lot of important information not only about the entity we are colliding with but also all the details about the collision, point of impact, various transform vectors, time, distance, etc etc
* [OnComponentBeginOverlap / OnComponentEndOverlap – 18:00](https://youtu.be/K9yp5bpEXXQ?t=1078) – these are notifications that will fire during the course of our animation playback and trigger specific events on our player character. In our case we are simply going to enable the collisions on our collision boxes.

You can find more details here: http://jollymonsterstudio.com/2018/11/30/unreal-c-tutorial-player-character-series-punch-part-3-collision-events/

You can find the associated video tutorial here: https://youtu.be/K9yp5bpEXXQ

The master branch of this project is the starter while part3-end is the fininished lesson.

Hope this helps, Thanks.
