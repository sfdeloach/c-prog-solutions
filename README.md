# The C Programming Language
### Second Edition

My humble attempt to provide solutions to the problem sets listed in the magnum opus "The C Programming Language, Second Edition" by Brian W. Kernighan and Dennis M. Ritchie.

Absolutely no guarantees are made for the correctness or completeness of these
solutions!

Also, this project is used to familiarize myself with git and github, working on this project on different machines and using common commands to organize my work.

### My own personal GIT cheat sheet:

#### Git Basics

The first command used to initialize the project, executed in the root working directory of the project:

    git init
 
How to add files to the stage:

    git add *
 
This commits your changes, commit messages should be present tense:

    git commit -m "add javascript file"

Gives a snapshot of the stage:

    git status

Gives a record of your commits:

    git log

#### Remote Repositories

This is how you check to see what remote repositories are associated with your local repo:

    git remote -v

This is how to connect the working directory on your machine with the repository on github, a one-time setup command:

    git remote add origin https://github.com/sfdeloach/c-prog-solutions.git

This will push all staged files to the repository:

    git push origin master

This will pull all files from the repository to your working local directory:

    git pull origin master

Checkout a previous commit or a branch from your repository:

    git checkout <<hash from git log>> // to revert to a previous commit
    git checkout master                // for the head to resume on the master commit

This is how to remove a directory (named node-modules) from your git repo...node-modules is a good directory to not include in your repo due its size and availability to download via npm:

    git rm -r --cached node-modules
    git commit -m 'Remove the now ignored directory node_modules'
    git push origin master

#### Git Branches

List all of the branches in your repo. Add a `<branch>` argument to create a new branch with the name `<branch>`.

    git branch
    git branch <branch>

Create and checkout a new branch named `<branch>`. Drop the `-b` flag to checkout an existing branch.

    git checkout -b <branch>
    
Merge `<branch>` into the current branch.

    git merge <branch>

#### Rename a Local Branch and a Remote Branch

Rename the branch locally.

    git branch -m <old branch> <new branch>
    
Delete the old branch from your remote repository.

    git push origin :<old branch>  // <-- note the colon ':' preceeding the name of the old branch
    
Push the new branch, set the local branch to track the new remote branch

    git push --set-upstream origin <new branch>
