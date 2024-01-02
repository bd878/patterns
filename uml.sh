#!/bin/bash

# Compiles given uml file
# to png image via plantuml script

puml="/usr/local/lib/plantuml.jar"
imgdir="images"
[ $# -lt 1 ] && { echo "Usage: $0 umlfile"; exit 2; }
umlf="$1"
[ $? -ne 0 ] && { echo "Unknown file $1. Exit."; exit 2; }

# dir/file.uml -> dir/$imgdir/file.png
pngf=$(echo "`dirname $umlf`/$imgdir/`basename $umlf`" | sed s/\.uml/\.png/g);
echo "save in $pngf"

java -jar "$puml" "$umlf" -o "$imgdir"
[ $? -eq 0 ] && xviewer "$pngf" &

exit 0;

