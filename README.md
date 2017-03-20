# The C Programming Language
### Second Edition

My humble attempt to provide solutions to the problem sets listed in the magnum opus "The C Programming Language, Second Edition" by Brian W. Kernighan and Dennis M. Ritchie.

Absolutely no guarantees are made for the correctness or completeness of these
solutions!

Also, this project is used to familiarize myself with git and github, working on this project on different machines and using common commands to organize my work.

### My own personal GIT cheat sheet:

The first command used to initialize the project, executed in the root working directory of the project:

    git init
 
How to add files to the stage:

    git add *
 
This commits your changes:

    git commit -m "put a message here, this is optional"

This is how to connect the working directory on your machine with the repository on github, a one-time setup command:

    git remote add origin https://github.com/sfdeloach/c-prog-solutions.git

This will push all staged files to the repository:

    git push origin master

This will pull all files from the repository to your working local directory:

    git pull origin master

Gives a snapshot of the stage:

    git status

Gives a record of your commits:

    git log

This is how to remove a directory (named node-modules) from your git repo...node-modules is a good directory to not include in your repo due its size and availability to download via npm:

    git rm -r --cached node-modules
    git commit -m 'Remove the now ignored directory node_modules'
    git push origin master

