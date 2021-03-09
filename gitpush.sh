#!/bin/bash
# a series of commands to push HeadFirstC to git 

git add -A
echo Commit message: 
read varname
git commit -m "$varname"
git push origin main
