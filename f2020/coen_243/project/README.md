# COEN 243 Final Project

Requirements:

-   C++17 Standard and up
-   make or cmake

Compile and run:

-   To compile the project, use the supplied `makefile` at project's root directory

```
~/path/to/project> $ make
```

-   Note: On Linux/Unix systems, you might need to make those binaries executable by:

```
~/path/to/project/bin> $ chmod +x [output filename] or # chmod +x [output filename]
```

-   The compiled program, `main.exe` for Windows or `main` for Unix, is put into `bin` folder.
-   The program naively relies on simple absolute directory path. Therefore changes to folder names in the project will result in errors.
