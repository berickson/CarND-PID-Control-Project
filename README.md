# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

- Brian Erickson

## Reflections

The goal of this project was to implement a PID controller to control a car on a simulated track using error from a predetermined course.

The basics of creating the PID are very easy, you use the error in the P, or proportional term, the sum of the error in the I or Integral term, and the derivitive of the error in the D term.

I chose to manually tune the PID.  First I raised the P term to the point of instability, and then gradually increased the D term to make the car stable.  I don't think that an I term was necessary, but I introduced a small I term in case the car has non-centered steering.

For fun, I also introduced a PID for the speed control.  I keep the car at a constant speed of 

The final submission is able to keep on the road without hitting the sides, but it isn't as smooth as I would hope it to be, and it isn't able to reach stability at 100 mph.  I ended up liking the output at 25 mph, much above that, it isn't as smooth, and finally it becomes unstable.

You can see video of the simulator at https://www.youtube.com/watch?v=LWYJzUif5M0

I don't know for sure, but it looks like the CTE may be done based on a recorded run, instead of using the center of the road.  I think this because the output is jerky at very specific loctions on the track, like there is either a quantized path, or the path was from a human driver.

---

## Dependencies

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* [uWebSockets](https://github.com/uWebSockets/uWebSockets) == 0.13, but the master branch will probably work just fine
  * Follow the instructions in the [uWebSockets README](https://github.com/uWebSockets/uWebSockets/blob/master/README.md) to get setup for your platform. You can download the zip of the appropriate version from the [releases page](https://github.com/uWebSockets/uWebSockets/releases). Here's a link to the [v0.13 zip](https://github.com/uWebSockets/uWebSockets/archive/v0.13.0.zip).
  * If you run OSX and have homebrew installed you can just run the ./install-mac.sh script to install this
* Simulator. You can download these from the [project intro page](https://github.com/udacity/CarND-PID-Control-Project/releases) in the classroom.

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./pid`. 

