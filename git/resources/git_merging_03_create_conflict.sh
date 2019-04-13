mkdir git-repo # Create a new directory
cd git-repo # Go into that directory
git init # Initialize git in this directory
echo "master first line" > my_code.txt # Create a file
echo "master second line" >> my_code.txt # Append additional line
git add . # Newly created file needs always to be staged!
git add my_code.txt # Stage the current progress
git commit -am 'master first commit' # Commit all modified files
git checkout -b new_other_branch # Create a new branch
echo "new_other_branch third line" >> my_code.txt
echo "Hello world :D" >> my_code.txt
git commit -am 'new_other_branch first commit'
git checkout master # Go back to the master branch
echo "master third line" >> my_code.txt
echo "Hello world :D" >> my_code.txt
git commit -am 'master second commit on master'
git merge new_other_branch # Merge new branch into master branch
