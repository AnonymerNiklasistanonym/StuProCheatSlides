#! /usr/bin/env sh

# Custom variables
FILE_ARRAY=( "*.aux" "*.aux" "*.log" "*.fls" "*.bbl" "*.blg"
             "*.pdf" "*.toc" "*.nav"
             "*.synctex.gz" "*.fdb_latexmk" "*.out" "*.snm"
             "*.vrb")
DIRECTORY_ARRAY=( "_minted*" )

# Other variables
BASEDIR=$(dirname "$0")

# Go into the correct directory
cd $BASEDIR

# Delete all the files
for i in "${FILE_ARRAY[@]}"
do
	find . -maxdepth 1 -name "${i}" -type f -delete
done
for i in "${DIRECTORY_ARRAY[@]}"
do
	find . -maxdepth 1 -name "${i}" -type d -exec rm -rf {} +
done

# Go back in the directory where the script was executed
cd $PWD
