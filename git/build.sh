#! /usr/bin/env sh

# File that should be compiled
LATEX_FILE_NAME=git-slides
# Default file name
PDF_FILE_NAME_DEFAULT="git-slides-exported"

# If given use 1st argument, else use the default file name
PDF_FILE_NAME=${1:-"${PDF_FILE_NAME_DEFAULT}"}
# Get the directory this script is in to run it from anywhere
BASEDIR=$(dirname "$0")

# Go to the correct directory (the directory of this script)
cd $BASEDIR

# Run two times the latex document to get maximum page number and other things
# (Only twice needed when run from scratch)
for ((n=0;n<2;n++))
do
	pdflatex -synctex=1 -shell-escape -interaction=nonstopmode $LATEX_FILE_NAME.tex -job-name=$PDF_FILE_NAME_DEFAULT
done

# Go back in the directory where the script was executed
cd $PWD
