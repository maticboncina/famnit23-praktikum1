#!/bin/bash

# to layer find files
echo "Looking for text files..."
find ~ -name "*.txt" > found_files.txt

# counting files
# -c counts files
echo "Files found : "
grep -c ".txt" found_files.txt

echo "Done"
