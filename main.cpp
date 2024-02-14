#if false

// commit test

/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:        dog
//  action 1:    the dog barks
dog.bark();
//  action 2:    the dog sleeps
dog.sleep();
//  action 3:    eats meat
dog.eatMeat();
//  2)
//  Noun:        tree
//  action 1:    the tree produces oxygen
tree.produceOxygen();
//  action 2:    the tree    hosts birds
tree.hostBirds();
//  action 3:    the tree    produces fruits
tree.produceFruit();
//  3)
//  Noun:        microphone
//  action 1:    the microphone capture sounds
microphone.captureSound();
//  action 2:    the microphone enhances voice tone
microphone.enhanceVoiceTone();
//  action 3:    the microfone transfer signal
microphone.transferSignal();
//  4)
//  Noun:        computer
//  action 1:    the computer calculates
computer.calculate();
//  action 2:    the computer stores data
computer.storeData();
//  action 3:    the computer sends data
computer.sendData();
//  5)
//  Noun:        eye
//  action 1:    the eye sees
eye.see():
//  action 2:    the eye blinks
eye.blink();
//  action 3:    the eye adjusts
eye.ajust();
//  6)
//  Noun:        guitar
//  action 1:    the guitar plays
guitar.play();
//  action 2:    the guitar distorces sound
guitar.distorceSound();
//  action 3:    the guitar plays power chords
guitar.playPowerChords();
//  7)        
//  Noun:        pencil
//  action 1:    the pencil writes
pencil.write();
//  action 2:    the pencil draws
pencil.draw();    
//  action 3:    the pencil colors
pencil.color();

//  8)
//  Noun:        gun
//  action 1:    the gun fires
gun.fire();
//  action 2:    the gun intimidates
gun.intimidate();
//  action 3:    the gun kill
gun.kill();
//  9)
//  Noun:        audioInterface
//  action 1:    the audioInterface plays
audioInterface.play();
//  action 2:    the audioInterface records
audioInterface.record();
//  action 3:    the audioInterface sets samplerate
auidoInterface.setSamplerate();
//  10)
//  Noun:        bicycle
//  action 1:    the bicycle rides
bicycle.ride();
//  action 2:    the bicycle pedals
bicycle.pedal();
//  action 3:    the bicycle brakes
bicycle.brake();

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
