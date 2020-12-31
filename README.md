# toy-self-playing
A Toddler 2-in-1 Piano and Xylophone that plays it self useing the power of imagination... and code.

They are messy and hot glued to hell but I didn't think a cheap toy such as this one warranted 3d printed parts or anything else to elaborate. 
I used fishing line (20lb Test) and a pencil to rig the keys to the servos (20201231_090508.jpg). 
I had to cut some of the key arms to allow room for the servos as you can see in the picture (20201231_090531.jpg). 
The 9 volt battery is also cheaply rigged to a switch and the Prototyping board to power the Arduino Nano I could not find and LIPO batteries in my area.

# Parts-needed
-5 Inland 9G Micro Servos
-Hacksaw blade
-Lighter
-Hot glue and hot gule gun
-fishing line
-No.2 pencil
-Jumper Wires
-9volt battery connectors
-A, 2 way switch
-A few 9volt batteries for back ups
-Arduino Nano or another Arduino compatible micro controler with 5 output pins and a 5volt pin
[optional]
-Solder Prototyping Board
-Equiptment to solder all components


#Steps-to-build
1 = Take out all screws of the toy and seperate out all the components.
2 = Heat up the hacksaw blade and poke a hole in the bottom of the plastic that holds up each specific key refrence picture(094531.jpg)
    This is so the fishing line can go from the servo arm, through the hole, around the pencil, and to the key wraped through the hole on the top.
    (there are many ways to do this step to get the desired effect, this is just how i decided to construct my system)
3 = Hot glue the pencil underneath the keys, on the plastic that supports the keys.
4 = Start to align the servos within all the key arms, or in such a way that they can pull the fishing line to move the keys.
5 = Once you are happy with their layout, attach the servos arm and hot glue them where they need to be with the servos arm in the downward most position.
6 = Cut a slot in the side of the toy for your switch to turn it on and off, then hot glue in the switch.
7 = Attach the fishingline to the end of the servo's arm, then run it through the hole you created around the pencil you glued in and up to the key, do this for all keys.
    (use what ever knots you know to tie so it will not be undone and keep the line as tight as you can)
8 = Wire in the Arduino to all the required servo motors, dont worry about the switch or the 9 volt right now. This step is check and guess so take your time.
    You need to find the servo position where the fishing line is tight, and the position that the key will be hit. Play with the calibration in the Arduino ide until all the       keys will strike and reset efficently.
9 =  Connect the switch in the middle of the 9volt connector positive wire.
10 =  Wire the end of the 9volt connector wires positive, and negative to the VIN, and the GND on the Arduino Nano, respectivly.
11 = Ensure all the servos ground connectors and positive connections are good from before and attach the control pins to their respective servos
12 = Upload the code in this repository to the Arduino Nano adjusting the pos(your number forn the servo here) varibles with your own calibrated ones, and the project should be      done try making some of your own songs!

    The only thing that i have noticed is that if the battery on the 9 volt is low it has trouble playing the double notes. ex[play_g_a();]

Please Refrence the pictures to give you the best idea of how I did everything.
