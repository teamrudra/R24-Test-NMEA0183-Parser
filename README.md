# GPS Library
This repo contains the code for a NMEA0183 parser library.
The `test` folder contains unit tests.

NMEA0183 is a standard followed by GPS manufacturers which allows users to get data using a common format.

## Instructions
1. Fork this repo
2. Select an ISSUE to work on from the ISSUES section
4. Commit and push your changes to the fork
5. When told, make a PULL REQUEST describing the changes and include the details.

## Building
The unit tests can built and run as follows:
```
$ cd tests
$ cc unity.c test_checksum.c ../*.c -I .. -o test_checksum.out -g
```
Above example builds the `test_checksum` unit test. It can be run as follows:
```
$ ./test_checksum
test_checksum.c:20:test_checksum_over_examples:PASS

-----------------------
1 Tests 0 Failures 0 Ignored
OK
```
All test cases pass, in this case.
