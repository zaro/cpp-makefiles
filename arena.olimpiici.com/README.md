# Generic Makefile for Arena Olimpiici competition

This structure assumes 1 CPP file per executable, the name of the executable is the same as the cpp file.

You can configure the compilation flags by setting the CXX_FLAGS variable at the top.

In addition to the compilation, this Makefile supports running tests for the .exe as defined on https://arena.olimpiici.com website.

Tests are enabled by putting the following comment in the CPP file :

```cpp
// TEST_ZIP: https://arena.olimpiici.com/api/public/problems/XXXXXXX/zip?download=true
```

where the URL is the download URL of th test data zip.

# Examples

```sh
# compile each *.cpp to respective .exe
make
# compile regional-e-2009-song.cpp , download and run the tests for it
make test.regional-e-2009-song
# clean/remove all compiles .exe
make test-clean
```

Test output looks like that:

```

***** Begin testrun 2023-10-12T20:36:24+03:00
* song.00.in : PASS (0.00ss / 4mb)
* song.01.in : PASS (0.00ss / 4mb)
* song.02.in : PASS (0.00ss / 4mb)
* song.03.in : PASS (0.00ss / 4mb)
* song.04.in : PASS (0.00ss / 4mb)
* song.05.in : PASS (0.00ss / 4mb)
* song.06.in : PASS (0.00ss / 4mb)
* song.07.in : PASS (0.00ss / 4mb)
* song.08.in : PASS (0.00ss / 4mb)
* song.09.in : FAIL (0.00ss / 4mb)
song.09.sol                                                      song.09.out
================                                              ===================
YES                                                           | NO
                                                              > 1990050128
* song.10.in : FAIL (0.00ss / 4mb)
song.10.sol                                                      song.10.out
================                                              ===================
NO                                                              NO
2413827161664                                                 | 55541312
                                                              <
***** Summary:
Ran:          11
Failed:       4

```

The status for each test is :
`* [TEST_NAME] : PASS/FAIL (execition time in seconds/ max memory used in mb)`

If the test PASSes nothing more is printed, if it FAILs, below a side by side diff is printed of the .sol (expected solution output) and .out (the current solution output).

A full explanation of the diff format can be found here : https://www.gnu.org/software/diffutils/manual/html_node/Side-by-Side.html
