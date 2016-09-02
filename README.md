# Origami

This is a small sample code project to help you get started with KDE’s [Kirigami](https://techbase.kde.org/Kirigami) toolkit. This sample code is [CC0 1.0 Public Domain](https://creativecommons.org/publicdomain/zero/1.0/) – that means it comes with no strings attached and you can use it however you like.

Kirigami may be used in different ways with cmake or qmake. This example only use qmake and simply includes Kirigami's `kirigami.pri` file, which seems to be the simplest way to get started on different platforms (it's supposed to work on and/or for Linux, Windows, macOS, Android, iOS).

## Getting started

First clone the repo:
```
git clone https://github.com/bearsh/origami.git
```
init and update kirigami which is included as submodule
```
git submodule update --init
```
afterwards open `origami.pro` in qtcreator or kdevelop