ldapsearch -xLLL "(uid=z*)" | grep -i "^cn"  | sort -rf | sed 's/cn: //g'
