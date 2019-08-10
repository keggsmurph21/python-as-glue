#!/usr/bin/env bash

set -e

usage() {
    echo "$0 file.[ic]"
    exit 1
}

get_filename() {
    echo $1 | sed -E 's/^(.*)\.[ci]$/\1/g'
}

PYTHON_INCLUDE="/usr/include/python2.7"

if [ -z $1 ]; then
    usage
fi

FILENAME="$(get_filename $1)"

swig -python "$FILENAME.i"
gcc -fpic -c "$FILENAME.c" "${FILENAME}_wrap.c" -I "$PYTHON_INCLUDE" 
gcc -shared "$FILENAME.o" "${FILENAME}_wrap.o" -o "_$FILENAME.so"

