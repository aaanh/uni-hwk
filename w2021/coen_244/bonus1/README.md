Requirements:

-   C++17 Standard or later
-   make or cmake

Environments tested:

-   Windows 10 x86 64-bit with MinGW W64
-   macOS (Darwin) Catalina with Apple Clang++ 12.0.0
-   Ubuntu 20.04 Focal Fossa with c++ in build-essential package

Usage:

```zsh
$ tar -xzvf 40152583-bonus1-coen244.tar.gz
$ cd 40152583-bonus1-coen244
$ make
$ cd bin
$ ./main
```

The program and the shuffling will end when segmentation fault occurs due to indexing.

This fact is utilized to actually end the program. Try catch block would be a bit too tedious for this demo.

On Windows, use 7zip.
