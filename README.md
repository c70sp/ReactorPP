# Reactor++

Trying my very best at simulating the inside of a nuclear reactor. <br>
This is done using my own OpenGL based rendering engine made in C++. <br>
Both the engine and the reactor simulation are still WIP. <br>
As of right now, I am just trying to get the basic gist of it, so that I can make small scale and simplified simulations work properly in 2D. <br>
Might switch to 3D at some point, especially since I am coding my render engine with 3D maths like matrices in mind. <br>
Until then I need to do a lot more. <br>

### TODO:
- Better collision checking, so that it runs smoothly with ~1000 atoms (more is always better) while at criticality or even prompt criticality (reactivity of 0 or greater).
- Add Xenon and Iodine poisoning
- (maybe) Branch of to a more realistic variant which will run on actual (though more simplified) nuclear physics
- (maybe) Branch of to a full NPP simulation
<br>
This project is by no means supposed to be even slighly realistic, this is just for the visualization of what is actually happening in the core, and is very very simplified.<br>
<br>

$${\color{orange}IMPORTANT}$$ This will likely not run on most hardware, as it is not any official release. If you want to run it, you need to recompile it yourself.
