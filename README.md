
# Cookiecutter C++ Mobile

A [cookiecutter](https://github.com/audreyr/cookiecutter) template to easily start mobile, cross-platform C++ library projects (e.g., Android, iOS, ...)

## What's about

Imagine that you are working on a mobile app, game, etc., and you want to reuse the core logic from a cross-platform C++ library that can be later consumed from both Android and iOS.
You just enter the following terminal command:

    $ cookiecutter https://github.com/diegum/cookiecutter-cpp-mobile.git

    Repo [my-cpp-lib]: amazing-app-core
    Brief_description [What's this C++ library for?]: This repo contains the core logic of my amazing app
    Library_name [mylib]: core
    Year [2019]:
    Copyright_holder [<YOUR NAME OR COMPANY HERE>]: John Doe

What you'll get is a pre-baked `hello-world`-like project with the following structure:

    amazing-app-core
    ├── src           // Here goes your common library
    │   ├── core.h
    │   └── core.cc
    ├── samples
    │   ├── android   // An Android app that uses it via JNI
    │   ├── ios       // An iOS app that uses it via ObjC++
    │   └── terminal  // A command line sample
    └── tests         // A Catch2 canary test
        ├── catch.hpp
        └── core_tests.cc

Thus, you got a simple, fully working reference sample to start from.
You can build it from your favorite IDE or just from the command line.

## Prerequisites

1. To create new projects from this template, you'll need [Cookiecutter](https://github.com/audreyr/cookiecutter).
    1. Create new projects from the command line with `cookiecutter https://github.com/diegum/cookiecutter-cpp-mobile.git`.
2. To build, install and run on Android and on iOS, you'll need [Buck](https://buckbuild.com).
    1. Build, install to and run on an Android device from the command line with `buck install --run android_sample`.
    2. Run library unit tests with `buck run test`.
3. For Android, in particular, you'll need both the [Android SDK](https://developer.android.com/studio/) for Java & Kotlin code, and the [Android NDK](https://developer.android.com/ndk/) for C++.
4. For iOS, you'll need the Xcode command line tools package (which comes included with Xcode or could be installed separately). This implicitly means that a macOS is also a requirement to build for iOS.

This template comes with [Catch2](http://catch-lib.net/) for unit testing.

## FAQ

- Why Buck and not [CMake](http://www.cmake.org/)?
I used CMake for years and it's a very mature build system. In many ways ahead of Facebook's Buck. Notwithstanding, Buck features Android and iOS integration out-of-box.
It's a goal to offer either build system at some point.
- Why Catch2 and not [Google Test](https://github.com/abseil/googletest)?
Catch2 is a lightweight, easy-to-use Test-Driven Development (TDD) or Behavior-Driven Development (BDD) framework that got a lot of momentum these recent years. Curiously, the Buck command `buck test` only takes `gtest` or `boost` as xUnit test frameworks. Not yet Catch2.
However, Catch2 consists on a single .hpp file that comes included in the template. In comparison, GTest would have implied yet another requirement. You may still apply your own GTest cases if you want. Like with CMake, this project template will offer a GTest canary sample as an alternative to Catch2.
- Are more samples expected?
I'm working on an optional [Unreal Engine](https://www.unrealengine.com) sample that applies the cross-platform library as a UE4 project third-party module. Unreal Engine is already a cross-platform C++ game framework (so there wouldn't be a need to integrate C++ logic as a static library), but the main goal of this project template is to enable the creation of fully cross-platform libraries that aren't bound or siloed to any end-app code base in any way.
- What about continuos integration?
The idea is to incorporate integration to Jenkins, Travis CI and other continuous integration servers. Even Git hooks that would prevent a merge to the master branch if, namely, tests don't pass.
- Can anybody contribute?
A big yes! [Fork this repo](https://help.github.com/articles/fork-a-repo/) and get familiar with its organization. Work on your features and, when ready, submit a PR to merge it back. Don't forget to update this README :-)
