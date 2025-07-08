# Zycore - Platform-independent types, macros, and fallbacks for environments without LibC.

This is a [`build2`](https://build2.org/) package repository for [`zycore-c`](https://github.com/zyantific/zycore-c), a library providing platform-independent types, macros, and fallbacks for environments without LibC.

This file contains setup instructions and other details that are more appropriate for development rather than consumption. If you want to use [`zycore`](https://github.com/zyantific/zycore-c) in your [`build2`](https://build2.org/)-based project, then instead see the accompanying [`PACKAGE-README.md`](libzycore/PACKAGE-README.md) file.

The development setup for [`zycore`](https://github.com/zyantific/zycore-c) uses the standard [`bdep`](https://build2.org/bdep/doc/bdep.xhtml)-based workflow. For example:

```
git clone .../zycore.git
cd zycore

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
