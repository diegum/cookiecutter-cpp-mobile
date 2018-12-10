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

For Android, build the demo with:

    $ buck install --run android_sample

### iOS

    $ buck install --run ios_sample

### Terminal (macOS, Linux, Windows, ...)

    $ buck run terminal

## Testing

This library aggregates a Catch/2 test framework. To build and run tests:

    $ buck run test

## Project Generation

You can create projects for IntelliJ (Android) and Xcode (iOS) so you
can use your IDE to make changes to your project still.  This is
unnecessary if you happen to be using [Nuclide](http://nuclide.io/).

### Android

    $ buck project android_sample --ide intellij

If you are on Windows, you'll want to run:

    > buck project android_sample --experimental-ij-generation

### iOS

    $ buck project ios_sample --ide xcode
