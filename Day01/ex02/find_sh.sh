find ./ -type file -name "*.sh" -print | rev | cut -d/ -f1 |rev | cut -d. -f1
