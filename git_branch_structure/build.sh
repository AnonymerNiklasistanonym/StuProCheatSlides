#! /usr/bin/env sh

pdflatex -synctex=1 -shell-escape -interaction=nonstopmode git_branch_structure.tex -job-name=git_branch_structure
