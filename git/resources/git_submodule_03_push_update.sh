git commit -am "Updated submodule"
git push
# The other users (or you after a fresh clone) need to do this:
git submodule init
git submodule update
