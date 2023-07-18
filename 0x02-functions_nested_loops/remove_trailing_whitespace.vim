" Set the 'hidden' option to allow modification of multiple files
set hidden

" Loop through all the files in the argument list
for file in argv()
  " Open each file
  execute 'edit ' . file

  " Remove trailing whitespace from each line
  %s/\s\+$//e

  " Save and close the file
  wq
endfor

" Quit Vim
quitall

