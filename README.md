My humble attempt to provide all of the answers to the problems in the
masterpiece "The C Programming Language, Second Edition" by Brian W. Kernighan
and Dennis M. Ritchie.

Absolutely no guarantees are made for the correctness or completeness of these
solutions!

Also, this project is used to familiarize myself with git and github, working
on this project on different machines and using common commands to organize
my work.

My own personal GIT cheat sheet:

 - git init
 
                    The first command used to initialize the project, executed
                    in the root working directory of the project
                    
 - git add *
 
                    How to add files to the stage
 
 - git commit -m "put a message here, this is optional"
 
                    This commits your changes
 
 - git remote add origin https://github.com/sfdeloach/c-prog-solutions.git
                    
                    This is how to connect the working directory on your machine
                    with the repository on github, a one-time setup command
                    
 - git push origin master
 
                    This will push all staged files to the repository
                    
 - git pull origin master
 
                    This will pull all files from the repository to your
                    working local directory
                    
 - git status
 
                    Gives a snapshot of the stage
 
 - git log
 
                    Gives a record of your commits
                    
 - git rm -r --cached node_modules
 - git commit -m 'Remove the now ignored directory node_modules'
 - git push origin master
 
                    This is how to remove a directory (named node_modules) from
                    your git repo...node_modules is a good directory to not
                    include in your repo due its size and availability to
                    download via npm
 
