### Requirements

-   c++: std >= 17
-   make: Win32 gnu make | Darwin xcode command line tools | Ubuntu build-essential | \*nix GNU gcc
-   Standard headers:

```c++
    #include <iostream>
    #include <fstream>
    #include <string>
    #include <sstream>
    #include <vector>
    #include <iomanip>
    #include <algorithm>
```

### Usage

```bash
$ tar -xzvf my_submission.tar.gz # extract submission tarball
$ cd path/to/folder # change dir to submission folder
$ make clean # clean all outputs if any
# (only works on *nix platforms, Windows needs manual deletion of *.o binaries)
$ make # compile, link, etc.
$ ./output/main # execute the main driver
# if unable to execute on *nix platforms
$ chmod +x ./output/main
```

### Usage docker

-   If using container, `Ubuntu:latest` will work after installing `build-essential` package.
-   If using supplied Docker configs, user input might not work for Q1b, even with `-it` flags.
