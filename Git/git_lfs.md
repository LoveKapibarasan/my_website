# LFS
* for more than 100MB file commit.

```bash

# Install
sudo apt install git-lfs
git lfs install

git lfs track "*.7z"

# Update track rule
git add .gitattributes

# Then add, commit, push

git lfs push --all origin main # if only pointer is pushed.


git lfs pull # to pull
# otherwise pointer file will be cloned.

```
