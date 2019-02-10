# {{ cookiecutter.Repo }}

{{ cookiecutter.Brief_description }}

(TODO: Put your longer description here)

---

This C++ library is cross-platform and comes with sample apps (iOS and Android)
that show how to include it.

## Building requirements

Make sure you've [installed Buck](https://buckbuild.com/setup/install.html),
and if you want to use the Android code, make sure you've [setup your
environment properly](https://buckbuild.com/setup/getting_started.html)

## Building and running

You can build the demo applications from the command line!

### Android

For Android, make sure that you have the [Android NDK](https://developer.android.com/ndk/) to build the C++ portion. You'll also need the [Android SDK](https://developer.android.com/studio/) for Java & Kotlin code. Build the demo with:

    $ buck install --run android_sample

### iOS

Only available on macOS systems. Make sure that your Mac has the Xcode command line tools package -if your machine has Xcode, it does have the command line tools-. Buck also requires [`fbsimctl`](https://github.com/facebook/FBSimulatorControl/tree/master/fbsimctl) installed. Build the demo with:

    $ buck install --run ios_sample

### Terminal (macOS, Linux, Windows, ...)

    $ buck run terminal

## Software craftsmanship

### Testing

This library aggregates a [Catch/2 test framework](http://catch-lib.net/). To build and run tests:

    $ buck run test

### Documentation

Make sure that you have [Doxygen](http://www.doxygen.nl) installed in your machine and generate the Javadoc-like documentation with:

    $ buck run doc

### Style checking

Make sure that you have [Cppcheck](http://cppcheck.sourceforge.net) installed in your machine. Look for potential C++ coding style violations with:

    $ buck run lint

## Project generation

You can create projects for IntelliJ (Android) and Xcode (iOS) so you can use your IDE to make changes to your project still.

### Android

    $ buck project android_sample --ide intellij

If you are on Windows, you'll want to run:

    > buck project android_sample --experimental-ij-generation

### iOS

    $ buck project ios_sample --ide xcode
