#!/bin/sh

# Run test script
../scripts/test.sh # Returns 1 if error ("exit 1")

# If no error (test ran successful) exit with 0 and go on with commit
exit 0
